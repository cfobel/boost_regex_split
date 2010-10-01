#include <iostream>
#include <boost/regex.hpp>
#include <boost/foreach.hpp>
#include <boost/range/iterator_range.hpp>

using namespace std;

int main() {
    string s = "This is a string of tokens";

    boost::regex re("\\s+");
    boost::sregex_token_iterator i(s.begin(), s.end(), re, -1);
    boost::sregex_token_iterator j;

    unsigned count = 0;

    BOOST_FOREACH(string match, boost::make_iterator_range(i, j)) {
        cout << match << endl;
        count++;
    }
    cout << "There were " << count << " tokens found." << endl;

    return 0;
}

