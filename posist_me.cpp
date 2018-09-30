#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

struct dlist{
	string data;
	int nodeNumber;
	string nodeId;
	string referenceNodeId;
	string childReferenceNodeId;
	string genesisReferenceNodeId;
	string hashValue;
	
};

vector<dlist> v;
int pos=0;


struct Node{
	
	int data;
	vector <Node *> child;
	Node* root;
	
	Node(int d)
	{
	  data = d;
	  root = NULL; 	
	}
};

struct Data{
	int ownerId;
	float value;
	string ownerName;
	
	struct hash{
		int id;
		int value;
		string name;
	};
	
	
};

void createNode(int data)
{
	
	Node *newNode = new Node(data);
	v[pos] = newNode;
	pos++;
	return;
}

void childNode(int data)
{
	if(data<root->data)
	{
	
	Node *newNode = new Node(data);
	child[nextIndex] = &newNode;
	nextIndex++;
}

 float hashfn(int id , float value , string *name)
 {
 	int len = name.size();
 	int sum=0;
 	for(int i=0 ; i<len ; i++)
 	{
 		sum = sum + name[i]%10;
 	}
 	float result;
 	result = sum + id%100 + value%100;
 	return result;
 } 
  
  bool check(int id1 ,float value1 ,string *name1);
  {
  	int len = name1.size();
 	int sum=0;
 	for(int i=0 ; i<len ; i++)
 	{
 		sum = sum + name[i]%10;
 	}
 	float result;
 	result = sum + id1%100 + value1%100;
 	
	float f = hashfn(id1 , value1 , name1);
	
	if(f==result)
	return 1;
	else
	return 0;
  }	
   	
   	void editvalue(Node* root , int data)
   	{
   		root->data = data;
   		
   	}
   	
   	void merging(Node* root1 , Node* root2)
   	{
   		root1->data = root1->data + root2->data;
   		delete root2;
   	}


int main()
{
   	int x;
   	cout<<"choose the function you want to perform"<<endl;
   	cout<<"1: create a genesis node"<<endl;
   	cout<<"2: create set of child node for a node"<<endl;
   	cout<<"3: create a child node that originate from a node"
   	cout<<"4: encryption and decryption"<<endl;
   	cout<<"5: verifying the owner of a particular node"<<endl;
   	cout<<"6: editing the value of a node"<<endl;
   	cout<<"7: transfering ownership"<<endl;
   	cout<<"8: finding longest chain of a genesis node"<<endl;
   	cout<<"9: finding longest chain of a node"<<endl;
   	cout<<"10: merging two nodes"<<endl;
   	
   	cin>>x;
   	
   	switch(x)
   	{
   		case 1:
   			createNode(data);
   			break;
   			
   	   case 2:
   	   	cout<<"enter number of child: ";
   	   	int ch;
   	   	cin>>ch;
   	   	for(int i=0 ; i<ch ; i++)
   	   	{
   	   	
   	   	childNode(data);
   	   }
		  break;
		  
	     case 3:
	     	cout<<"enter parent"<<endl;
	     	int p;
	     	cin>>p;
	     	
	      break;
	
	     case 4:
	     	int id;
	     	float value;
	     	string name;
	     	cin>>id>>value>>name;
	     	
	     float y=hashfn(id , value , name);
	     cout<<y;
	     break;
	
	    case 5:
	    	int id1;
	     	float value1;
	     	string name1;
	     	cin>>id1>>value1>>name1;
	     	
	    	bool b= check(id1 , value1 , name1);
	    	cout<<b<<endl;
	    break;
	
    	case 6:
    		int data;
    		cin>>data;
    		editvalue(root , data);
	     break;
	
     	case 8:
     	break;
	
       	case 9:
      	break;
	
     	case 10:
     		merging(node1 , node2);
     	break;
	
	
	return 0;
		  		
   	}
}

