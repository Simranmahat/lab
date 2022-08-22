#include<iostream>
#include "linkedlist.h"

using namespace std;


int main() {
    linkedList l;
    int choice,data,p;

    cout<<"\n1 to check if list is empty ao not";
    cout<<"\n2 to add to head(at the beginning)";
    cout<<"\n3 to add to tail (at the end)";
    cout<<"\n4 to add wherever";
    cout<<"\n5 to delete from head(from the beginning)";
    cout<<"\n6 to delete";
    cout<<"\n7 to search";
    cout<<"\n8 to retrieve";
    cout<<"\n9 to Display";
	cout<<"\n0 to Exit";
   
	
	
	
	
	do {
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		switch (choice)
		{ 
            case 1:
                if(l.isEmpty()) {
                cout<<"The list is empty!\n";
                }

	            else {
		        cout<<"The list is not empty! List contains:\n";
		        l.traverse();
	            }
                
                break;

			case 2:
				cout<<"Enter Element: ";
				cin>>data;
				l.addToHead(data);
				break;
				
			case 3:
				cout<<"Enter Element: ";
				cin>>data;
				l.addToTail(data);
				break;
				
			case 4:
				cout<<"Enter Element: ";
				cin>>data;
				l.add(data,l.HEAD);
				break;
				
			case 5:
				l.removeFromHead();
				break;
				
				
			case 6:
				cout<<"Enter data : ";
				cin>>data;
				l.remove(data);
				break;
				
			case 7:
				
                cout<<"enter the data u want to search in list";
                cin>>data;
                if(l.search(data)==1){
                    cout<<"it exist in list"<<endl;
                }
                else{
                    cout<<"it doesn't exist in list"<<endl;
                }


				break;

            case 8:
            cout<<"enter the data"<<endl;
            cin>>data;

            cout<<"the address of given data"<<l.retrieve(data,l.HEAD);
            break;


            case 9:
               	l.traverse();
             
               break;

            case 0:
              break;

				
		}
	} while (choice != 0);
	
}