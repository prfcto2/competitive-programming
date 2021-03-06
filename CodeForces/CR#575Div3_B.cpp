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

template <typename T>
void debug(T val) { cout << val << endl; }
template <typename T, typename... TT>
void debug(T val, TT... tail) { cout << val << " : ", debug(tail...); }

template <typename T>
T min_val() { return std::numeric_limits<T>::min(); }
template <typename T>
T max_val() { return std::numeric_limits<T>::max(); }

type_t gcd(type_t a, type_t b) { return a == 0 ? b : gcd(b % a, a); }

int main()
{
    std::ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    type_t t, n, k, odds{0}, tmp{0};
    cin >> t;

    v_t<type_t> v(2 * (1e5), 0);

    while (--t != -1)
    {
        cin >> n >> k;

        for (size_t i{0}; i < n; ++i)
        {
            cin >> tmp;

            if (tmp & 1)
                v[odds++] = i + 1;
        }

        if ((k & 1) == (odds & 1) && odds >= k)
        {
            cout << "YES" << endl;

            for (size_t i{0}; i < k - 1; ++i)
                cout << v[i] << " ";
            cout << n << endl;
        }
        else
            cout << "NO" << endl;

        odds = 0;
    }

    return 0;
}