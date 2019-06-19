/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 19 Jun 2019 12:17:27 GMT
 */

#include <LRemote.h>

LRemoteButton button1;
LRemoteButton button2;
LRemoteButton button3;
LRemoteButton button4;
LRemoteCircleButton circle1;
LRemoteCircleButton circle2;

void setup()
{
  LRemote.setName("cjunyu");
  LRemote.setOrientation(RC_LANDSCAPE);
  LRemote.setGrid(7, 5);
    button1.setPos(2, 1);
    button1.setText("△");
    button1.setSize(1, 1);
    button1.setColor(RC_PINK);
    LRemote.addControl(button1);

    button2.setPos(2, 3);
    button2.setText("▽");
    button2.setSize(1, 1);
    button2.setColor(RC_PINK);
    LRemote.addControl(button2);

    button3.setPos(1, 2);
    button3.setText("◁");
    button3.setSize(1, 1);
    button3.setColor(RC_YELLOW);
    LRemote.addControl(button3);

    button4.setPos(3, 2);
    button4.setText("▷");
    button4.setSize(1, 1);
    button4.setColor(RC_YELLOW);
    LRemote.addControl(button4);

    circle1.setPos(4, 3);
    circle1.setSize(2, 2);
    circle1.setText("▥");
    circle1.setColor(RC_BLUE);
    LRemote.addControl(circle1);

    circle2.setPos(5, 1);
    circle2.setSize(2, 2);
    circle2.setText("▤");
    circle2.setColor(RC_GREEN);
    LRemote.addControl(circle2);
  LRemote.begin();
}


void loop()
{

}
