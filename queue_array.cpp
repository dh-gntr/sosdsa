#include <bits/stdc++.h> 
class Queue {
    int *arr;
    //int front;
    int back ;
    int size;
public:
    Queue() {
        // Implement the Constructor
        arr = new int[5000];
        //front = -1;
        back = -1;
        size = 5000;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(back == -1)
        return true;
        else
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        back++;
        if(back<size)
        arr[back] = data;
        else
        cout<<"queue full";


    }

    int dequeue() {
        // Implement the dequeue() function
        if(back != -1)
        {
        int temp = arr[0];
        back--;
        for (int i = 0; i <= back; i++) {
          arr[i] = arr[i + 1];
        }
        return temp;
        }
        else
        return -1;
    }

    int front() {
        // Implement the front() function
        if(back!=-1)
        return arr[0];
        else
        return -1;
    }
};
