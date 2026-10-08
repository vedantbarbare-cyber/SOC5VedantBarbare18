#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of products: ";
    cin>>n;
    string name[n];
    int quantity[n];
    float price[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter details of product "<<i+1<<":\n";
        cout<<"Name: ";
        cin>>name[i];
        cout<<"Quantity sold: ";
        cin>>quantity[i];
        cout<<"Price per piece: ";
        cin>>price[i];
    }

    int totalquantity=0;
    float totalsale=0;


    cout<<"\n--- Product Details ---\n";
    for(int i=0;i<n;i++)
    {
        float saleamount=quantity[i]*price[i];
        cout<<"Product: "<<name[i]
            <<" \n| Quantity Sold: "<<quantity[i]
            <<" \n| Price : "<<price[i]
            <<" \n| Sale Amount: "<<saleamount<<endl;
            
            totalquantity+= quantity[i];
            totalsale+= saleamount;
    }

    cout<<"\nTotal Quantity Sold: "<<totalquantity<<endl;
    cout<<"Total Sale Amount: "<<totalsale<<endl;

    return 0;
}