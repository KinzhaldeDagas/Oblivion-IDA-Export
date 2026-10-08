struct window_surface_funcs
{
void (*lock)(window_surface *) __offset(OFF64|AUTO);
void (*unlock)(window_surface *) __offset(OFF64|AUTO);
void *(*get_info)(window_surface *, BITMAPINFO *) __offset(OFF64|AUTO);
RECT *(*get_bounds)(window_surface *) __offset(OFF64|AUTO);
void (*set_region)(window_surface *, HRGN) __offset(OFF64|AUTO);
void (*flush)(window_surface *) __offset(OFF64|AUTO);
void (*destroy)(window_surface *) __offset(OFF64|AUTO);
};
