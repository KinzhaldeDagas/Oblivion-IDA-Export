struct gdi_obj_funcs
{
INT (*pGetObjectW)(HGDIOBJ, INT, LPVOID) __offset(OFF64|AUTO);
BOOL (*pUnrealizeObject)(HGDIOBJ) __offset(OFF64|AUTO);
BOOL (*pDeleteObject)(HGDIOBJ) __offset(OFF64|AUTO);
};
