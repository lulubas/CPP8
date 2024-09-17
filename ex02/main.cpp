#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
    MutantStack<int, std::vector<int> > mstack;
    std::list<int> mylist;

    mstack.push(5);
    mstack.push(17);

    mylist.push_back(5);
    mylist.push_back(17);

    std::cout << "Top of MutantStack: " << mstack.top() << std::endl;
    std::cout << "Back of List: " << mylist.back() << std::endl;

    mstack.pop();
    mylist.pop_back();

    std::cout << "Size of MutantStack: " << mstack.size() << std::endl;
    std::cout << "Size of List: " << mylist.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    mylist.push_back(3);
    mylist.push_back(5);
    mylist.push_back(737);
    mylist.push_back(0);
    
    MutantStack<int, std::vector<int> >::reverse_iterator it = mstack.rbegin();
    MutantStack<int, std::vector<int> >::reverse_iterator ite = mstack.rend();
    
    std::list<int>::iterator itl = mylist.begin();
    std::list<int>::iterator itel = mylist.end();

    ++it;
    --ite;
    
    ++itl;
    --itel;

    std::cout << "Ranged content of MutantStack: ";
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    std::cout << "Ranged content of List: ";
    while (itl != itel)
    {
        std::cout << *itl << " ";
        ++itl;
    }
    std::cout << std::endl;
    
    return 0;
}