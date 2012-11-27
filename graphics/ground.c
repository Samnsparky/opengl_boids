#include "ground.h"

void ground_initGround(QuadObject * obj, int texID)
{
   QuadObject_init(obj, 8, 6);
   QuadObject_setNextColor(obj, GROUND_R, GROUND_G, GROUND_B);
   objutil_addRectPrismTex(obj, -200, 0, -200, 400, 3, 400, texID);
   //objutil_addRectPrism(obj, -200, 0, -200, 400, 3, 400);
}