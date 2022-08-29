#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<iterator>
using std::cin;
using std::cout;
using std::endl;

#define  tab "\t"

//#define ARRAY
//#define VECTOR
//#define DEQUE
#define STL_LIST

void main()
{
	setlocale(LC_ALL, "");
    typedef int DataType ;
#ifdef ARRAY
	const int n = 5;
	std::array<int, 5> arr{ 3,5,8,13,21 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // ARRAY
#ifdef VECTOR
	
	std::vector<DataType>vec = { 0,1,1,2,3,5,8,13,21,34 };
	try
	{
		for (int i = 0; i < vec.size()*2; i++)
		{
			//cout << vec[i] << tab; //не сравнивает размер 
			cout << vec.at(i) << tab;
		}
		cout << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}

	for (std::vector<DataType>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
	for (std::vector<DataType>::reverse_iterator it = vec.rbegin(); it != vec.rend();++it)
	{
		cout << *it << tab;
	}
	cout << endl;
	vec.front() = 1024;
	cout << vec.front() << endl;
	cout << vec.back() << endl;
	cout << vec.data() << endl;
	cout << "----------------- Vector capacity ---------------\n"; //вместимость
	cout << "Capacity:" << vec.capacity() << endl;
	cout << "Size: \t " << vec.size() << endl;
	cout << "MaxSize: " << vec.max_size() << endl;
	
	vec.push_back(55);
	
	cout << "Capacity:" << vec.capacity() << endl;
	cout << "Size: \t " << vec.size() << endl;
	cout << "MaxSize: " << vec.max_size() << endl;

	//vec.shrink_to_fit(); //уменьшает capacity до фактических размеров
	//vec.resize(25);  //принудительно задает размер вектора
	vec.reserve(55);  //задает capacity вектора,работает только на увеличение
	//vec.assign({ 1024,2048,3072,4096,5120 });

	for (int i : vec)cout << i << tab; cout << endl;
	cout << "Capacity:" << vec.capacity() << endl;
	cout << "Size: \t " << vec.size() << endl;
	cout << "MaxSize: " << vec.max_size() << endl;
	
	int index;
	int value;
	cout << "¬ведите индекс добавл€емого элемента: "; cin >> index;
	cout << "¬ведите значение добавл€емого элемента: "; cin >> value;
	//std::vector<int>::iterator position = vec.begin() + index;
	if(index<=vec.size())
		vec.insert(vec.begin()+index,3,value);
	for (int i : vec)cout << i << tab; cout << endl;
	/*vec.insert(vec.begin() + 2, vec.end() - 4, vec.end() - 1);
	for (int i : vec)cout << i << tab; cout << endl;*/
	
#endif // VECTOR
#ifdef DEQUE
	std::deque<DataType> deque = { 3,5,8,13,21 };
	for (std::deque<DataType>::iterator it = deque.begin(); it != deque.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
	deque.push_back(34);
	deque.push_back(55);
	deque.push_back(89);
	deque.push_front(2);
	deque.push_front(1);
	deque.push_front(1);
	deque.push_front(0);
	for (int i : deque)cout << i << tab;cout<< endl;
	for (std::deque<DataType>::reverse_iterator it = deque.rbegin(); it != deque.rend(); ++it)
		cout << *it << tab;
	cout << endl;
#endif // DEQUE
#ifdef STL_LIST
	std::list<int>list = { 3,5,8,13,21 };
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	cout << *it << tab;
	cout << endl;
	int index;
	int value;
	cout << "¬ведите индекс добавл€емого элемента: "; cin >> index;
	cout << "¬ведите значение добавл€емого элемента: "; cin >> value;
	std::list<int>::iterator position = list.begin();
	//for (int i = 0; i < index; i++)position++;
	std::advance(position, index);//вместо for используем advance
	list.insert(position, value);
	for (int i : list)cout << i << tab; cout << endl;
	/*for (int i : list)cout << i << tab; cout << endl;
	cout << "¬ведите индекс удал€емого элемента: "; cin >> index;
	for (it = list.begin(); index; ++it; --index);
*/




#endif // STL_LIST


}