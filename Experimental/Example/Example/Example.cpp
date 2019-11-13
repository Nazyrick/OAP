# include <stdio.h>
#define PI 3.14159
main()/* изучение вашей пиццы */
{
	double area, circum, radius;
	printf("Чемy равен радиус вашей пиццы?\n");
	scanf("%f", &radius);
	circum = 2 * PI * radius;
	area = PI * radius * radius;
	printf("Основные параметры вашей пиццы следующие:\n");
	printf("длина окружности = %1.2f, площадь = %1.2f\n", circum, area);
}

