#include<bits/stdc++.h>
using namespace std;

namespace digit {
	int index = 0;
	int MT[624];
	
	void mysrand (int seed) {
		index = 0;
		MT[0] = seed;
		for (int i = 1; i <= 623; ++i) {
			int t = 1812433253 * (MT[i-1] ^ (MT[i-1] >> 30)) + i;
			MT[i] = t & 0xffffffff;
		}
		return ;
	}
	
	void generate () {
		for (int i = 0; i <= 623; ++i) {
			int y = (MT[i] & 0x80000000) + (MT[(i + 1) % 624] & 0x7fffffff);
			MT[i] = MT[(i + 397) % 624] ^ (y >> 1);
			if(y&1) MT[i] ^= 2567483615;			
		}
		return ;
	}
	
	int myrand () {
		int tot = time(NULL);
		mysrand(tot);
		if (index == 0) generate();
		int y = MT[index];
		y = y ^ (y >> 1);
		y = y ^ ((y << 7) & 2636928640);
		y = y ^ ((y << 15) & 4022730752);
		y = y ^ (y >> 18);
		return y;
	}
	
	int random (int a, int b) {
		int nex = b - a + 1;
		return myrand() % nex + a;
	}
}
