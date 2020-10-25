void topView(struct Node *root)
{
   map<int,vector<int>> m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(q.empty()!=true)
        {
            auto temp=q.front();
            Node * curr=temp.first;
            int hd=temp.second;
            if(m.find(hd)==m.end())
            m[hd].push_back(curr->data);
            q.pop();
            if(curr->left)
            q.push({curr->left,hd-1});
            if(curr->right)
            q.push({curr->right,hd+1});
            
        }
    vector<int> v,v1; 
    for(auto itr:m)
    {
    v=itr.second;
    for(int x:v)
    cout<<x<<" ";
    }
}