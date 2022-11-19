#include<stdio.h>
class stackUsingArrays{
          int*data;
          int nextIndex;
          int capacity;
          // constructor are used for intiallingzing the things
 public:
          stackUsingArrays(int n)
          {
              data= new int [n];
              capacity=n;
              nextIndex=0;
          }

          int size()
          {
            return nextIndex;
          }
        int IsEmpty()
          {
  if (nextIndex==0)
  {
     return 1;
  }
  else
  {
      return 0;
  }
  //              return nextIndex==0;
          }
          void push(int da)
          {
              if(nextIndex==capacity)
              {
                 /* cout << " stack is full";
                  return;*/
                  int *newdata = new int [ 2*capacity]; //doubling the array
                  for (int i=0 ; capacity>i;i++) // copying to new array
                  {
                      data[i]=newdata[i];
                  }
                  capacity*=2;
                  delete [] data;
                  data=newdata;

              }
              else
              {
                  data[nextIndex]=da;
                  nextIndex++;
                  return;
              }
          }
          void  pop()
          {
              if(nextIndex==0)
              {
                  //cout << "stack is empty";
                  printf("stack is empty");
              }
              else{
              nextIndex--;
              return;
              }
          }
         int top ()
         {
             if (nextIndex==0)
             {
                 //cout << " no element is present" ;
                 printf("not element is present");
                 return  -1;
             }
             else
             {
                 return data[nextIndex-1];
             }

         }

};
int main ()
{

    // actually we have to remove the constrainent i.e taking the input so
    // we have to do is
    // when the stack is full we have to
    // double the array
    // also copy all the element int new double array
    // and update the nextindex;
    /*int n;
    cin >> n;*/
    stackUsingArrays  stackk(4);
     printf( "chose what you want to do 1.push 2.pop 3.top 4.size 5.isEmpty 6.exit");
    while(true)
    {
        //cin >> input;
        int input;
        scanf("%d", &input);
        if(input==1)
        {
            int data;
             scanf("%d",&data);
            stackk.push(data);
        }
        else if(input==2)
        {
            stackk.pop();
        }
        else if(input==3)
        {
            printf("%d",stackk.top());
        }
        else if(input==4)
        {
            printf("%d",stackk.size());
        }
        else if (input==5)
        {
            printf("%d", stackk.IsEmpty());
        }
        else
        {


            printf("thanku for using our software ");
             break;
        }

    }



}
