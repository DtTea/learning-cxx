#include "../exercise.h"
#include <numeric>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

int main(int argc, char **argv) {
    using DataType = float;
    int shape[]{1, 3, 224, 224};
    // TODO: 调用 `std::accumulate` 计算：
    //       - 数据类型为 float；
    //       - 形状为 shape；
    //       - 连续存储；
    //       的张量占用的字节数
    // int size =
    
    // 使用std::accumulate计算形状数组中所有元素的乘积
    // 注意：我们需要提供一个lambda函数作为累加器
    auto product = std::accumulate(std::begin(shape), std::end(shape), 1,
        [](int a, int b) { return a * b; });
 
    // 计算总字节数
    int size = product * sizeof(DataType);
 
    ASSERT(size == 602112, "4x1x3x224x224 = 602112");
    return 0;
}
