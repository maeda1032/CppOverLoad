
#include <iostream>

// 動物クラス
class Animal final
{
public:
    Animal() = default;
    Animal(const char* name,int footNum);
    // コピー代入演算子オーバーロード
    Animal& operator =(const Animal& animal);

public:
    std::string     name_ = {};
    int             footNum_ = 0;
};

// コピー代入演算子オーバーロード
Animal& Animal::operator =(const Animal& src)
{
    // 引数で受け取ったインスタンス（参照）の内容で上書きする
    name_ = src.name_;
    footNum_ = src.footNum_;

    // 自分自身の参照を返す
    return *this;
}

int main()
{
    // 各インスタンスを作成する
    Animal animal1("動物１", 2);
    Animal animal2;
    Animal animal3;

    // 内容を複製する
    // コピー代入演算子オーバーロードを宣言、定義した事によって
    // 独自に定義した内容の関数が呼び出される
    animal3 = animal2 = animal1;

    animal3.operator=(animal2.operator=(animal1));
}
