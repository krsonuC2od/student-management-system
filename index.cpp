#include<iostream>
using namespace std;
string arr1[30],arr2[30],arr3[30],arr4[30],arr5[30],arr6[30];
int total=0;
void enter()
{
int choice;
cout<<"Enter the num of student do you want to register :";
cin>>choice;
if(total==0){

total=total+choice;

for(int i=0;i<choice;i++)
{
  cout<<"\nEnter data of student:"<<i+1<<endl<<endl;
  cout<<"\nEnter the name of student :";
  cin>>arr1[i];
  cout<<"\nEnter the Branch :";
  cin>>arr2[i];
  cout<<"\nEnter the Roll num of student :";
  cin>>arr3[i];
  cout<<"\nEnter the course :";
  cin>>arr4[i];
  cout<<"\nEnter the class :";
  cin>>arr5[i];
  cout<<"\nEnter the contact num :";
  cin>>arr6[i];
}
}
else{
  
  for(int i=total;i<total+choice;i++)
{
  cout<<"\nEnter data of student:"<<i+1<<endl<<endl;
  cout<<"Enter the name of student :";
  cin>>arr1[i];
  cout<<"Enter the Branch :";
  cin>>arr2[i];
  cout<<"Enter the Roll num of student :";
  cin>>arr3[i];
  cout<<"Enter the course :";
  cin>>arr4[i];
  cout<<"Enter the class :";
  cin>>arr5[i];
  cout<<"Enter the contact num :";
  cin>>arr6[i];
}
total=total+choice;
}
}
void view()

{
  if(total==0)
  {
    cout<<"Data is not Avilebal...!!"<<endl<<endl;
  }
  else{

  
for(int i=0;i<total;i++)
{
  cout<<"Data of student :"<<i+1<<endl<<endl;
  cout<<"Name :"<<arr1[i]<<endl;
  cout<<"Branch :"<<arr2[i]<<endl;
  cout<<"Roll no :"<<arr3[i]<<endl;
  cout<<"course :"<<arr4[i]<<endl;
  cout<<"class :"<<arr5[i]<<endl;
  cout<<"Contact :"<<arr6[i]<<endl<<endl;
}
}
}
void find()
{
   if(total==0)
  {
    cout<<"Data is not Avilebal ..!!"<<endl<<endl;
  }
  else{
string rollno;
cout<<"Enter Rollno which u wnt to find :";
cin>>rollno;
for(int i=0;i<total;i++)
{
  if(rollno==arr3[i])
  {
  cout<<"Data of student :"<<i+1<<endl<<endl;
  cout<<"Name :"<<arr1[i]<<endl;
  cout<<"Branch :"<<arr2[i]<<endl;
  cout<<"Roll no :"<<arr3[i]<<endl;
  cout<<"course :"<<arr4[i]<<endl;
  cout<<"class :"<<arr5[i]<<endl;
  cout<<"Contact :"<<arr6[i]<<endl<<endl;
  }
}
}
}
void updt()
{
   if(total==0)
  {
    cout<<"Data is not Avilebal ..!!"<<endl<<endl;
  }
  else{
string rollno;
cout<<"Enter Rollno which u wnt to update :";
cin>>rollno;
for(int i=0;i<total;i++)
{
  if(rollno==arr3[i])
  {
  cout<<" This is ur previous data"<<endl<<endl;
  cout<<"Data of student :"<<i+1<<endl<<endl;
  cout<<"Name :"<<arr1[i]<<endl;
  cout<<"Branch :"<<arr2[i]<<endl;
  cout<<"Roll no :"<<arr3[i]<<endl;
  cout<<"course :"<<arr4[i]<<endl;
  cout<<"class :"<<arr5[i]<<endl;
  cout<<"Contact :"<<arr6[i]<<endl<<endl;
  cout<<" \n Enter new data"<<endl;
  cout<<"\nEnter  your name :";
  cin>>arr1[i];
  cout<<"\n Enter your Branch name :";
  cin>>arr2[i];
  cout<<"\n Enter your roll number :";
  cin>>arr3[i];
  cout<<"\n Enter your course name :";
  cin>>arr4[i];
  cout<<"\n Enter your class name  :";
  cin>>arr5[i];
  cout<<" \nEnter your contact number  :";
  cin>>arr6[i];
  }
}
}
}
void deletedata()
{
   if(total==0)
  {
    cout<<"Data is not Avilebal ..!!"<<endl<<endl;
  }
  else{
int x;
cout<<"press 1 to delete  All data :"<<endl;
cout<<"press 2 to delete specific data :"<<endl;
cin>>x;
if(x==1)
{
total=0;
cout<<"All data clear "<<endl;
}
else if(x==2)
{
string rollno;
int j;

cout<<"Enter rollno which student data u wnt to Delete :"<<endl;
cin>>rollno;
for(int i=0;i<total;i++)
{
  if(rollno==arr3[i])
  {
    for(j=i;j<total;j++)
    {
      arr1[j]=arr1[j+1];
      arr2[j]=arr2[j+1];
      arr3[j]=arr3[j+1];
      arr4[j]=arr4[j+1];
      arr5[j]=arr5[j+1];
      arr6[j]=arr6[j+1];
    }
    total--;
    cout<<"Your Data is deleted "<<endl;
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
    cout<<"press 1 to enter student deatial"<<endl;
    cout<<"press 2 to  View student deatial"<<endl;
    cout<<"press 3 to find student deatial"<<endl;
    cout<<"press 4 to update student deatial"<<endl;
    cout<<"press 5 to delete student deatial"<<endl;
    cout<<"press 6 to Exit"<<endl;
    cin>>value;

    switch (value)
    {
    case 1:
      enter();
      break;
    case 2:
      view();
      break;
    case 3:
      find();
      break;
    case 4:
      updt();
    break;
    case 5:
      deletedata();
      break;
    case 6:
      exit(0);
      break;
    
    default:
    cout<<"Enter valid value !!" <<endl;
      break;
    }
  
    }
    return 0;
}

