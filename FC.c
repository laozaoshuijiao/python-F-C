/*
使用公式  ℃=（5/9）（°F-32），将摄氏温度转化为华氏温度。
*/
#include <stdio.h>

void main() {

	// 变量声明
	float celsius, fahr;

	// 输出提示信息及接收参数输入
	printf("请输入摄氏温度值：");      scanf_s("%f", &celsius);
	

	// 摄氏转华氏温度计算   
	fahr = (9.0 / 5.0) * celsius + 32;

	// 打印转换后的华氏温度值
	printf("您输入的摄氏温度为：%.0f摄氏度(°C), 转换为华氏温度为：%.1f华氏度(°F)\n", celsius, fahr);

	return 0;
}