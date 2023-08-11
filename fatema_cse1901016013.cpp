#include<bits/stdc++.h>
#include<graphics.h>

int main()
{
    int ch;
    std::cout << "Enter your number: ";
    std::cin >> ch;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    switch(ch)
    {
    case 1:
        setcolor(GREEN);
        rectangle(150,100,270,250);
        setfillstyle(1,GREEN);
        floodfill(130,55,GREEN);

        setcolor(RED);
        circle(200,155,80);
        setfillstyle(1,RED);
        floodfill(156,200,RED);

        setcolor(WHITE);
        rectangle(96,50,99,500);
        setfillstyle(4,BLUE);
        floodfill(90,55,WHITE);

        getch();
        closegraph();
        break;

    case 2:
        setcolor(WHITE);
        circle(250,250,150);
        setcolor(WHITE);
        circle(200,150,20);
        setcolor(WHITE);
        circle(250,150,20);
        line(250,150,190,160);
        line(200,140,240,200);
        line(190,160,250,240);

        ellipse(200, 170, 190, 0, 60, 30);
        getch();
        closegraph();
        break;

    case 3:
        setcolor(WHITE);
        rectangle(150,180,250,300);
        rectangle(250,180,420,300);
        rectangle(180,250,220,300);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);

        setfillstyle(SOLID_FILL, BROWN);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(SLASH_FILL, BLUE);
        floodfill(182, 252, WHITE);
        setfillstyle(HATCH_FILL, GREEN);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);
        break;

         case 4:
       setcolor(BROWN);
        rectangle(150 + i * 250, 350, 350 + i * 200, 500); // House base
        rectangle(120 + i * 200, 380, 180 + i * 200, 500); // Door
        rectangle(220 + i * 200, 380, 280 + i * 200, 500); // Door

        setfillstyle(SOLID_FILL, BROWN);
        floodfill(200 + i * 200, 400, BROWN);

        setcolor(LIGHTGRAY);
        rectangle(130 + i * 200, 320, 170 + i * 200, 370); // Window
        rectangle(230 + i * 200, 320, 270 + i * 200, 370); // Window

        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(150 + i * 200, 340, LIGHTGRAY);
        floodfill(250 + i * 200, 340, LIGHTGRAY);
        getch();
        closegraph();
        break;

    default:
        std::cout << "Invalid choice";
    }

    return 0;
}

