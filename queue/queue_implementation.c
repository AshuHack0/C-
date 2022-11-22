
#include<stdio.h>
class queueUsingArray{
     int*data;
     int capacity;
     int size;
     int nextIndex;
     int firstIndex;
 public:

     queueUsingArray(int n)
     {
          data=new int [n];
          capacity=n;
          size=0;
          firstIndex=-1;
          nextIndex=0;
     }
     int isEmpty()
     {
         return size==0;
     }
     int sizes ()
     {
         return size;
     }
     int fronts ()
     {
         if(size==0)
         {
            // cout << "queue is empty" << endl;
            printf("queue is empty");
             return 0;
         }
         else
         {
             return data[firstIndex];
         }
     }
      void deque()
      {
          if(size==0)
          {
             // cout << " queue is empty" << endl;
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
              firstIndex++;
              size--;
          }
      }

     void enqueue(int element)
     {
         if(size==capacity)
         {
            // cout << " stack is full" << endl;
                        printf("queue is empty");
             return;
         }
         else
         {

             data[nextIndex]=element;
             nextIndex=(nextIndex+1)%capacity;
             if(firstIndex==-1)
             {
                 firstIndex=0;
             }
             size++;

         }
     }

} ;
int main ()
{

     queueUsingArray q(10);
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
                q.enqueue(data);
        }
        else if(input==2)
        {
            q.deque();
        }
        else if(input==3)
        {
            printf("%d",q.fronts());
        }
        else if(input==4)
        {
            printf("%d",q.sizes());
        }
        else if (input==5)
        {
            printf("%d", q.isEmpty());
        }
        else
        {
            printf("thanku for using our software ");
             break;
        }
    }

}
