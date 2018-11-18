#include <iostream>
using namespace std;

class vector
{
private:
    int* m_arr;
    int m_size;
    int m_top;
    int m_insertTop;
public:
    vector(const int chap = 10);
    void push_back(int elem);
    void insert_at(int index, int elem);
    int get_at(int index);
    int get_size();
    void add_DinSpace();
    ~vector();
};

vector::vector(const int chap)
{
    m_top = -1;
    m_size = chap;
    m_arr = new int[m_size];
    m_insertTop = 0;
}

void vector::add_DinSpace()
{
    int *TMP = new int[2*m_size];
    for(int i = 0; i< m_size; i++)
    {
        TMP[i] = m_arr[i];
    }
    
     delete [] m_arr;
    m_arr = TMP;
     delete TMP;
    m_size = 2 * m_size;

}

void vector::push_back(int elem)
{
    if(m_top == m_size)
    {add_DinSpace();}
    m_arr[++m_top] = elem ;
}

void vector::insert_at(int index, int elem)
{  
    if(m_top > m_size || m_insertTop > m_size)
     {add_DinSpace();}

    
    int i = (m_top + 1);
    for(i; i > index; i--)
    {m_arr[i] = m_arr[i-1];}
    
    m_arr[index] = elem;
    
    m_top++;
}

int vector::get_at(int index)
{
    return m_arr[index];
    
}

vector::~vector()
{
    delete [] m_arr;
    m_arr = nullptr;
}

int main(){
    vector vec; 
    vec.push_back(5);
    vec.push_back(4); 
    vec.push_back(7);   
    vec.insert_at(0,2);    
    vec.insert_at(2,90);
    cout<<vec.get_at(2);
}

