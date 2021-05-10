#include "Header.h"

Performance::Performance()
{
}

Performance::Performance(string str, string str1, string str2, int date)
{
    Performance p{str, str1, str2, date};
    nlohmann::json j{};
    j["autor"] = p.autor;
    j["name"] = p.name;
    j["age"] = p.genre;
    j["date"] = p.date;
    cout << p.autor << endl;
    cout << j;
    
}
void output()
{
}