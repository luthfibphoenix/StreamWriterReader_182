#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan 
#include <array>
//untuk obyek yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:..
	try {
		array<int, 3> data = { 1,2,3 };
		//pesan array integer 3 elemen
		cout << data.at(4) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exception
		cout << e.what() << endl;
		/*akan dieksekusi karena array data hanya memiliki 3 element*/
	}
	cout << "Baris Program yang terakhir" << endl;
	/*penanda 2: bahwa program akan berjalan tanpa henti meskipun terjadi kesalahan*/
	return 0;
}