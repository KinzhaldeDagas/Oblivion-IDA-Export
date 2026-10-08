struct sysparam_rgb_entry
{
sysparam_entry hdr;
COLORREF val;
HBRUSH brush __offset(OFF64|AUTO);
HPEN pen __offset(OFF64|AUTO);
};
