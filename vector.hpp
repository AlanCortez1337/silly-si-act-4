#include <iostream>
#include <vector>

template <typename T>
class CoolerVector
{
public:
    CoolerVector() : size_(0), capacity_(0), container_({}) {}

    void pop_back()
    {
        // ⭐TODO: Without using the prebuilt .pop_back() function, finish this function so that it always removes the last element in container_
        // 💡 Dont forget about size_ and capacity_
        if ( !(size_ < 1)) {

            container_.at(size_-1) = {};
        size_ = size_ - 1;
        }
        // container_.pop_back();
        
    }

    void push_back(T value)
    {
        // ⭐TODO: Without using the prebuilt .push_back() function, finish this function so that it always removes the last element in container_
        // 💡 Dont forget about size_ and capacity_
        container_.push_back(value);
        size_++;
    }


    void display()
    {
        for (T value : container_)
        {
            std::cout << value << " " << std::endl;
        }
        }

private:
    int size_;
    int capacity_;
    std::vector<T> container_;
};