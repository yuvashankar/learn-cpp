#include <iostream>

template <typename Type>
class List
{
public:
    int is_empty() const { return head == 0; }
    int count() const { return theCount; }
    void append(Type value);
    int is_present(Type value) const;
    int swap(Type value1, Type value2);

    friend int operator== (const Type& rhs, const Type& lhs);

​private:
    class ListCell
    {
    public:
        ListCell(Type value, ListCell *cell = 0) : val(value), next(cell) {}
        Type val;
        ListCell *next;
    };
    ListCell *head{nullptr};
    ListCell *tail{nullptr};
    std::size_t theCount{0};

public:
    void insert(Type value)
    {
        ListCell *pt = new ListCell(value, head);
    }

    void append(Type value)
    {
        ListCell *pt = new ListCell(value, head);
        if (head == nullptr)
        {
            head = pt;
        }
        else
        {
            tail->next = pt;
        }
    }

    int is_present(Type value)
    {
        if (head == nullptr) { return 0; }
        if (head -> val == value || tail -> val == value) {return 1;}
        for (; pt != tail; pt = pt -> next)
        {
            if (pt -> val == value) { return 1; }
        }
    }
    int operator== (const Type& rhs, const Type& lhs)
    {
        if (lhs.theCount != rhs.theCount)
        {
            return 0; //Counts don't match. 
        }

        ListCell rhs_head = rhs -> head;
        ListCell lhs_head = lfs -> head;
        
        for(; lh!= 0; lh.next, rh = rh.next)
        {
            if (lh.value != rh.value)
            {
                return 0;
            }
        }
        return 1;
    }

    int swap(Type value1, Type value2)
    {
        Type temp( value1 );
        value1 = value2;
        value2 = temp;
        
    }
};

int main(int argc, char const *argv[])
{
    List<std::string>my_string_list;
    List<int>my_cat_list;
    List<double>my_double_list;

    return 0;
}
