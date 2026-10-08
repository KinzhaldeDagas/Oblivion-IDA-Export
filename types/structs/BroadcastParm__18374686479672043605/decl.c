struct BroadcastParm
{
DWORD flags;
LPDWORD recipients;
UINT msg;
__declspec(align(8)) WPARAM_0 wp;
LPARAM_0 lp;
BOOL success;
HWINSTA winsta;
};
