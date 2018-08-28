#include <iostream>
#include <queue>
#include<cstring>
#include<ctime>
using namespace std;
class record{
/* A binary tree node has key, pointer to left child
and a pointer to right child */
struct Node {
    float timestamp,nodeNumber;
    char data[100],nodeId[32],rNodeId[32],childRNI[32],gRNId[32],HValue[100];
    struct Node* parent, *children[20], *head;
    int count = 1;
};
 public:
/* function to create a new node of tree and r
   eturns pointer */
struct Node* newNode(int key)
{
    struct Node* temp = new Node;
    temp->data = key;
    temp->nodeNumber=count;
    temp->nodeId=timestamp();
    count++;
    temp->rNodeId= &;
    temp->childRNI[]=NULL;
    temp->gRNID= &root;
    return temp;
    
};
char* timestamp()
 {
   time_t now = time(0);
   char* dt = ctime(&now);
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   return dt;
}
 }
void insert(struct Node* temp, int key)
{
    queue<struct Node*> q;
    q.push(temp);
    while (!q.empty()) {
        struct Node* temp = q.front();
        q.pop();
 for(int i=0;i<)
        if (!temp->children[i]) {
            temp->left = newNode(key);
            break;
        } else
            q.push(temp->left);
 
        if (!temp->right) {
            temp->right = newNode(key);
            break;
        } else
            q.push(temp->right);
    }
}
char encrypt(char str[100])
{

         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

         cout << "\nEncrypted string: " << str << endl;
         return str;
         break;
   }
   return 0;
}
 
// Driver code
int main()
{
    struct Node* root = newNode(10);
    insert(root, key);
    return 0;}
    
