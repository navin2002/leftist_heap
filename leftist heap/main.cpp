#include "leftistclasses.h"
#include<iostream>
using namespace std;

int main()
{
	
	LeftistHeap h;
    LeftistHeap h1;
    LeftistHeap h2;
 
 string a,b,c;
    int x,ch=0;;
   do
   {
	 
	 
	 cout
	 <<"\n\n\n       0.exit    "
	 <<"\n\n\n       1.insert    "
	 <<"\n\n\n       2.deleteMin   "
	 <<"\n\n\n       3.findmin   "
	 <<"\n\n\n       4.merge    "
	 <<"\n\n\n       5.overloaded assisnment    "
	 <<"\n\n\n       6.makeEmpty   "
	 <<"\n\n\n       7.inorder \n\n\n         ";

	 
	 
	 
	 
	 cin>>ch;
 switch(ch)
 {
     case 0:break;
   case 1:
   	cout<<"\n\n     enter info for insertion    :   ";
   	  cout<<"\n\n\n   enter key    :";getline(cin>>ws,a) ;cout<<" \n\n\n   enter value    :";getline(cin>>ws,b);
		 h.Insert(a,b);
   break;
   
   case 2:
   	
    h.deleteMin();cout<<" min has been deleted ";break;
    
   case 3:
    cout<< "\n\n    "<<  h.findMin() <<" is the minimum key "<<endl;break;
   
   case 4:
                     cout<<"\n\n     enter info for insertion  in new leftist heap  :   ";
   	  cout<<"\n\n\n   enter key    :";getline(cin>>ws,a) ;cout<<" \n\n\n   enter value    :";getline(cin>>ws,b);
		 h1.Insert(a,b);
		 cout<<"\n\n\n   enter key    :";getline(cin>>ws,a) ;cout<<" \n\n\n   enter value    :";getline(cin>>ws,b);
		 h1.Insert(a,b);
		 cout<<"\n\n\n   enter key    :";getline(cin>>ws,a) ;cout<<" \n\n\n   enter value    :";getline(cin>>ws,b);
		 h1.Insert(a,b);h.Merge(h1);cout<<" merged  h1.inorder():";h1.inorder(h1.root);cout<<" h.inorder():  ";h.inorder(h.root);
    
    case 5:
	 h2 = h;break;
	 
	case 6: h.makeEmpty();break;
	case 7: h.inorder(h.root);break;
}
}while (ch!=0);
  
    return 0;
}
