#include<iostream>
using namespace std;
class Node
{
public:
	int id;
	class Node* link;

private:

};

class Node* start = NULL;

class Node* createNode() {
	Node *n;
	n = new Node();
	return n;
}

void insertNode() {
	Node* tmp,*add;
	tmp = createNode();
	cout << "Enter the Id : ";
	cin >> tmp->id;
	tmp->link = NULL;
	if (start == NULL)
	{
		start = tmp;
	}
	else
	{
		add = start;
		while (add->link!=NULL)
		{
			add = add->link;
		}
		add->link = tmp;
	}
}

void showDisplay() {
	Node* disp;
	if (start == NULL)
	{
		cout << "There is no Information ";
	}
	else
	{
		disp = start;
		while (disp!=NULL)
		{
			cout << "the Id is : " << disp->id << endl;
			disp = disp->link;
		}
	}
}

void deleteNode() {
	Node* del;
	if (start == NULL) {
		cout << "There is no Item " << endl;
	}
	else
	{
		del = start;
		while (del!=NULL)
		{
			del = del->link;
		}
		delete del;
	}
}

int menuItem() {
	int ch;
	cout << "                       1.Insert Node " << endl;
	cout << "                       2.Show Display" << endl;
	cout << "                       3.Delete " << endl;
	cout << "                       4.Exit" << endl;
	cout << "\n\n Enter your Choice : " ;
	cin >> ch;
	return ch;
}

int main() {
	while (1) {
		system("cls");
		switch (menuItem()) {
		case 1: insertNode();
			break;
		case 2: showDisplay();
			break;
		case 3: deleteNode();
			break;
		case 4: exit(0);
		default:cout << "you Entered wrong choice please try again ...";
			break;
		}
		system("pause");
	}
}