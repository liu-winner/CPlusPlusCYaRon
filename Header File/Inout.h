#include<bits/stdc++.h>
using namespace std;
namespace inout {
	struct IO {
		std::string name;
		ofstream fout, fin;
		IO (std::string _name, int data_id) {
			name = _name + to_string(data_id) + ".in";
			fout.open(name);
			string a = _name + to_string(data_id) + ".out";
			fin.open(a);
			fin << "";
		}
		void input_write (int x) {
			fout << x << " ";
			return ;
		}
		void input_write (char x) {
			fout << x << " ";
			return ;
		}
		void input_write (short x) {
			fout << x << " ";
		}
		void input_write (long x) {
			fout << x << " ";
			return ;
		}
		void input_write (long long x) {
			fout << x << " ";
			return ;
		}
		void input_write (std::string x) {
			fout << x << " ";
			return ;
		}
	};
//	inout IO_out(std::string file_preffix, int data_id) {
//		inout cur;
////		string a = cur.name = file_preffix + std::to_string(data_id) + ".in";
////		cur.fout.std::ofstream::open(a);
//		return cur;
//	}
};
