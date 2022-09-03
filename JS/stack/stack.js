class Stack
{
	constructor(n)
	{
		this.arr = new Array(n);
		this.size = n;
		this.top = -1;	
	}

    isEmpty = ()=>{
        if(this.top === -1)
            return true;
        return false;
    }

    isFull = () =>{
        if(this.top >= this.size -1)
            return true;
        return false;
    }

    push = (x) =>{
        if(this.isFull())
            return console.error("The stack is overflow, can't push into stack");
        this.top += 1;
        this.arr[this.top] = x;
        console.info(`An element ${x} is pushed into stack`);
    }

    pop = () =>{
        if(this.isEmpty())
            return console.error("The stack is underflow, can't pop from stack");
        this.top -= 1;
        console.info(`An element is popped from the stack`);
    }

    peek = () =>{
        if(this.isEmpty())
            return console.error("The stack is underflow");
        console.info(`The top element of the stack is ${this.arr[this.top]}`);
    }

}

let st = new Stack(10);

st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);

st.peek();

st.pop();
st.pop();
st.pop();
st.pop();
st.pop();
st.pop();

st.peek();