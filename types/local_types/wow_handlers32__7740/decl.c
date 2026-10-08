struct wow_handlers32
{
LRESULT_0 (*button_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL);
LRESULT_0 (*combo_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL);
LRESULT_0 (*edit_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL);
LRESULT_0 (*listbox_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL);
LRESULT_0 (*mdiclient_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL);
LRESULT_0 (*scrollbar_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL);
LRESULT_0 (*static_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL);
DWORD (*wait_message)(DWORD, const HANDLE *, DWORD, DWORD, DWORD);
HWND (*create_window)(CREATESTRUCTW *, LPCWSTR, HINSTANCE, BOOL);
HWND (*get_win_handle)(HWND);
WNDPROC_0 (*alloc_winproc)(WNDPROC_0, BOOL);
tagDIALOGINFO *(*get_dialog_info)(HWND, BOOL);
INT (*dialog_box_loop)(HWND, HWND);
ULONG_PTR (*get_icon_param)(HICON);
ULONG_PTR (*set_icon_param)(HICON, ULONG_PTR);
};
