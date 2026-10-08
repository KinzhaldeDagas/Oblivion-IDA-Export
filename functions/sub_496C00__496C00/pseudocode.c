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

  v3 = SendMessageA; /*0x496c04*/
  SendMessageA(*(HWND *)(this + 0xC), 0x1109u, 0, *(_DWORD *)(this + 0x14)); /*0x496c1d*/
  lParam[1] = 0xFFFF0002; /*0x496c25*/
  lParam[2] = 0x27; /*0x496c2d*/
  lParam[0] = 0xFFFF0000; /*0x496c35*/
  if ( a3 ) /*0x496c3d*/
    v9 = a3; /*0x496c3f*/
  else
    v9 = *(_DWORD *)(this + 0x1C); /*0x496c48*/
  v7 = *(HWND *)(this + 0xC); /*0x496c5f*/
  v10 = 0; /*0x496c60*/
  v11 = 0; /*0x496c68*/
  v12 = a2; /*0x496c70*/
  v5 = v3(v7, 0x1100u, 0, (LPARAM)lParam); /*0x496c74*/
  *(_DWORD *)(this + 0x10) = v5; /*0x496c7a*/
  sub_4964F0((HWND *)this, v5, a2); /*0x496c7d*/
  ShowWindow(*(HWND *)(this + 8), 0xA); /*0x496c88*/
  return UpdateWindow(*(HWND *)(this + 8)); /*0x496c98*/
}
