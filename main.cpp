
#include "data_class"
//..
void print_results()
{
        get_area a1(14.21, 4.33, 44.3);
        get_area *ptr1 = &a1;

        cout << "[+] length of the length:\t" << ptr1 -> l << endl;
        cout << "[+] length of the height:\t" << ptr1 -> h << endl;
        cout << "[+] length of the width: \t" << ptr1 -> w << endl;
        cout << "[+] Total Area: \t\t" << ptr1 -> a << endl;
}
int main()
{
        print_results();
}
