const ll N = 1e6 + 5;
int tree[N+5];
void update(int pos, int val)
{
    while (pos <= n)
    {
        tree[pos] += val;
        pos += (pos & -pos);
    }
}
int query(int pos)
{
    int sum = 0;
    while (pos > 0)
    {
        sum += tree[pos];
        pos -= (pos & -pos);
    }
    return sum;
}
int sum(int l,int r){
  return query(r) - query(l-1);
}
