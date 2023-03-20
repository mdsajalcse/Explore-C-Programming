#include<stdio.h>
int main(){
  //create variables
  int myIntNum=19;
  float myFloatNum=10.33;
  double myDoubleNum=10.888888;
  char myCharLetter='A';

 //size of data type
  printf("Size of int is::%d\n", sizeof(myIntNum));
  printf("Size of Float is:: %d\n", sizeof(myFloatNum));
  printf("size of Double is:: %d\n",sizeof(myDoubleNum));
  printf("size of character is::%d\n",sizeof(myCharLetter));

return 0;
}
