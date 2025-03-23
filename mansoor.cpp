#include <iostream>
using namespace std;
int arr[20] // membuat Array dengan panjang data 20
int n; //membuat Variable inpuan n
void input(){
//procedure input
    while (true){
      cout<<"masukkan jumlah data pada array">>;//membuat inputan jumlah elment array
      cin>>n;//memanggil variable inputan n
      if (n<=20)
        {
        //membuat kondisi n tidak lebih dari 20
        break;
        }
      else
      {
         cout<<"\n narray yang anda masukan maksimal 20elmen.\n"; //menamilkan pesan jika data lebih dari 20 
      }
      
      cout<<endl; //membuat jarka per baris program
      cout<<"======================="<<endl;//membuat tampilan susunan data element array
      cout<<"masukan elment array"<<endl;
      cout<<"======================="<<endl;
    
     }
     for (int  i = 0; i < n; i++){

      {
        cout<<"data ke_"<<(i+1)<<":";
        cin>>arr[i];}
    }
  
}  
void insertionSort(){
        int temp;
        int j,i;
        for (i=1; i<=n-1; i++)
        {
             //step 1
        temp= arr[i];
        j=i-1;
       while (j>=0 && arr[j]>temp){}
       {
       arr[j+1]= arr[j];
       j--;
       }
       arr[j+1= temp;]
        }
    }
void disply(){
  cout<<endl;
  cout<<"============="<<endl;
  cout<<"total passes ="<<n-1<<endl;
  cout<<"=============="<<endl;
  cout<<"element array yang telah tersusan"<<endl;
  cout<<"==============="<<endl;

  for (int j=0; j < n; j++)
  {
   cout<<arr[j]<<endl;
  }
  cout<<endl;
  
}

}