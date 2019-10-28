   #include <iostream>
  
   using namespace std;


   int power(int base, int exp)
   {
      if( exp == 0)
         return 1;
      
      int product ;
    
      product = base * power(base, exp-1);

 
      return product;
   }


   int main()
   {

      int exp;
      int base;
      int product;
      char answer;   

     
     
         cout << " Type in a base: ";
         cin >> base;
         cout << " Now type in an exponent: ";
         cin >> exp;

         while(exp < 0)
         {
            cout << " Invalid Input \n\n Please enter a positive number: ";
            cin >> exp;
         }


         product = power(base, exp);

         cout << " " << base << " raised to " << exp << " equals " << product << endl;  


   return 0;

   }



