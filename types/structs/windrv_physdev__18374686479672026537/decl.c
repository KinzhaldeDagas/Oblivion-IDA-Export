struct __declspec(align(8)) windrv_physdev
{
gdi_physdev dev;
dibdrv_physdev *dibdrv;
window_surface *surface;
DWORD start_ticks;
};
