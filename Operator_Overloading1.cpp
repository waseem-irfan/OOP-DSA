/**********Operator Overloading ***********/
/*------------------------------Example 1--------------------------*/

// #include<iostream>
// #include<string>
// using namespace std;

// struct YouTubeChannel{
//     string Name;
//     int SubscriberCount;
//     YouTubeChannel(string name, int subscriberCount){
//         Name = name;
//         SubscriberCount = subscriberCount;

//     }
// };
// ostream& operator<<(ostream& COUT, YouTubeChannel& YTchannel){
//     COUT<<"Name : "<<YTchannel.Name<<endl;
//     COUT<<"Subscribers: "<<YTchannel.SubscriberCount<<endl;
// }

// int main(){
//     YouTubeChannel Y1 = YouTubeChannel("Robotics",40000);
//     YouTubeChannel Y2 = YouTubeChannel("Robotics_CLUB",48900);
//     cout << Y1<<Y2;
//     return 0;
// }

/*---------------------------------Example 2-----------------------------*/

// #include<iostream>
// using namespace std;
// class Weight {
//     private:
//     int kg;
//     public:
//     Weight(){
//         kg = 0;
//     }
//     Weight(int x){
//         kg = x;
//     }
//     void printWeight(){
//         cout<<"Weight in Kg is : "<<kg<<endl;
//     }
//     void operator ++ (){
//         ++kg;
//     }

// };
// int main(){
//     Weight W1;
//     W1.printWeight();
//     ++W1;
//     W1.printWeight();
//     return 0;
// }


/*--------------------------------Example 3---------------------------*/

// #include <iostream>
// using namespace std;
// class A {
// private:
//     int a;
  
// public:
//     // parameterized constructor
//     A(int l) { a = l; }
  
//     // This is automatically called
//     // when ! operator is
//     // used with object
//     bool operator!()
//     {
//         a = !a;
//         if (a)
//             return true;
//         else
//             return false;
//     }
// };
  
// // Driver Code
// int main()
// {
//     // Assigning by overloading constructor
//     A a1(7), a2(0);
  
//     // Overloading ! Operator
//     if (!a1) {
//         cout << "a1 value is zero" << endl;
//     }
//     else {
//         cout << "a1 value is non-zero" << endl;
//     }
  
//     if (!a2) {
//         cout << "a2 value is zero" << endl;
//     }
//     else {
//         cout << "a2 value is non-zero" << endl;
//     }
// }

/*--------------------------Example 4-----------------------*/

#include <iostream>
using namespace std;
const int SIZE = 10;

class safearay {
   private:
      int arr[SIZE];
      
   public:
      safearay() {
         register int i;
         for(i = 0; i < SIZE; i++) {
           arr[i] = i;
         }
      }
      
      int &operator[](int i) {
         if( i > SIZE ) {
            cout << "Index out of bounds" <<endl; 
            // return first element.
            return arr[0];
         }
         
         return arr[i];
      }
};

int main() {
   safearay A;

   cout << "Value of A[3] : " << A[3] <<endl;
   cout << "Value of A[6] : " << A[6]<<endl;
   cout << "Value of A[12] : " << A[12]<<endl;

   return 0;
}