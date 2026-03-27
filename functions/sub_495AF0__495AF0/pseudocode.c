void __thiscall sub_495AF0(HWND *this, LPARAM a2, int a3)
{
  bool v4; // zf
  LRESULT v5; // eax
  unsigned int v6; // ebx
  LRESULT i; // ebp
  int v8; // edx
  int v9; // eax
  unsigned int v10; // ebx
  LRESULT j; // ebp
  int v12; // eax
  HWND v13; // [esp-18h] [ebp-54h]
  HWND v14; // [esp-18h] [ebp-54h]
  HWND v15; // [esp-18h] [ebp-54h]
  LPARAM lParam[6]; // [esp+8h] [ebp-34h] BYREF
  const char *v17; // [esp+20h] [ebp-1Ch]
  int v18; // [esp+28h] [ebp-14h]
  int v19; // [esp+2Ch] [ebp-10h]
  int v20; // [esp+34h] [ebp-8h]

  if ( a3 )
  {
    v4 = *(_DWORD *)(a3 + 0x7C) == 0;
    lParam[1] = 0xFFFF0002;
    lParam[2] = 0x27;
    v20 = a3;
    if ( !v4 )
    {
      v13 = *(this + 3);
      v17 = "Object Palette";
      v18 = 5;
      v19 = 5;
      lParam[0] = a2;
      v5 = SendMessageA(v13, 0x1100, 0, (LPARAM)lParam);
      sub_495120(this, v5, *(int **)(a3 + 0x7C));
    }
    v14 = *(this + 3);
    v17 = "Active Sequences";
    v18 = 5;
    v19 = 5;
    lParam[0] = a2;
    v6 = 0;
    for ( i = SendMessageA(v14, 0x1100, 0, (LPARAM)lParam); v6 < *(unsigned __int16 *)(a3 + 0x46); ++v6 )
    {
      v8 = *(_DWORD *)(a3 + 0x40);
      v9 = *(_DWORD *)(v8 + 4 * v6);
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 0x44) )
          sub_495270(i, *(_DWORD *)(v8 + 4 * v6));
      }
    }
    v15 = *(this + 3);
    v17 = "Inactive Sequences";
    v10 = 0;
    for ( j = SendMessageA(v15, 0x1100, 0, (LPARAM)lParam); v10 < *(unsigned __int16 *)(a3 + 0x46); ++v10 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(a3 + 0x40) + 4 * v10);
      if ( v12 )
      {
        if ( !*(_DWORD *)(v12 + 0x44) )
          sub_495270(j, *(_DWORD *)(*(_DWORD *)(a3 + 0x40) + 4 * v10));
      }
    }
  }
}
