struct __declspec(align(8)) clipped_rects
{
RECT *rects __offset(OFF64|AUTO);
int count;
RECT buffer[32];
};
