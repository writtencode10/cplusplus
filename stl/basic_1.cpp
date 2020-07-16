#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
bool myfunsort(int a,int b)
{
    return a>b;
}
void print_list_int(list <int> ls)
{
    list <int>::iterator itl1;
    for(itl1=ls.begin();itl1!=ls.end();itl1++)
    {
        cout<<*itl1<<"\t";
    }
}
void binary_search_1()
{
	list <int> l;
    l.push_back(10);
    cout<<"\nTesting Binary Search"<<endl;
    bool ans=binary_search(l.begin(),l.end(),10);
    if(ans)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    list <int>::iterator itl1=lower_bound(l.begin(),l.end(),60);
    cout<<*itl1<<endl;
}
void print_map_string_int(map <string,int> m)
{
    map <string,int>::iterator it1;
    for(it1=m.begin();it1!=m.end();it1++)
    {
        cout<<it1->first<<"\t";
    }
}
void map_1()
{
    //key should be unique and arranged in sorted manner
    map <string,int> m;
    m["dipta"]=43;
    m["arnob"]=42;
    m["nabil"]=45;
    m.insert(make_pair("abul",90));
    cout<<m["nabil"]<<endl;
    print_map_string_int(m);
    cout<<"Staring pair\n";
    pair <string,int> p("tuntuni",32);
    cout<<p.first<<" "<<p.second<<endl;
    vector <pair <string,int> > v;
    v.push_back(make_pair("abul",34));
    v.push_back(make_pair("munmuni",38));
    vector <pair <string,int> >::iterator itv1;
    for(itv1=v.begin();itv1!=v.end();itv1++)
    {
        cout<<itv1->first<<" "<<itv1->second<<endl;
    }
    
}
void set_1()
{
	    //multiset and multimap hold duplicate value but stores them ascending order
    cout<<"Starting Set"<<endl;
    set <int> set1;
    set1.insert(10);
    set1.insert(100);
    set1.insert(1);
    set <int>::iterator setit1;
    setit1=set1.begin();
    cout<<*setit1<<endl;
    pair <set <int>::iterator,bool> p1;
    p1=set1.insert(10);
    if(p1.second==false)
    {
        cout<<"Cannot insert"<<endl;
    }
    else
    {
        cout<<"Inserted"<<endl;
    }
    
    cout<<"Starting Stack"<<endl;
    stack<string> s;
    s.push("dipta");
    s.push("nabil");
    s.push("arnab");
    while (!s.empty())
    {
        cout<<s.top()<<"\t";
        s.pop();
    }
    cout<<"\nStarting Queue"<<endl;
    priority_queue <int> q;
    q.push(100);
    q.push(500);
    q.push(800);
    q.push(200);
    while (!q.empty())
    {
        cout<<q.top()<<"\t";
        q.pop();
    }
    
}
void list_vector()
{
	 //vector starts here
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(50);
    vec.push_back(1);
    vec.push_back(0);
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }
    //sorting vector
    sort(vec.begin(),vec.end(),myfunsort);
    cout<<"printing again after sorting."<<endl;
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }
    //list starts here
    list <int> list1(5,0);
    list <int>::iterator it_list;
    it_list=list1.begin();
    while (it_list!=list1.end())
    {
        cout<<*it_list<<"\t";
        it_list++;
    }
    cout<<endl;
    int arr1[4]={5,10,55,14};
    list <int> list2(arr1,arr1+4);
    print_list_int(list2);
    cout<<"\nInserting item 50 after 5"<<endl;
    it_list=list2.begin();
    it_list++;
    list2.insert(it_list,50);
    print_list_int(list2);
    cout<<"\nSearching item"<<endl;
    it_list=find(list2.begin(),list2.end(),55);
    cout<<*it_list<<endl;
    cout<<"Erasing any item"<<endl;
    list2.erase(it_list);
    print_list_int(list2); 
    cout<<"Popping"<<endl;
    if(list2.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Filled"<<endl;
    }
    cout<<list2.front()<<" "<<list2.back()<<endl;
    list2.pop_front();
    list2.pop_back();
    print_list_int(list2);
    cout<<"Reverse"<<endl;
    list2.reverse();
    list2.push_front(100);
    print_list_int(list2);

    return 0;
}
int main()
{
   
}