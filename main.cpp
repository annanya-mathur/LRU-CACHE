#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  string key;
  int value;
    Node (string key, int value)
  {
    this->key = key;
    this->value = value;
  }
};

class LruCache
{
public:
  int maxSize;
    list < Node > l;
    unordered_map < string, list < Node >::iterator > mp;
    LruCache (int maxSize)
  {
    this->maxSize = (maxSize > 1) ? maxSize : 1;
  }

  void insertKeyValue (string key, int value)
  {
    if (mp.count (key) != 0)
      {
	auto it = mp[key];
	it->value = value;
      }
    else
      {
	if (l.size () == maxSize)
	  {
	    Node last = l.back ();
	    mp.erase (last.key);
	    l.pop_back ();
	  }
	Node n (key, value);
	l.push_front (n);
	mp[key] = l.begin ();
      }
  }

  int *getValue (string key)
  {
    if (mp.count (key) != 0)
      {
	auto it = mp[key];
	int value = it->value;
	l.push_front (*it);
	l.erase (it);
	mp[key] = l.begin ();
	return &l.begin ()->value;
      }
    return NULL;
  }

  string mostRecentKey ()
  {
    return l.front ().key;
  }


};

int main ()
{
  int n, size;
  cin >> size >> n;
  LruCache Lru (size);
  for (int i = 0; i < n; i++)
    {
      string s;
      int x;
      cin >> s;
      cin >> x;
      Lru.insertKeyValue (s, x);
    }
  cout << Lru.mostRecentKey () << endl;
  string k;
  cin >> k;

  if (Lru.getValue (k) == NULL)
    {
      cout << "This string doesn't exist" << endl;
    }
  return 0;
}
