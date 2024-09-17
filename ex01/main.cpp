#include "Span.hpp"

void printElem(int i) {
    std::cout << i << std::endl;
}

int main()
{
    int i;
    std::cout << std::endl << "##ARRAY OF 5##" << std::endl;
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    try {
        sp.addNumber(100);
    }
    catch(Span::MaxSizeReached& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "Content of the vector:" << std::endl;
    std::for_each(sp.getVector().begin(), sp.getVector().end(), printElem);
    std::cout << "Size of the vector: " << sp.getVector().size() << std::endl;
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    std::cout << std::endl << "##ARRAY OF 10000##" << std::endl;
    Span spBig = Span(10000);
    for (i = 0; i < 10000; i++)
        spBig.addNumber(i);
    
    std::cout << "Size of the vector: " << spBig.getVector().size() << std::endl;
    std::cout << "Shortest span: " << spBig.shortestSpan() << std::endl;
    std::cout << "Longest span: " << spBig.longestSpan() << std::endl;

    std::cout << std::endl << "##ADDING RANGE##" << std::endl;
    Span spRange = Span(20);
    for (i = 0; i < 10; i++)
        spRange.addNumber(i);
    spRange.addRange(spRange.getVector().begin(), 5);
    spRange.addRange(spRange.getVector().begin(), 5);
    
    std::cout << "Content of the vector:" << std::endl;
    std::for_each(spRange.getVector().begin(), spRange.getVector().end(), printElem);
    std::cout << "Size of the vector: " << spRange.getVector().size() << std::endl;
    std::cout << "Shortest span: " << spRange.shortestSpan() << std::endl;
    std::cout << "Longest span: " << spRange.longestSpan() << std::endl;

    return 0;
}