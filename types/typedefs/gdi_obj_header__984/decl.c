struct __declspec(align(8)) gdi_obj_header
{
const gdi_obj_funcs *funcs __offset(OFF64|AUTO);
hdc_list *hdcs __offset(OFF64|AUTO);
WORD selcount;
unsigned __int16 system : 1;
unsigned __int16 deleted : 1;
};
