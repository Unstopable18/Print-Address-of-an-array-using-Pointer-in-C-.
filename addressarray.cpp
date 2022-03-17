 #include<iostream>
using namespace std;

int main()
{
    int i, n,arr[100],*p;
    cout<<"**************************************\n";
    cout<<"Enter Total No. of Array Elements =  ";
    cin>>n;
    cout<<"**************************************\n";
    cout << "Enter "<<n<<" Number of Array Elements \n";
    for (i = 0; i < n; i++) 
    {
        cin>>arr[i];    
    }
    cout<<"\n**************************************\n";
    cout << "***Address of Array by Pointer***";
    cout<<"\n**************************************\n";
    for (i = 0; i < n; i++) 
    {
        p = &arr[i];
        cout << "Address Of "<< arr[i] << " is ===> "<<p<<endl;
    }
    cout<<"\n**************************************\n";
    return 0;
}