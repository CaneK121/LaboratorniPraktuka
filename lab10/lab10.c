
#include stdio.h
#includestdlib.h
struct film{
    char type [20];
    char airportOfDestination [20];
    char daysOfDeparture [20];
    int timeOfDeparture;
    float distance;
    int price;
    int number;
};
int main()
{
    int n;
    printf(Введіть кількість рейсів);
    scanf(%d,&n);
    struct film a[n];
    for ( int i=0; in; i++){
        printf(nТип літака);
        gets(a[i].type);
        printf(nАеропорт призначення);
        gets(a[i].airportOfDestination);
        printf(Дні вильоту );
        gets(a[i].daysOfDeparture);
        printf(Час вильоту);
        scanf(%f,&a[i].timeOfDeparture);
        printf(Відстань);
        scanf(%d,&a[i].distance);
        printf(Вартість квитка);
        scanf(%f,&a[i].price);
        printf(n);
        printf(Номер);
        scanf(%f,&a[i].Number);
        printf(n);
    }
    
    int minPrice = 99999;
    int minIndex = 0;
    for ( int i=0; in; i++){
        if(a[i].price  minPrice){
            minPrice = a[i].price;
            minIndex = i;
        }
    }
    
    printf(Літак з найменшою вартістю квиткаnНомер рейсу %dnТип літака %sn Аеропорт призначення %snДні вильоту %snЧас вильоту %d nВідстань до аеропорту призначення в км %snВартість квитка %s, a[minIndex].number, a[minIndex].type, a[minIndex].airportOfDestination, a[minIndex].daysOfDeparture, a[minIndex].timeOfDeparture, a[minIndex].distance, a[minIndex].price);
    
    
return 0;
}
    printf(Hello world);
    
    return 0;
}