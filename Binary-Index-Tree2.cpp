const ll N = 1e6 + 5;
ll tree[N+5];
void update(int pos, int val)
{
    while (pos <= N)
    {
        tree[pos] += val;
        pos += (pos & -pos);
    }
}
ll query(int pos)
{
    ll sum = 0;
    while (pos > 0)
    {
        sum += tree[pos];
        pos -= (pos & -pos);
    }
    return sum;
}
ll sum(int l,int r){
  return query(r) - query(l-1);
}
