vector<int> topView(Node *root)
{
        map<int,int> m;
        queue<pair<Node*,int>> q;
        vector<int> v; 
        int horizontal_distance=0;

        q.push({root,horizontal_distance});

        while(q.empty()!=true)
        {
            auto temp=q.front();
            Node * curr=temp.first;
            horizontal_distance=temp.second;
            
            if(m.find(horizontal_distance)==m.end())
            m[horizontal_distance]=curr->data;

            q.pop();
            if(curr->left)
            q.push({curr->left,horizontal_distance-1});
            if(curr->right)
            q.push({curr->right,horizontal_distance+1});
        }
       
    for(auto itr:m)
    {
    v.push_back(itr.second);
    }

    return v;
}
