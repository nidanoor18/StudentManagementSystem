#include <iostream>
#include <string>
#include <cstdlib>
using namespace std; 
  string arr1[30], arr2[30], arr3[30], arr4[30], arr5[30];
  int total = 0;
  void enter();
  void show();
  void search();
  void update();
  void deleterecord();
  void enter()
 {  
 int choice;  
 cout << "How many students do you want to enter?\t";  
 cin >> choice; 
 if (total == 0)  
{  
total = total + choice;  
for (int i = 0; i < choice; i++)  
{   
cout << "\nEnter data of student:" << i + 1 << endl<< endl; 
 cout << "Enter name:";  
 cin >> arr1[i]; 
   cout << "Enter Roll no:";   
   cin >> arr2[i];   
   cout << "Enter course:";  
    cin >> arr3[i]; 
      cout << "Enter class:"; 
	   cin >> arr4[i];   
	   cout << "Enter contact:"; 
	     cin >> arr5[i];  
} 
} 
 else  
{  
for (int i = total; i < total+choice; i++)
{   
cout << "\nEnter data of student:" << i + 1 << endl <<endl;  
}  
total = total +choice;  
}  
}   
void show()  
{  
if(total==0)  
{  
cout << "No data is entered." << '\n';  
} 
 else 
  { 
   for (int i = 0; i < total; i++)  
{  
 cout << "\nData of Student " << i + 1 << endl <<endl;  
 cout << "Name " << arr1[i] << endl;   
 cout << "Roll no " << arr2[i] << endl;  
  cout << "Course " << arr3[i] << endl;   
  cout << "Class " << arr4[i] << endl;  
   cout << "Contact " << arr5[i] << endl;  
}  
}  
}  
void search()  
{  if (total == 0)  
{  
cout << "No data is entered." << '\n';  
} 
 else  
{ 
 string rollno;  
  cout << "Enter Roll no of student which you want to search:";  
cin >> rollno; 
 for (int i = 0; i < total; i++)  
{  if (rollno == arr2[i])  
{   
cout << "\nData of Student " << i + 1 << endl << endl;  
cout << "Name " << arr1[i] << endl;  
 cout << "Roll no " << arr2[i] << endl;  
 cout << "Course " << arr3[i] << endl;  
  cout << "Class " << arr4[i] << endl;  
   cout << "Contact " << arr5[i] << endl;  
} 
 else  
{  
         cout << "This roll no is not in our record. Try accurate one." << '\n';  
}  
}  
}   
}    
void update()  
{  
if (total == 0)  
{  
  cout << "No data is entered." << '\n';  
}  
else  {  string rollno;  
 cout << "Enter Roll no of student which you want to update:"; 
  cin >> rollno;  
  for (int i = 0; i < total; i++)  
{  
if (rollno == arr2[i])  
{   
cout << "\t PREVIOUS DATA:";  
 cout << "\nData of Student " << i + 1 << endl << endl;
  cout << "Name " << arr1[i] << endl; 
    cout << "Roll no " << arr2[i] << endl; 
     cout << "Course " << arr3[i] << endl; 
	 cout << "Class " << arr4[i] << endl; 
	   cout << "Contact " << arr5[i] << endl;
	     cout << "\nEnter New Data:"; 
		 cout << "Enter name:";  
                                    cin >> arr1[i];  
 cout << "Enter Roll no:"; 
   cin >> arr2[i];  
 cout << "Enter course:"; 
   cin >> arr3[i]; 
     cout << "Enter class:";
	   cin >> arr4[i];   
   cout << "Enter contact:";                                    
    cin >> arr5[i];  
}  
else  
{  
cout << "This roll no is not in our record. Try accurate one." << '\n';  
}  
}  
} 
 }   
void deleterecord()  
{  
if (total == 0)  
{  
cout << "No data is entered." << '\n';  
} 
 else  
{          
int a;  
          cout << "Press 1 to delete full record:" << endl; 
		  cout << "Press 2 to delete specific record:" << endl; 
cin >> a;  
if (a == 1)  
{  
total = 0;  
 cout << "All record is deleted." << endl;  
}  
else if (a == 2)  
{  
string rollno;   
cout << "Enter Rollno of student which you want to delete:";      
    cin >> rollno;       
        for (int i = 0; i < total; i++)  
          {  
if (rollno == arr2[i])  
{                  
   int j;                 
     for (j = i ; j <total ; j++)                    
{  
arr1[j] = arr1[j + 1]; 
   
   arr2[j] = arr2[j + 1];     
  arr3[j] = arr3[j + 1];                
         arr4[j] = arr4[j + 1];           
	               arr5[j] = arr5[j + 1];  
}  
     total--;  
cout << "Your required record is deleted";  
     }  
}  
}  
}  
} 
int main()  
{  
int value; 
  while (true)  
{  
cout << "Press 1 to enter data" << endl;        
     cout << "Press 2 to show data" << endl;  
         cout << "Press 3 to search data" << endl;                              
cout << "Press 4 to update data" << endl;   
        cout << "Press 5 to delete data" <<endl; 
	                 cout << "Press 6 to exit" << endl;                       cin >>value;  
                     switch (value)  
{  
case 1: 
 enter(); 
  break; 
   case 2:
     show(); 
	 break; 
	   case 3: 
	   search();
	    break;  
	     case 4: 
		 update(); 
		  break;  
		   case 5 :
		    deleterecord(); 
		    break;   
		    case 6:  
		       exit(0); 
			    break;  
			         default: 
			  cout << "Invalid input.";  
				 break;  
}  
}  
}  
     
 
 
 
 
