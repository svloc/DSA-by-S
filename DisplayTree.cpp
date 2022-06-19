#include<bits/stdc++.h>
using namespace std;

struct node{
    struct node *next;
    struct node *child;
    string Data;
};

void printTree(struct node *node, int depth){
int i;
while(node){
    if(node->child){
        for(i=0;i<depth*3;i++)
           cout<<" ";
        cout<<"{\n";
        printTree(node->child,depth+1);

        for(i=0;i<depth*3;i++)
          cout<<" ";
        cout<<"{\n";

        for(i=0;i<depth*3)
          cout<<" ";
        cout<<node->Data.c_str();

        node=node->next;    
    }
}
}
int main(){
    printTree();
  return 0;
}