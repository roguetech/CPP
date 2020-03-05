#include <fstream>
#include <vector>
#include <iterator>
#include <iostream>

using namespace std;
using byte = unsigned char ;
vector<byte> read_bytes( const string& path_to_file )
{
    ifstream file( "./test-file", ios::binary ) ;
    return { istream_iterator<byte>(file), istream_iterator<byte>() } ;
}
int main()
{
    cout << "dump of bytes in this file:\n" << hex ;
    for( byte b : read_bytes( __FILE__ ) ) cout << int(b) << ' ' ;
    cout << '\n' ;
}
