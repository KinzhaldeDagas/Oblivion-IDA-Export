struct gdi_physdev
{
const gdi_dc_funcs *funcs __offset(OFF64|AUTO);
gdi_physdev *next __offset(OFF64|AUTO);
HDC hdc __offset(OFF64|AUTO);
};
