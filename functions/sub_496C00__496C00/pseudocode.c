BOOL __thiscall sub_496C00(int this, int a2, int a3)
{
  LRESULT (__stdcall *v3)(HWND, UINT, WPARAM, LPARAM); // ebx
  LPARAM v5; // eax
  HWND v7; // [esp-10h] [ebp-50h]
  LPARAM lParam[6]; // [esp+Ch] [ebp-34h] BYREF
  int v9; // [esp+24h] [ebp-1Ch]
  int v10; // [esp+2Ch] [ebp-14h]
  int v11; // [esp+30h] [ebp-10h]
  int v12; // [esp+38h] [ebp-8h]

  v3 = SendMessageA;
  SendMessageA(*(HWND *)(this + 0xC), 0x1109u, 0, *(_DWORD *)(this + 0x14));
  lParam[1] = 0xFFFF0002;
  lParam[2] = 0x27;
  lParam[0] = 0xFFFF0000;
  if ( a3 )
    v9 = a3;
  else
    v9 = *(_DWORD *)(this + 0x1C);
  v7 = *(HWND *)(this + 0xC);
  v10 = 0;
  v11 = 0;
  v12 = a2;
  v5 = v3(v7, 0x1100u, 0, (LPARAM)lParam);
  *(_DWORD *)(this + 0x10) = v5;
  sub_4964F0((HWND *)this, v5, a2);
  ShowWindow(*(HWND *)(this + 8), 0xA);
  return UpdateWindow(*(HWND *)(this + 8));
}
