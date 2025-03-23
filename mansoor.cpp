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
    for (int  i = 0; i < n; i++)
    {
        cout<<"data ke_"<<(i+1)<<":";
        cin>>arr[i];
    }
    

}