
struct comp_pair_int
{
    bool operator()(const pair<int,int> &a, const int & b)
    {
        return (a.first < b);
    }
    bool operator()(const ll & a,const pair<int,int> &b)
    {
        return (a < b.first);
    }
};

