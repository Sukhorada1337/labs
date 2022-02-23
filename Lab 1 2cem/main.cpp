#include <bits/stdc++.h>

using namespace std;

const int maxlen = 255;

struct neryhomist {
    char tip[maxlen];
    int cost;
    int square;
    char vlasnik[maxlen];
};

neryhomist arr[maxlen];
int neryh_index = 0;

int menu();//прототипы функции
void readFromFile(const char* fileName);
void saveToFile(const char* fileName);
void addNew();
void del();
void sortt();
void fix();
void change();

int main()
{

    while (1) {  //создание бесконечного цикла из меню выбора, вызов соответствующих функций
        switch (menu()) {
            case 1:
                readFromFile("file.dat");
                break;
            case 2:
                saveToFile("file.dat");
                break;
            case 3:
                addNew();
                break;
            case 4:
                del();
                break;
            case 5:
                sortt();
                break;
            case 6:
                change();
            case 7:
                return 0;
            default:
                cout << "Wrong choice" << endl;
        }
    }
}
int menu()//функция показывает пункты меню выбора
{
    cout << "\n";
    int ans;
    cout << "Select \n";
    cout << "1-To read from a file\n";//Считывание с файла
    cout << "2-To write to a file\n"; // Сохранение файла
    cout << "3-To add to a file\n"; // Добавление в файл
    cout << "4-to delete an entry\n"; // Удалить
    cout << "5-Sort alphabetically\n"; // Сортировка в алфавитном порядке
    cout << "6-To change the data" << endl;
    cout << "7-Exite\n"; // выход
    cout << "\n";
    cout << "Your choice  ";
    cin >> ans;
    return ans;
}
void saveToFile(const char* fileName) //функция, записывающая данные в бинарный файл
{
    ofstream f;
    f.open(fileName, ios::binary);
    f.write((char*)arr, sizeof(neryhomist) * neryh_index);
    f.close();
    cout << "Entered data saved to file\n";
}
void readFromFile(const char* fileName) //функция, считывающая данные из бинарного файла
{
    ifstream f;
    f.open(fileName, ios::binary);
    if (!f) {
        cout << "The file is not known";
    }
    else {
        neryhomist neryh;
        neryh_index = 0;
        while (1) {
            f.read((char*)&neryh, sizeof(neryh));
            if (f.eof())
                break;
            arr[neryh_index] = neryh;
            neryh_index++;
        }
        f.close();
        cout << "Data read from file\n";
        for (int i = 0; i < neryh_index; i++) {
            cout << i + 1 << "\t" << arr[i].tip << "\t" << arr[i].cost << "\t" << arr[i].square << "\t" << arr[i].vlasnik << endl;
        }
    }
}
void addNew()//функция, добавляющая(создает) новую запись
{
    cout << "Adding a new entry\n\n";
    cout << "Entry number " << neryh_index + 1 << "\n";
    cin.ignore();
    cout << "enter type ";
    cin.getline(arr[neryh_index].tip, maxlen);
    cout << "enter price  ";
    cin >> arr[neryh_index].cost;
    cout << "enter the square  ";
    cin >> arr[neryh_index].square;
    cout << "enter the ruler ";
    cin >> arr[neryh_index].vlasnik;
    neryh_index++;
    cout << "\n";
    for (int i = 0; i < neryh_index; i++) {
        cout << i + 1 << "\t" << arr[i].tip << "\t" << arr[i].cost << "\t" << arr[i].square << "\t" << arr[i].vlasnik << endl;
    }
    cout << "\n";
}

void sortt()  { // функция для сортировки по алфавиту
    int i, j, i1;
    for (i = 0; i < neryh_index; i++)
    {
        i1 = i;
        for (j = i+1; j < neryh_index; j++)
            if (arr[j].tip[0] < arr[i1].tip[0]){
                i1 = j;
            }
        neryhomist temp = arr[i1];
        arr[i1] = arr[i];
        arr[i] = temp;
    }
    for(i=0;i<neryh_index;i++)
    {cout<<"\n------";
        cout<<"\n type "<<arr[i].tip;
        cout<<"\n price "<<arr[i].cost;
        cout<<"\n square "<<arr[i].square;
        cout<<"\n ruler "<<arr[i].vlasnik;}
}


void change()
{
    int ner, ch;
    if(neryh_index == 0) {
        cout << "list is empty"<< endl;
    }
    else {
        cout << "which numb u wont to change" << endl;
        cin >> ch;


        while(ch < 1 || ch  > neryh_index){
            cout <<" wrong input" << endl;
            cout <<" choose from 1 to " << neryh_index << endl;
            cin >> ch;
        }
        ch-=1;
        cout << "what u wont to change in " << arr[ch].tip << "?" << endl;
        cout << "Change type 1 " << endl;
        cout << "Change price 2 " << endl;
        cout << "Change square 3 " << endl;
        cout << "Change ruler 4 " << endl;
        cin >> ner;
        switch(ner) {

    case 1:
        cin.ignore();
        cout << "new type for " << arr[ch].tip << " ";
        cin.getline(arr[ch].tip, maxlen);

        break;

    case 2:

        cin.ignore();
        cout << " new price for " << arr[ch].tip << " ";
        cin >> arr[ch].cost;

        break;

    case 3:

        cout << "new square for " << arr[ch].tip << " ";
        cin >> arr[ch].square;
        break;

    case 4:

        cout << "new ruler for " << arr[ch].tip << " ";
        cin >> arr[ch].vlasnik;
        break;

    default:
        cout << " wrong choise" << endl;
        }
        cout <<" new data for numb " << ch+1 << endl;

        cout << endl;

        cout<<"\n type "<<arr[ch].tip;
        cout<<"\n price "<<arr[ch].cost;
        cout<<"\n square "<<arr[ch].square;
        cout<<"\n ruler "<<arr[ch].vlasnik;


    }
}
void del()//функция, удаляющая запись
{
    int d;
    cout << "Get the number of the record, which you need to see "; // номер, который нужно удалить
    cin >> d;
    for (int i = d - 1; i < neryh_index; i++)
    { arr[i] = arr[i + 1];}
    neryh_index--;

    cout << "\n";
    for (int i = 0; i <  neryh_index; i++) {
        cout << i + 1 << "\t" << arr[i].tip << "\t" << arr[i].cost << "\t" << arr[i].square << "\t" << arr[i].vlasnik << endl;
    }
    cout << "\n";
}



