// Codeforces Round #547 (Div. 3)

#include <bits/stdc++.h>

template <typename T, typename U>
using p_t = std::pair<T, U>;

template <typename T>
using s_t = std::set<T>;
template <typename T>
using us_t = std::unordered_set<T>;
template <typename T>
using v_t = std::vector<T>;
template <typename T>
using vv_t = std::vector<std::vector<T>>;

template <typename T, typename U>
using m_t = std::map<T, U>;
template <typename T, typename U>
using um_t = std::unordered_map<T, U>;

using type_t = int64_t;
using utype_t = uint64_t;
using str_t = std::string;

using vt = v_t<type_t>;
using vut = v_t<utype_t>;
using vstr = v_t<str_t>;

using vvt = vv_t<type_t>;
using vvut = vv_t<utype_t>;
using vvstr = vv_t<str_t>;

using std::cin;
using std::cout;

constexpr char endl = '\n';
constexpr type_t M{static_cast<type_t>(1e9 + 7)};

void fastIO_n_untie(bool = false);
template <typename T>
void outThis(T val) { cout << val << endl; }
template <typename T, typename... TT>
void outThis(T val, TT... tail) { cout << val << " : ", outThis(tail...); }

template <typename T>
T min_val() { return std::numeric_limits<T>::min(); }
template <typename T>
T max_val() { return std::numeric_limits<T>::max(); }

type_t gcd(type_t a, type_t b) { return a == 0 ? b : gcd(b % a, a); }

int main()
{
    fastIO_n_untie(false);

    size_t n, rest, first{0}, count{0}, max{0};
    cin >> n;

    while (--n != -1)
    {
        cin >> rest;
        first += rest;

        if (!rest)
            break;
    }

    while (--n != -1)
    {
        cin >> rest;
        count += rest;

        if (!rest)
        {
            max = std::max(max, count);
            count = 0;
        }
    }

    outThis(std::max(max, count + first));

    return 0;
}

void fastIO_n_untie(bool untie)
{
    std::ios_base::sync_with_stdio(false);
    if (untie)
    {
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
}