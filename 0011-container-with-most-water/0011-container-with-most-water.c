int maxArea(int* height, int heightSize)
{
    int h;
    int maxarea=0;
    int j=heightSize-1;
    int i=0;
    while(i<j)
    {  int w = j-i;
      if(height[i]<height[j])
      {
         h=height[i];
      }
      else
      {
       h=height[j];
      }
       int area=w*h;
        
    if(area>maxarea)
    {
        maxarea=area;
    }
    if(height[i]<height[j])
    {
        i++;
    }
    else
    { 
        j--;
    }
}
    return maxarea;
}