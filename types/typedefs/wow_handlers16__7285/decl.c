struct wow_handlers16
{
LRESULT_0 (*button_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL) __offset(OFF64|AUTO);
LRESULT_0 (*combo_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL) __offset(OFF64|AUTO);
LRESULT_0 (*edit_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL) __offset(OFF64|AUTO);
LRESULT_0 (*listbox_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL) __offset(OFF64|AUTO);
LRESULT_0 (*mdiclient_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL) __offset(OFF64|AUTO);
LRESULT_0 (*scrollbar_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL) __offset(OFF64|AUTO);
LRESULT_0 (*static_proc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL) __offset(OFF64|AUTO);
DWORD (*wait_message)(DWORD, const HANDLE *, DWORD, DWORD, DWORD) __offset(OFF64|AUTO);
HWND (*create_window)(CREATESTRUCTW *, LPCWSTR, HINSTANCE, BOOL) __offset(OFF64|AUTO);
LRESULT_0 (*call_window_proc)(HWND, UINT, WPARAM_0, LPARAM_0, LRESULT_0 *, void *) __offset(OFF64|AUTO);
LRESULT_0 (*call_dialog_proc)(HWND, UINT, WPARAM_0, LPARAM_0, LRESULT_0 *, void *) __offset(OFF64|AUTO);
void (*free_icon_param)(ULONG_PTR) __offset(OFF64|AUTO);
};
