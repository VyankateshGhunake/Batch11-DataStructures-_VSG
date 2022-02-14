/*  WAP to maintain book-library using singly linked list data structure
	data - bookid, bookname, author
	menus - Add Book, Show Book, Delete Book, Exit 
	a. using switch case without functions */
	
#include<iostream>
#include<windows.h>

using namespace std;
	class Book
	{
		public:
			int bookId;
			char bookName[20];
			char author[20];
			
		Book *next;
	};
int main()
{
	int choice;
	Book *current;
	Book *first=NULL;
	Book *fptr;
	Book *temp;
	
	while(1)
	{
		cout<<"\n 1. Add Book";
		cout<<"\n 2. Show Book";
		cout<<"\n 3. Delete Book";
		cout<<"\n 4. Exit";
		
		cout<<"\n Enter choice :";
		cin>>choice;
		
		cout<<"\n Loading..";
		Sleep(500);
		system("cls");
		
		switch(choice)
		{
			case 1:
				current = new Book();
				if(first==NULL)
				{
					first = fptr = current;
				}
				else
				{
					fptr->next = current;
					fptr = current;
				}
				
				cout<<"\n Enter Book ID : ";
				cin>>current->bookId;
				
				cout<<"\n Enter Book Name : ";
				cin>>current->bookName;
				
				cout<<"\n Enter Author Name : ";
				cin>>current->author;
				
				current->next = NULL;
				cout<<"\n Book Added successfully..!";
				break;
			case 2:
				if(first==NULL)
				{
					cout<<"\n The Library is empty..!";
				}
				else
				{
					temp = first;
					while(1)
					{
						cout<<"\n"<<temp->bookId<<"\t"<<temp->bookName<<"\t"<<temp->author;
						
						if(temp->next==NULL)
							break;
							
						temp = temp->next;
					}
				}
				break;
			case 3:
				int ubookid;
				cout<<"\n Enter Book ID to delete : ";
				cin>>ubookid;
				
				if(ubookid==first->bookId)
				{
					temp = first;
					first = first->next;
					delete temp;
					cout<<"\n BookID "<<ubookid<<" deleted successfully..!";
				}
				else
				{
					if(first==NULL)
					{
						cout<<"\n The Library is empty..!";
					}
					else
					{
						Book *v = NULL;
						Book *pret = first;
						temp = first;
					
						while(1)
						{
							if(ubookid==temp->bookId)
							{
								v = temp;
								break;
							}
						
							if(temp->next==NULL)
							{
								break;
							}
						
							pret = temp;
							temp = temp->next;
						}
					
					if(v==NULL)
					{
						cout<<"\n Book Not Found..!";
					}
					else
					{
						pret->next = v->next;
						
						delete v;
						cout<<"\n BookID "<<ubookid<<" deleted successfully..!";
					}
				}
				}
				break;
			case 4:
				exit(0);
				break;
			default :
				cout<<"\n Invalid choice..!";
		}
	}
	
	return 0;
}
