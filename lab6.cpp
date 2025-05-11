#include <iostream>
using namespace std;

bool isKeyword(string str)
{
    string keywords[] = {
        "alignas", "alignof", "and", "and_eq", "asm", "atomic_cancel",
        "atomic_commit", "atomic_noexcept", "auto", "bitand", "bitor", "bool", "break", "case", "catch", "char", "char8_t", "char16_t", "char32_t", "class", "compl", "concept", "const", "consteval", "constexpr", "constinit", "const_cast", "continue", "co_await", "co_return", "co_yield", "decltype", "default", "delete", "do", "double", "dynamic_cast", "else", "enum", "explicit", "export", "extern", "false", "float", "for", "friend", "goto", "if", "inline", "int", "long", "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr", "operator", "or", "or_eq", "private", "protected", "public", "reflexpr", "register", "reinterpret_cast", "requires", "return", "short", "signed", "sizeof", "static", "static_assert", "static_cast", "struct", "switch", "synchronized", "template", "this", "thread_local",
        "throw", "true", "try", "typedef", "typeid", "typename", "union",
        "unsigned", "using", "virtual", "void", "volatile", "wchar_t", "while", "xor", "xor_eq"};

    for (int i = 0; i < (sizeof(keywords) / sizeof(keywords[0])); i++)
    {
        if (str == keywords[i])
        {
            return true;
        }
    }
    return false;
}

bool isIdentifire(string str)
{
    bool isIdentifire = true;
    if (str.empty())
    {
        isIdentifire = false;
    }
    else
    {
        if (str[0] == '_' || (str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z'))
        {
            isIdentifire = true;
            for (int i = 0; i < sizeof(str); i++)
            {
                if (!(str[i] == '_' || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')))
                {
                    isIdentifire = false;
                    break;
                }
            }
        }
        else
        {
            isIdentifire = false;
        }
    }
    return isIdentifire;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    bool keyword = isKeyword(input);

    if (keyword)
    {
        cout << input << " is a valid Keyword." << endl;
    }
    else if (isKeyword(input))
    {
        cout << input << " is a valid identifier." << endl;
    }
    else
    {
        cout << input << " is not a valid identifier or valid Keyword." << endl;
    }

    return 0;
}