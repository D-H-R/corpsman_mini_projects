{
Write the implementation for the  Point_in_rect function.
The function should return "true" if the given point P(px,py) 
is inside a achse parallel rectangle given by (x1, y1) and 
(x2, y2). In all other cases it should return false.

Tipp: paint a sketch (or use the given).
}
Function Point_in_rect(px, py, x1, y1, x2, y2: Integer): Boolean;
Test1:(1,1,2,2,10,10):False
Test2:(1,5,2,2,10,10):False
Test3:(1,11,2,2,10,10):False
Test4:(5,1,2,2,10,10):False
Test5:(10,5,2,2,10,10):true
Test6:(5,5,10,2,2,10):true
Test7:(5,2,2,10,10,2):true
Test8:(5,5,10,10,2,2):true
Test9:(5,12,2,2,10,10):False
Test10:(12,1,2,2,10,10):False
Test11:(13,5,2,2,10,10):False
Test12:(14,20,2,2,10,10):False
Test14:(4,0,-2,-2,10,10):true
Test15:(-2,-2,-2,-2,10,10):true
Test16:(-2,-2,-2,-2,-10,-10):true
Test17:(-5,-5,-2,-2,-10,-10):true
Test18:(-5,-1,-2,-2,-10,-10):false
Test19:(-5,-1,-2,2,-10,10):false
Test20:(0,-15,-2,2,-10,10):false
Test21:(5,-1,2,-2,10,-10):false
Test21:(5,-10,2,-2,10,-10):True
Test22:(0,0,1,1,2,2):false
Test23:(1,1,0,0,2,2):True
Test24:(1,1,2,0,0,2):True
