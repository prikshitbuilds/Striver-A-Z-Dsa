void MyStack ::push(int x) {
    // Your Code
    top = top+1;
    arr[top]=x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code
    if(top==-1) return -1;
    int deleetd = arr[top];
    top= top-1;
    return deleetd;
}
