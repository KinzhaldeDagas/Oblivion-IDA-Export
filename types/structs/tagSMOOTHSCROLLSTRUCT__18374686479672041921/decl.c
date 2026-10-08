struct tagSMOOTHSCROLLSTRUCT
{
DWORD dwSize;
DWORD x2;
HWND hwnd;
DWORD dx;
DWORD dy;
LPRECT lpscrollrect;
LPRECT lpcliprect;
HRGN hrgnupdate;
LPRECT lpupdaterect;
DWORD flags;
DWORD stepinterval;
DWORD dx_step;
DWORD dy_step;
SCROLLWINDOWEXPROC scrollfun;
};
