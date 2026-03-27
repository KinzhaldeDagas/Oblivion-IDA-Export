LPARAM __cdecl sub_4954F0(HWND hWnd, LPARAM lParam, WPARAM wParam)
{
  LRESULT (__stdcall *v3)(HWND, UINT, WPARAM, LPARAM); // edi
  LPARAM result; // eax
  int v5; // eax
  LPARAM v6[11]; // [esp+8h] [ebp-2Ch] BYREF

  _memset(v6, 0, sizeof(v6));
  v3 = SendMessageA;
  v6[0] = 0xD;
  v6[4] = (LPARAM)&unk_B34E98;
  v6[5] = 0x104;
  result = v3(hWnd, 0x110Au, 4u, lParam);
  for ( v6[1] = result; result; v6[1] = result )
  {
    if ( v3(hWnd, 0x110Cu, 0, (LPARAM)v6) )
    {
      if ( v6[9] )
      {
        v5 = (*(int (__thiscall **)(LPARAM))(*(_DWORD *)v6[9] + 8))(v6[9]);
        if ( v5 )
        {
          if ( *(_WORD *)(v5 + 0xB8) )
          {
            v3(hWnd, 0x1102u, wParam, v6[1]);
            sub_4954F0(hWnd, v6[1], wParam);
          }
        }
      }
    }
    result = v3(hWnd, 0x110Au, 1u, v6[1]);
  }
  return result;
}
