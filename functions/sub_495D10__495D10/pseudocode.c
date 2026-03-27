HWND __thiscall sub_495D10(LPCSTR *this, int X, int Y, int nWidth, int nHeight)
{
  CHAR *v6; // ecx
  HWND (__stdcall *v7)(DWORD, LPCSTR, LPCSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID); // edi
  HWND Window; // eax
  HWND result; // eax
  INITCOMMONCONTROLSEX picce; // [esp+8h] [ebp-40h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-38h] BYREF
  WNDCLASSA WndClass; // [esp+20h] [ebp-28h] BYREF

  picce.dwSize = 8;
  picce.dwICC = 2;
  InitCommonControlsEx(&picce);
  v6 = (CHAR *)*this;
  WndClass.style = 3;
  WndClass.lpfnWndProc = (WNDPROC)sub_4955B0;
  WndClass.cbClsExtra = 0;
  WndClass.cbWndExtra = 0;
  WndClass.hInstance = (HINSTANCE)v6;
  WndClass.hIcon = LoadIconA(0, (LPCSTR)0x7F00);
  WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
  WndClass.hbrBackground = (HBRUSH)GetStockObject(0);
  WndClass.lpszClassName = "NiTreeCtrl";
  WndClass.lpszMenuName = 0;
  RegisterClassA(&WndClass);
  v7 = CreateWindowExA;
  Window = CreateWindowExA(0, "NiTreeCtrl", *(this + 7), 0xCE0200u, X, Y, nWidth, nHeight, 0, 0, (HINSTANCE)*this, 0);
  *(this + 2) = (LPCSTR)Window;
  GetClientRect(Window, &Rect);
  result = v7(
             0,
             "SysTreeView32",
             EmptyString,
             0x50010007u,
             0,
             0,
             Rect.right - Rect.left + 1,
             Rect.bottom - Rect.top + 1,
             (HWND)*(this + 2),
             0,
             (HINSTANCE)*this,
             0);
  *(this + 3) = (LPCSTR)result;
  return result;
}
