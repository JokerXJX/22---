#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<list>

//list构造函数
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L1;//默认构造
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//	//区间构造
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//	//拷贝构造
//	list<int>L3(L2);
//	printList(L3);
//	//n个elem
//	list<int>L4(10, 100);
//	printList(L4);
//}

//list赋值与交换
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L1;//默认构造
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//	list<int>L2;
//	L2 = L1;//operator=赋值
//	printList(L2);
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());//assign赋值
//	printList(L3);
//	list<int>L4;
//	L4.assign(10,100);//n个elem
//	printList(L4);
//}
////交换
//void test02()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	list<int>L2;
//	L2.assign(10, 100);
//	cout << "交换前：" << endl;
//	printList(L1);
//	printList(L2);
//	L1.swap(L2);
//	cout << "交换后：" << endl;
//	printList(L1);
//	printList(L2);
//}

//list容器大小操作
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L1;//默认构造
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//	//判断是否为空
//	if (L1.empty())
//	{
//		cout << "L1为空" << endl;
//	}
//	else
//	{
//		cout << "L1不为空" << endl;
//		cout << "L1元素个数：" << L1.size() << endl;
//	}
//	//重新指定大小
//	L1.resize(10);
//	printList(L1);
//	L1.resize(2);
//	printList(L1);
//}

//list插入与删除
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L;
//	//尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	//头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//	printList(L);
//	//尾删
//	L.pop_back();
//	printList(L);
//	//头删
//	L.pop_front();
//	printList(L);
//	//insert插入
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	printList(L);
//	//删除
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//	//移除
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);//删除所有10000
//	printList(L);
//	//清空
//	L.clear(); 
//	printList(L);
//}

//list数据存取
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//	//不可以L[]方式访问元素
//	//不可以使用at方式访问元素
//	//原因list本身是链表，不是连续线性空间存储
//	//迭代器不支持+随机访问，支持双向++  --
//	cout << "第一个元素：" << L.front() << endl;
//	cout << "最后一个元素：" << L.back() << endl;
//}

//list反转和排序
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//反转
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//	cout << "反转前：" << endl;
//	printList(L1);
//	//反转
//	L1.reverse();
//	cout << "反转后：" << endl;
//	printList(L1);
//}
//bool myCompare(int v1,int v2)
//{
//	//降序 让1>2
//	return v1 > v2;
//}
////排序
//void test02()
//{
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//	cout << "排序前：" << endl;
//	printList(L1);
//	//迭代器不支持随机访问,内部会提供一些对应算法
//	L1.sort();//从小到大
//	cout << "排序后：" << endl;
//	printList(L1);
//	L1.sort(myCompare);
//	printList(L1);
//}

//排序案例
#include<string>
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};
//指定排序规则
bool comparePerson(Person& p1, Person& p2)
{
	//年龄升序
	if (p1.m_Age == p2.m_Age)
	{
		//身高降序
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}
void test01()
{
	list<Person>L;
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << " 身高：" << (*it).m_Height << endl;
	}
	//排序
	cout << "---------------------------" << endl;
	cout << "排序后：" << endl;
	L.sort(comparePerson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << " 身高：" << (*it).m_Height << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}