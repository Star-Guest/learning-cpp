#include <iostream>
#include <memory>

class  Test
{
public:
  Test(/* args */)
{
      std::cout<< "Construct\n";
}
  ~ Test(/* args */)
{
    std::cout << "Destroy\n";
}


};


int main(){
    std::unique_ptr<Test> ptr = std::make_unique<Test>();

    return 0;
}

