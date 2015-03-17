using namespace std;

int main()
{
 int a, b;
 cout<<"Please anter a number:";
 cin>>a;
 for(int n=0;a!=1;n++)
 {
  cout<<a<<" ";
  b=a%2;
  if(b==0)
   a=a/2;
  else
   a=a*3+1;
 }
 cout<<a<<endl;
 return 0;
}

