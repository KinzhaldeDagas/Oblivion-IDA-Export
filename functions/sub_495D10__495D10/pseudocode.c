HWND __thiscall sub_495D10(LPCSTR *this, int X, int Y, int nWidth, int nHeight)
{
  HINSTANCE v6; // ecx
  HWND (__stdcall *v7)(DWORD, LPCSTR, LPCSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID); // edi
  HWND Window; // eax
  HWND result; // eax
  INITCOMMONCONTROLSEX picce; // [esp+8h] [ebp-40h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-38h] BYREF
  WNDCLASSA WndClass; // [esp+20h] [ebp-28h] BYREF

  picce.dwSize = 8; /*0x495d1c*/
  picce.dwICC = 2; /*0x495d24*/
  InitCommonControlsEx(&picce); /*0x495d2c*/
  v6 = (HINSTANCE)*this; /*0x495d32*/
  WndClass.style = 3; /*0x495d3b*/
  WndClass.lpfnWndProc = sub_4955B0; /*0x495d43*/
  WndClass.cbClsExtra = 0; /*0x495d4b*/
  WndClass.cbWndExtra = 0; /*0x495d53*/
  WndClass.hInstance = v6; /*0x495d5b*/
  WndClass.hIcon = LoadIconA(0, (LPCSTR)0x7F00); /*0x495d6c*/
  WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00); /*0x495d78*/
  WndClass.hbrBackground = (HBRUSH)GetStockObject(0); /*0x495d87*/
  WndClass.lpszClassName = "NiTreeCtrl"; /*0x495d8b*/
  WndClass.lpszMenuName = 0; /*0x495d93*/
  RegisterClassA(&WndClass); /*0x495d9b*/
  v7 = CreateWindowExA; /*0x495dad*/
  Window = CreateWindowExA(0, "NiTreeCtrl", *(this + 7), 0xCE0200u, X, Y, nWidth, nHeight, 0, 0, (HINSTANCE)*this, 0); /*0x495dd4*/
  *(this + 2) = (LPCSTR)Window; /*0x495ddc*/
  GetClientRect(Window, &Rect); /*0x495ddf*/
  result = v7( /*0x495e1d*/
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
  *(this + 3) = (LPCSTR)result; /*0x495e20*/
  return result; /*0x495e1f*/
}
