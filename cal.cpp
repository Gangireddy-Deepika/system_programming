#include<iostream>
using namespace std;

class cal
{
           private:
             int x,y;
           public:
                 int add(int x,int y){
                      return x+y;
}
int sub(int x,int y){
return x-y;
}
int mul(int x,int y){
return x*y;
}
};
int main(){
cal obj;
cout<<"sum"<<obj.add(4,5);
cout<<"sub"<<obj.sub(4,5);
cout<<"product"<<obj.mul(4,5);
return 0;
}

