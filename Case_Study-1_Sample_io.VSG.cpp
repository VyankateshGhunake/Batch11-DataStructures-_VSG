/*  WAP to maintain book-library using singly linked list data structure
	data - bookid, bookname, author
	menus - Add Book, Show Book, Delete Book, Exit 
	c. using sample input and output 
		#1
	    *2
 	    101
        HTML
	    James
	    102
	    CSS
	    John
		#1
	    *1
	    103
	    JavaScript
	    Gosling
	    #2
	    ....... show all available linked list of book details
	    #3
	    105
	    False
	    #3
	    101
	    True */

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
	int bnum;
	Book *current;
	Book *first=NULL;
	Book *fptr;
	Book *temp;
	
	while(1)
	{
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cin>>bnum;
				for(int i=1;i<=bnum;i++)
				{
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
					cin>>current->bookId;
					cin>>current->bookName;
					cin>>current->author;
					
					current->next = NULL;
				}
				break;
			case 2:
				temp = first;
				while(1)
				{
					cout<<temp->bookId<<"\t"<<temp->bookName<<"\t"<<temp->author<<"\n";
					
					if(temp->next==NULL)
					break;
					
					temp = temp->next;
				}
				break;
			case 3:
				int ubookid;
				cin>>ubookid;
				
				if(ubookid==first->bookId)
				{
					temp = first;
					first = first->next;
					delete temp;
					cout<<"True";
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
						cout<<"False";
					}
					else
					{
						pret->next = v->next;
						
						delete v;
						cout<<"True";
					}
				}
				break;
			case 4:
				exit(0);
				break;
		}
	}
	return 0;
	
}
