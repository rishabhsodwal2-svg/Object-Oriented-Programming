# include <iostream>
using namespace std;
class vector{                // very good i like it ❤️❤️❤️❤️❤️❤️
    public:
    int size;
    int capacity;
    int*arr;
    vector(){
        size=0;
        capacity = 1;
        arr= new int[capacity]; // initially the arr should have capacity to hold one value  
    }
    void push(int ele){
        if(size== capacity){
            capacity*=2;
            int *arr2 = new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]= arr[i];
            }
            arr = arr2;
        }
        arr[size] = ele;
        size++;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    int get(int indx){
        if(size==0){
            cout<<"the vector is empty ";
            return -1;
        }
        if(indx >=size || indx<0){
            cout<<"the invalid indx";
            return -1;
        }
        return arr[indx];

    }
    void remove_back(){
        size--;
    }
};
int main(){
    vector v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.print();
    cout<<endl;
    v.remove_back();
    v.print();
    cout<<endl;
    cout<<v.get(1);

}