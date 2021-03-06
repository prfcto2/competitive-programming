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

constexpr bool MULT_TESTS = false,
               UNTIE_IO = false;

constexpr char endl = '\n';
constexpr type_t M{static_cast<type_t>(1e9 + 7)};

void fastIO(bool = false);
template <typename T>
void debug(T val) { cout << val << endl; }
template <typename T, typename... TT>
void debug(T val, TT... tail) { cout << val << " : ", debug(tail...); }

template <typename T>
T min_val() { return std::numeric_limits<T>::min(); }
template <typename T>
T max_val() { return std::numeric_limits<T>::max(); }

type_t gcd(type_t a, type_t b) { return a == 0 ? b : gcd(b % a, a); }

bool prepare(size_t n, size_t &m, size_t &step)
{
    if (n > m)
        return false;
    if (n == m)
        return true;

    size_t step_a, step_b;
    step_a = step_b = step + 1;

    bool a = prepare(n << 1, m, step_a);
    bool b = prepare(n * 3, m, step_b);

    step = a ? step_a : step;
    step = b ? step_b : step;

    return a || b;
}

int main()
{
    fastIO(UNTIE_IO);

    size_t n, m, step{0};
    cin >> n >> m;

    if (prepare(n, m, step))
        debug(step);
    else
        debug(-1);

    return 0;
}

void fastIO(bool untie)
{
    std::ios_base::sync_with_stdio(false);
    if (untie)
    {
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
}