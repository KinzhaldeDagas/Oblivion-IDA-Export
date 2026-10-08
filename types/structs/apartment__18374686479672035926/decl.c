struct apartment
{
list entry;
LONG refs;
BOOL multi_threaded;
DWORD tid;
__declspec(align(8)) OXID oxid;
LONG ipidc;
CRITICAL_SECTION cs;
list proxies;
list stubmgrs;
BOOL remunk_exported;
LONG remoting_started;
list loaded_dlls;
DWORD host_apt_tid;
HWND host_apt_hwnd;
local_server *local_server;
BOOL being_destroyed;
__declspec(align(8)) OID oidc;
HWND win;
IMessageFilter_0 *filter;
BOOL main;
list usage_cookies;
};
