#ifndef LinkedList_h
#define LinkedList_h

template <class T>
class LinkedList {
private:
    struct element{
        T value;
        struct element* next_element;
    };
    int len = 0;
    struct element* head_element = nullptr;
    struct element* end_element = nullptr;

public:
    class IndexOutOfRange{};

    //Создание объекта
    LinkedList (T* items, int count); //Копирует элементы из переданного списка
    LinkedList (); //Создает пустой список
    LinkedList (const LinkedList <T> & list); //Копирующий конструктор

    //удаление объекта
    ~LinkedList();//деконструктор
    void Delete_LinkedList(); //удаление списка

    //декомпозиция
    T GetFirst();//Возвращает первый элемент
    T GetLast();//Возвращает последний элемент
    T Get(int index);//Возвращает элемент по индексу
    LinkedList<T> GetSubList(int startIndex, int endIndex);//Возваращет список элементов в исходных пределах
    int GetLength();//Возвращает длину

    //Операции
    void Append(T item); //Добавление элемента в конец списка
    void Prepend(T item); //Добавление элемента в начало списка
    void InsertAt(T item, int index); //Вставка элемента в заданную позицию
    LinkedList<T> Concat(LinkedList<T> *list); //Сцепляет два списка
};


#endif