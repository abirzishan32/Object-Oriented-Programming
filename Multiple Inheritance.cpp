#include <bits/stdc++.h>
using namespace std;


class A{
public:
    A(int b) {
        cout<<"A"<<endl;
    }
};

class B{
public:
    B(int a) {
        cout<<"B"<<endl;
    }
};

class C : public B, public A{ //এখানে আগে B আছে এবং এরপর A আছে। তাই constructor call হওয়ার
                              //   সময় আগে B এর কল হবে এরপর A এর কল হবে 
public:
    C(int a, int b) : B(a), A(b){ //এখানে   B(a), A(b) দিতে হবে কারণ C হলো  হতে একটা ডিরাইভড ক্লাস, তাই ডিরাইভড ক্লাসের
                                  //ক্রিয়েট করতে হলে এর আগে বেইস ক্লাসের কন্সট্রাক্টর থাকতে হবে। 
        cout << "C"<<endl;
    }
};


int main(){
    C obj(1, 2);
    return 0;
}
