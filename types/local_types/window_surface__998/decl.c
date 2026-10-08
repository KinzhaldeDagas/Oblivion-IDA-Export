struct __declspec(align(8)) window_surface
{
const window_surface_funcs *funcs __offset(OFF64|AUTO);
list entry;
LONG ref;
RECT rect;
};
