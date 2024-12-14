#include <GL/glut.h>
#include <math.h>

float x = 0.0f; 
int direction = 1;

void drawCircle(float cx, float cy, float r, int num_segments) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; ++i) {
        float theta = 2.0f * M_PI * float(i) / float(num_segments); 
        float x = r * cosf(theta);  
        float y = r * sinf(theta);  
        glVertex2f(x + cx, y + cy); 
    }
    glEnd();
}

void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    // gluOrtho2D(-900, 900, -700, 700);
    glClear(GL_COLOR_BUFFER_BIT);

    //sky
    glBegin(GL_POLYGON);
    glColor3f(0.855f, 0.996f, 1.0f);
    glVertex2d(900, 700);
    glVertex2d(-900, 700);
    glVertex2d(-900, 0);
    glVertex2d(900, 0);
    glEnd();

    //trees
    glBegin(GL_POLYGON);
    glColor3f(0.114f, 0.471f, 0.11f);
    glVertex2d(-750, 100);
    glVertex2d(-900, 0);
    glVertex2d(-600, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.114f, 0.471f, 0.11f);
    glVertex2d(-450, 100);
    glVertex2d(-600, 0);
    glVertex2d(-300, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.114f, 0.471f, 0.11f);
    glVertex2d(-150, 100);
    glVertex2d(-300, 0);
    glVertex2d(0, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.114f, 0.471f, 0.11f);
    glVertex2d(150, 100);
    glVertex2d(0, 0);
    glVertex2d(300, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.114f, 0.471f, 0.11f);
    glVertex2d(450, 100);
    glVertex2d(300, 0);
    glVertex2d(600, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.114f, 0.471f, 0.11f);
    glVertex2d(750, 100);
    glVertex2d(600, 0);
    glVertex2d(900, 0);
    glEnd();

    //sun
    glColor3f(1.0f, 0.8745f, 0.0f);
    drawCircle(550, 550, 80, 100);

    //setp-code_not mandatory to look into
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(140, 0);
    glVertex2d(0,400);
    glVertex2d(50,80);
    glEnd(); 

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(-200, 0);
    glVertex2d(-60,400);
    glVertex2d(-105,80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(230, 0);
    glVertex2d(50,260);
    glVertex2d(110, 80);
    glEnd(); 

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(-300, 0);
    glVertex2d(-105,270);
    glVertex2d(-170, 80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(340, 0);
    glVertex2d(100, 190);
    glVertex2d(190, 60);
    glEnd(); 

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(-400, 0);
    glVertex2d(-150,210);
    glVertex2d(-250, 70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(440, 0);
    glVertex2d(150, 150);
    glVertex2d(250, 70);
    glEnd(); 

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(-520, 0);
    glVertex2d(-250, 125);
    glVertex2d(-340, 50);
    glEnd();

    //Main Span
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(60, 0);
    glVertex2d(-30,580);
    glVertex2d(-120, 0);
    glEnd();   

    glLineWidth(2.0f);
    
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(60, 0);
    glVertex2d(-30, 580);
    glVertex2d(-120, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(29, 220);
    glVertex2d(-29, 330);
    glVertex2d(-89, 220);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(29, 220);
    glVertex2d(-29, 330);
    glVertex2d(-89, 220);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(29, 190);
    glVertex2d(-29, 90);
    glVertex2d(-89, 190);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(29, 190);
    glVertex2d(-29, 90);
    glVertex2d(-89, 190);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); 
    glBegin(GL_LINES);
    glVertex2d(-30, 580);        
    glVertex2d(-30, 0);            
    glEnd();

    //base 1
    glBegin(GL_POLYGON);
    glColor3f(0.969f, 0.773f, 0.325f);
    glVertex2d(900, 0);
    glVertex2d(-900, 0);
    glVertex2d(-900, -50);
    glVertex2d(900, -50);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.729f, 0.58f, 0.251f);
    glVertex2d(900, 0);
    glVertex2d(-900, 0);
    glVertex2d(-900, -50);
    glVertex2d(900, -50);
    glEnd();

    // base 2
    glBegin(GL_POLYGON);
    glColor3f(0.961f, 0.592f, 0.467f);
    glVertex2d(900, -50);
    glVertex2d(-900, -50);
    glVertex2d(-900, -100);
    glVertex2d(900, -100);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.671f, 0.38f, 0.282f);
    glVertex2d(900, -50);
    glVertex2d(-900, -50);
    glVertex2d(-900, -100);
    glVertex2d(900, -100);
    glEnd();

    // Secondary Span
    
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(140, 0);
    glVertex2d(0,400);
    glEnd(); 

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(140, 0);
    glVertex2d(50,80);
    glEnd();

    //gaps
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2d(140, 0);
    glVertex2d(50,80);
    glVertex2d(60, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-200, 0);
    glVertex2d(-60,400);
    glEnd(); 

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-200, 0);
    glVertex2d(-105,80);
    glEnd();

    //gaps
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2d(-200, 0);
    glVertex2d(-105,80);
    glVertex2d(-120, 0);
    glEnd();

    //third span
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(230, 0);
    glVertex2d(50,260);
    glEnd(); 

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(230, 0);
    glVertex2d(110, 80);
    glEnd();

    //gaps
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2d(230, 0);
    glVertex2d(110, 80);
    glVertex2d(140, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-300, 0);
    glVertex2d(-105,270);
    glEnd(); 

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-300, 0);
    glVertex2d(-170, 80);
    glEnd();

    //gaps
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2d(-300, 0);
    glVertex2d(-170, 80);
    glVertex2d(-200, 0);
    glEnd();

    //fourth span

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(340, 0);
    glVertex2d(100, 190);
    glEnd(); 

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(340, 0);
    glVertex2d(190, 60);
    glEnd();

    //gaps
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2d(340, 0);
    glVertex2d(190, 60);
    glVertex2d(230, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-400, 0);
    glVertex2d(-150,210);
    glEnd(); 

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-400, 0);
    glVertex2d(-250, 70);
    glEnd();

    //gaps
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2d(-400, 0);
    glVertex2d(-250, 70);
    glVertex2d(-300, 0);
    glEnd();

    //fifth span

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(440, 0);
    glVertex2d(150, 150);
    glEnd(); 

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(440, 0);
    glVertex2d(250, 70);
    glEnd();

    //gaps
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2d(440, 0);
    glVertex2d(250, 70);
    glVertex2d(340, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-520, 0);
    glVertex2d(-250, 125);
    glEnd(); 

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2d(-520, 0);
    glVertex2d(-340, 50);
    glEnd();

    //gaps
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.8f, 0.8f);
    glVertex2d(-520, 0);
    glVertex2d(-340, 50);
    glVertex2d(-400, 0);
    glEnd();

    //flag on base 2

    //stand

    glBegin(GL_POLYGON);
    glColor3f(0.906f, 0.91f, 0.22f);
    glVertex2d(-640, 460);
    glVertex2d(-660, 460);
    glVertex2d(-660, -50);
    glVertex2d(-640, -50);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.78f, 0.522f, 0.18f);
    glVertex2d(-640, 460);
    glVertex2d(-660, 460);
    glVertex2d(-660, -50);
    glVertex2d(-640, -50);
    glEnd();

    //flag
    glBegin(GL_POLYGON);
    glColor3f(0.196f, 0.761f, 0.125f);
    glVertex2d(-430, 400);
    glVertex2d(-640, 400);
    glVertex2d(-640, 260);
    glVertex2d(-430, 260);
    glEnd();

    //circle
    glColor3f(0.922f, 0.224f, 0.141f);
    drawCircle(-530, 330, 45, 100);

    //field
    glBegin(GL_POLYGON);
    glColor3f(0.647f, 0.969f, 0.569f);
    glVertex2d(900, -520);
    glVertex2d(-900, -520);
    glVertex2d(-900, -700);
    glVertex2d(900, -700);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.647f, 0.969f, 0.569f);
    glVertex2d(900, -110);
    glVertex2d(900, -100);
    glVertex2d(-900, -100);
    glVertex2d(-900, -110);
    glVertex2d(-870, -140);
    glVertex2d(-670, -190);
    glVertex2d(670, -190);
    glVertex2d(870, -140);
    glEnd();

    //River

    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(-670, -210);
    glVertex2d(670, -210);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(670, -210);
    glVertex2d(870, -150);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(-670, -210);
    glVertex2d(-870, -150);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(870, -150);
    glVertex2d(900, -120);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(-870, -150);
    glVertex2d(-900, -120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.157f, 0.608f, 0.878f);
    glVertex2d(900, -120);
    glVertex2d(870, -150);
    glVertex2d(670, -210);
    glVertex2d(-670, -210);
    glVertex2d(-870, -150);
    glVertex2d(-900, -120);
    glVertex2d(-900, -520);
    glVertex2d(900, -520);
    glEnd();

    //side of river
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.49f, 0.067f);
    glVertex2d(670, -190);
    glVertex2d(-670, -190);
    glVertex2d(-670, -210);
    glVertex2d(670, -210);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.49f, 0.067f);
    glVertex2d(870, -140);
    glVertex2d(670, -190);
    glVertex2d(670, -210);
    glVertex2d(870, -150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.49f, 0.067f);
    glVertex2d(-870, -140);
    glVertex2d(-670, -190);
    glVertex2d(-670, -210);
    glVertex2d(-870, -150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.49f, 0.067f);
    glVertex2d(900, -110);
    glVertex2d(870, -140);
    glVertex2d(870, -150);
    glVertex2d(900, -120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.49f, 0.067f);
    glVertex2d(-900, -110);
    glVertex2d(-870, -140);
    glVertex2d(-870, -150);
    glVertex2d(-900, -120);
    glEnd();

    //field error
    glBegin(GL_POLYGON);
    glColor3f(0.647f, 0.969f, 0.569f);
    glVertex2d(900, -110);
    glVertex2d(900, -100);
    glVertex2d(-900, -100);
    glVertex2d(-900, -110);
    glVertex2d(-870, -140);
    glVertex2d(-670, -190);
    glVertex2d(670, -190);
    glVertex2d(870, -140);
    glEnd();

    //side of river error
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(-670, -210);
    glVertex2d(670, -210);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(670, -210);
    glVertex2d(870, -150);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(-670, -210);
    glVertex2d(-870, -150);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(870, -150);
    glVertex2d(900, -120);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glColor3f(0.067f, 0.11f, 0.6f);
    glVertex2d(-870, -150);
    glVertex2d(-900, -120);
    glEnd();

    //boat
    glBegin(GL_POLYGON);
    glColor3f(0.153f, 0.153f, 0.169f);
    glVertex2f(x-400, -370);
    glVertex2f(x-700, -370);
    glVertex2f(x-700, -450);
    glVertex2f(x-400, -450);    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.153f, 0.153f, 0.169f);
    glVertex2f(x-300, -340);
    glVertex2f(x-400, -370);
    glVertex2f(x-400, -450);    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.153f, 0.153f, 0.169f);
    glVertex2f(x-800, -340);
    glVertex2f(x-700, -370);
    glVertex2f(x-700, -450);    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.788f, 0.839f, 0.067f);
    glVertex2f(x-450, -270);
    glVertex2f(x-620, -270);
    glVertex2f(x-700, -370);
    glVertex2f(x-510, -370);    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.659f, 0.702f, 0.055f);
    glVertex2f(x-450, -270);
    glVertex2f(x-510, -370);
    glVertex2f(x-400, -370);
    glEnd();

    glLineWidth(8.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.094f, 0.122f, 0.588f);
    glVertex2f(x-700, -450);
    glVertex2f(x-400, -450);  
    glEnd();

    //Fighter1 with flag

    //flag
    glBegin(GL_POLYGON);
    glColor3f(0.906f, 0.91f, 0.22f);
    glVertex2d(580, 300);
    glVertex2d(340, -200);
    glVertex2d(340, -220);
    glVertex2d(600, 300);
    glEnd();

    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.78f, 0.522f, 0.18f);
    glVertex2d(580, 300);
    glVertex2d(340, -200);
    glVertex2d(340, -220);
    glVertex2d(600, 300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.196f, 0.761f, 0.125f);
    glVertex2d(880, 210);
    glVertex2d(840, 220);
    glVertex2d(850, 60);
    glVertex2d(900, 80);
    
    // glVertex2d(800, 70);
    // glVertex2d(800, 230);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.196f, 0.761f, 0.125f);
    glVertex2d(840, 220);
    glVertex2d(800, 230);
    glVertex2d(800, 70);
    glVertex2d(850, 60);    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.196f, 0.761f, 0.125f);
    glVertex2d(800, 230);
    glVertex2d(700, 280);
    glVertex2d(700, 90);    
    glVertex2d(800, 70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.196f, 0.761f, 0.125f);
    glVertex2d(700, 280);
    glVertex2d(640, 300);
    glVertex2d(640, 140);
    glVertex2d(700, 90);    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.196f, 0.761f, 0.125f);
    glVertex2d(640, 300);
    glVertex2d(600, 290);
    glVertex2d(600, 150);
    glVertex2d(700, 90);    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.196f, 0.761f, 0.125f);
    glVertex2d(600, 290);
    glVertex2d(580, 270);
    glVertex2d(595, 240);
    glVertex2d(585, 200);  
    glVertex2d(600, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.196f, 0.761f, 0.125f);   
    glVertex2d(600, 200);
    glVertex2d(585, 200);
    glVertex2d(515, 140);
    glVertex2d(550, 160);
    glVertex2d(600, 150);
    glEnd();

    glColor3f(0.922f, 0.224f, 0.141f);
    drawCircle(720, 180, 55, 100);

    //lower body
    glBegin(GL_POLYGON);
    glColor3f(0.718f, 0.459f, 0.255f);
    glVertex2d(470, -510);
    glVertex2d(290, -540);
    glVertex2d(260, -700);
    glVertex2d(510, -700);  
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(0.502f, 0.318f, 0.176f);
    glVertex2d(290, -540);
    glVertex2d(290, -700);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(0.502f, 0.318f, 0.176f);
    glVertex2d(350, -520);
    glVertex2d(350, -700);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(0.502f, 0.318f, 0.176f);
    glVertex2d(470, -520);
    glVertex2d(470, -700);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(0.502f, 0.318f, 0.176f);
    glVertex2d(410, -520);
    glVertex2d(410, -700);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.749f, 0.231f, 0.118f);
    glVertex2d(470, -510);
    glVertex2d(290, -540);
    glVertex2d(280, -560);
    glVertex2d(475, -530);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.773f, 0.604f, 0.365f);
    glVertex2d(355, -235); 
    // glVertex2d(330, -300);
    glVertex2d(300, -235);
    glVertex2d(280, -240);  
    glVertex2d(260, -270);
    glVertex2d(380, -270);
    glEnd();

    //body shirt
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(400, -400);
    glVertex2d(300, -400);
    glVertex2d(300, -500);
    glVertex2d(400, -500);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(400, -300);
    glVertex2d(300, -300);
    glVertex2d(300, -400);
    glVertex2d(400, -400);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(300, -400);
    glVertex2d(270, -400);
    glVertex2d(285, -500);
    glVertex2d(300, -500);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(400, -500);
    glVertex2d(300, -500);
    glVertex2d(300, -540);
    glVertex2d(400, -523);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(470, -510);
    glVertex2d(400, -500);
    // glVertex2d(300, -540);
    glVertex2d(400, -523);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(300, -500);
    glVertex2d(285, -500);  
    glVertex2d(290, -540);
    glVertex2d(300, -540);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(470, -400);
    glVertex2d(400, -400);  
    glVertex2d(400, -500);
    glVertex2d(470, -510);
    // glVertex2d(475, -400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(430, -300);
    glVertex2d(400, -300);  
    glVertex2d(400, -400);
    glVertex2d(470, -400);
    glVertex2d(470, -300);
    glEnd();

    // 91
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(395, -240);
    glVertex2d(360, -240);  
    glVertex2d(330, -270);
    glVertex2d(330, -300);
    glVertex2d(400, -300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(400, -300);
    glVertex2d(430, -300);
    glVertex2d(395, -240);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(300, -300);
    glVertex2d(280, -300);  
    glVertex2d(260, -340);
    glVertex2d(270, -400);
    glVertex2d(300, -400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(330, -270);
    glVertex2d(280, -240);  
    glVertex2d(255, -245);
    glVertex2d(280, -300); 
    glVertex2d(330, -300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.773f, 0.604f, 0.365f);
    glVertex2d(355, -205);
    glVertex2d(300, -205);  
    glVertex2d(300, -235);
    glVertex2d(355, -235); 
    // glVertex2d(330, -300);
    glEnd();

    //upper hand left
    glBegin(GL_POLYGON);
    glColor3f(0.773f, 0.604f, 0.365f);
    glVertex2d(255, -245);
    glVertex2d(215, -245);  
    glVertex2d(200, -420);
    glVertex2d(255, -400); 
    glVertex2d(265, -340);
    glVertex2d(280, -300);
    glEnd();

    //lower hand left
    glBegin(GL_POLYGON);
    glColor3f(0.773f, 0.604f, 0.365f);
    glVertex2d(255, -400); 
    glVertex2d(200, -420);
    glVertex2d(285, -490);
    glVertex2d(275, -430);
    glEnd();

    //head
    glColor3f(0.11f, 0.11f, 0.11f);
    drawCircle(322, -143, 70, 100);

    //right back shoulder
    glBegin(GL_POLYGON);
    glColor3f(0.773f, 0.604f, 0.365f);
    glVertex2d(470, -240); 
    glVertex2d(395, -240);
    glVertex2d(430, -300);
    glVertex2d(470, -300);
    glEnd();

    //right top arm
    glBegin(GL_POLYGON);
    glColor3f(0.773f, 0.604f, 0.365f);
    glVertex2d(540, -125); 
    glVertex2d(480, -145);
    glVertex2d(440, -240); 
    glVertex2d(470, -300);
    glEnd();

    //right low arm
    glBegin(GL_POLYGON);
    glColor3f(0.773f, 0.604f, 0.365f);
    glVertex2d(455, 50); 
    glVertex2d(435, 10);
    glVertex2d(480, -145);
    glVertex2d(540, -125); 
    glEnd();

    //fighter 2 with gun

    //lower body
    glBegin(GL_POLYGON);
    glColor3f(0.604f, 0.259f, 0.18f);
    glVertex2d(160, -500);
    glVertex2d(-5, -500);
    glVertex2d(-50, -700);
    glVertex2d(210, -700);  
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(0.439f, 0.188f, 0.129f);
    glVertex2d(-5, -500);
    glVertex2d(-5, -700);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(0.439f, 0.188f, 0.129f);
    glVertex2d(65, -500);
    glVertex2d(65, -700);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(0.439f, 0.188f, 0.129f);
    glVertex2d(95, -500);
    glVertex2d(95, -700);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(0.439f, 0.188f, 0.129f);
    glVertex2d(160, -520);
    glVertex2d(160, -700);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.812f, 0.663f, 0.459f);
    glVertex2d(162, -500);
    glVertex2d(-8, -500);
    glVertex2d(-10, -520);
    glVertex2d(164, -520);  
    glEnd();

    //body shirt
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(100, -400);
    glVertex2d(0, -400);
    glVertex2d(0, -500);
    glVertex2d(100, -500);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(100, -300);
    glVertex2d(0, -300);
    glVertex2d(0, -400);
    glVertex2d(100, -400);  
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(170, -400);
    glVertex2d(100, -400);
    glVertex2d(100, -500);
    glVertex2d(162, -500);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(158, -270);
    glVertex2d(100, -270);
    glVertex2d(100, -400);
    glVertex2d(170, -400);
    glVertex2d(173, -300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(0, -300);
    glVertex2d(-20, -330);
    glVertex2d(-10, -400);
    glVertex2d(0, -400);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(0, -400);
    glVertex2d(-10, -400);
    // glVertex2d(-15, -480);
    glVertex2d(-8, -500);
    glVertex2d(0, -500);  
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.965f, 0.918f);
    glVertex2d(70, -280);
    glVertex2d(60, -250);
    glVertex2d(0, -220);
    glVertex2d(0, -300);
    glVertex2d(100, -300);  
    glEnd();

    glFlush();

    x += 0.03f * direction;

    if (x > 2100 || x < -900) {
        direction *= -1;
    }

    glutPostRedisplay();

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 700);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Saad Kamal, Sadekul Hasan Sakib | 212-15-14729, 212-15-14732");
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    glOrtho(-900, 900, -700, 700, -1, 1);
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    
    return 0;
}
