
#include <iostream>

using namespace std;
//arrays={comsume , produce}
int a0a1[] = {4,0};
int a1a2[] = {2,0};
int a2a3[] = {0,0};
int a3a1[] = {4,0};

void a0(){
    a0a1[0]-=3;
}
void a1(){
    a1a2[0]+=1;
    a0a1[1]+=2;
    a3a1[0]-=4;
}
void a2(){
    a1a2[0]-=3;
    a2a3[1]+=4;
}
void a3(){
    a2a3[0]-=1;
    a3a1[1]+=3;
}
void typeBuffer(){
    for (int i = 0; i < 2; ++i) {
        cout<<" a0a1["<<i<<"]="<<a0a1[i];
    }
    cout<<"\n";
    for (int i = 0; i < 2; ++i) {
        cout<<" a1a2["<<i<<"]="<<a1a2[i];
    }
    cout<<"\n";
    for (int i = 0; i < 2; ++i) {
        cout<<" a2a3["<<i<<"]="<<a2a3[i];
    }
    cout<<"\n";
    for (int i = 0; i < 2; ++i) {
        cout<<" a3a1["<<i<<"]="<<a3a1[i];
    }
    cout<<"\n";
}
int main(){
    a0();
    cout<<"a0:"<<"\n";
    typeBuffer();
    a1();
    cout<<"a1:"<<"\n";
    typeBuffer();
    a2();
    cout<<"a2:"<<"\n";
    typeBuffer();
    a3();
    cout<<"a3:"<<"\n";
    typeBuffer();
    a3();
    cout<<"a3:"<<"\n";
    typeBuffer();
    a0();
    cout<<"a0:"<<"\n";
    typeBuffer();
    a1();
    cout<<"a1:"<<"\n";
    typeBuffer();
    a3();
    cout<<"a3:"<<"\n";
    typeBuffer();
    a1();
    cout<<"a1:"<<"\n";
    typeBuffer();
    a3();
    cout<<"a3:"<<"\n";
    typeBuffer();
}