struct __declspec(align(8)) SCROLL_TRACKING_INFO
{
HWND win __offset(OFF64|AUTO);
INT bar;
INT thumb_pos;
INT thumb_val;
BOOL vertical;
SCROLL_HITTEST hit_test;
};
