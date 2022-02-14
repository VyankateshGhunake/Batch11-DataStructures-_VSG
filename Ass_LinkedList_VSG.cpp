/* Adding List Items in Singly Linked List */

#include<iostream>

using namespace std;
	class Player
	{
		public:
			int playerId;
			char playerName[20];
			
		Player *next;
		
		void addPlayer()
		{
			cout<<"\n Enter Player ID : ";
			cin>>playerId;
			
			cout<<"\n Enter Player Name : ";
			cin>>playerName;
		}
		
		void show()
		{
			cout<<"\n"<<playerId<<"\t"<<playerName;
		}
	};
	
	Player *current;
	Player *first=NULL;
	Player *fptr=NULL;
	
	void addAtEnd()
	{
		current = new Player();
		if(first==NULL)
		{
			first = fptr = current;
		}
		else
		{
			fptr->next = current;
			fptr = current;
		}
		current->addPlayer();
		current->next = NULL;
	}
	
	void addAtFirst()
	{
		current = new Player();
		if(first==NULL)
		{
			first = fptr = current;
			first->next = NULL;
		}
		else
		{
			current->next = first;
			first = current;
			current = fptr;
		}
		first->addPlayer();
	}
	
	void addAfter()
	{
		int node;
		Player *temp,*x=NULL,*x2; 
		cout<<"\n Enter Player ID after which you want to Add Player : ";
		cin>>node;
		
		temp = first;
		while(1)
		{
			if(temp->playerId==node)
			{
				x = temp;
				break;
			}
			
			else if(temp->next==NULL)
			{
				break;
			}
			temp = temp->next;
		}
		
		if(x==NULL)
		{
			cout<<"\n Player not found..!";
		}
		else if(x->playerId==current->playerId)
		{
			addAtEnd();
		}
		else
		{
			x2 = x->next;
			current = new Player();
			
			x->next = current;
			current->next = x2;
			current->addPlayer();
			
			current = fptr;
		}
	}
	
	void showAll()
	{
		Player *temp;
		if(first==NULL)
		{
			cout<<"\n List is Empty..!";	
		}
		else
		{
			cout<<"\n Players are..";
			temp = first;
			while(1)
			{
				temp->show();
				if(temp->next==NULL)
					break;
			
				temp = temp->next;
			}
		}
	}
int main()
{
	int choice;
	while(1)
	{
		cout<<"\n 1. Add Player at End";
		cout<<"\n 2. Add Player at First";
		cout<<"\n 3. Add Player after";
		cout<<"\n 4. Show all Players";
		cout<<"\n 5. Exit";
		
		cout<<"\n Enter your choice :";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				addAtEnd();
				cout<<"\n Player added at End..!";
				break;
			case 2:
				addAtFirst();
				cout<<"\n Player added at First..!";
				break;
			case 3:
				addAfter();
				cout<<"\n Player added..!";
				break;
			case 4:
				showAll();
				break;
			case 5:
				exit(0);
				break;
			default:
				cout<<"\n Invalid choice..!";
		}
	}
	
	return 0;
}
