LRESULT __stdcall sub_4955B0(HWND hWnd, UINT Msg, WPARAM wParam, unsigned int a4)
{
  int v4; // eax
  LRESULT (__stdcall *v5)(HWND, UINT, WPARAM, LPARAM); // edi
  LRESULT v6; // eax
  void (__cdecl *v7)(LPARAM, int, _DWORD, _DWORD); // ecx
  bool v8; // zf
  void (__stdcall *v10)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND Window; // eax
  HWND v12; // edi
  HWND v13; // [esp-10h] [ebp-74h]
  HWND v14; // [esp-10h] [ebp-74h]
  LPARAM v15; // [esp+10h] [ebp-54h] BYREF
  int v17; // [esp+34h] [ebp-30h]
  LPARAM v18[11]; // [esp+38h] [ebp-2Ch] BYREF

  if ( Msg == 5 )
  {
    Window = GetWindow(hWnd, 5);
    v12 = Window;
    if ( Window )
    {
      SetWindowPos(Window, 0, 0, 0, (unsigned __int16)a4, HIWORD(a4), 2);
      ShowWindow(v12, 1);
    }
    return DefWindowProcA(hWnd, Msg, wParam, a4);
  }
  if ( Msg == 6 )
  {
    if ( (_WORD)wParam == 1 || (_WORD)wParam == 2 )
      ShowCursor(1);
    return DefWindowProcA(hWnd, Msg, wParam, a4);
  }
  if ( Msg != 0x4E )
    return DefWindowProcA(hWnd, Msg, wParam, a4);
  v4 = *(_DWORD *)(a4 + 8);
  if ( v4 == 0xFFFFFE64 )
  {
    _memset(v18, 0, sizeof(v18));
    v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
    if ( SendMessageA(*(HWND *)a4, 0x110Au, 9u, 0) )
    {
      v14 = *(HWND *)a4;
      v15 = 4;
      v10(v14, 0x110Cu, 0, (LPARAM)&v15);
      if ( dword_B34F9C )
      {
        if ( dword_B34F9C(v17, 3, *(unsigned __int16 *)(a4 + 0xC), *(_DWORD *)(a4 + 0xE)) )
          return 1;
      }
    }
    return DefWindowProcA(hWnd, Msg, wParam, a4);
  }
  if ( v4 != 0xFFFFFE6E )
  {
    if ( v4 == 0xFFFFFFFB )
    {
      _memset(v18, 0, sizeof(v18));
      v5 = SendMessageA;
      v13 = *(HWND *)a4;
      v18[0] = 0x14;
      v6 = v5(v13, 0x110Au, 8u, v18[1]);
      v7 = (void (__cdecl *)(LPARAM, int, _DWORD, _DWORD))dword_B34F9C;
      v8 = dword_B34F9C == 0;
      v18[1] = v6;
      if ( !v8 )
      {
        v7(v18[9], 2, 0, 0);
        v6 = v18[1];
      }
      if ( !v6 )
      {
        v6 = v5(*(HWND *)a4, 0x110Au, 9u, 0);
        v18[1] = v6;
      }
      v18[0] = 0xD;
      v18[4] = (LPARAM)&unk_B34E98;
      v18[5] = 0x104;
      if ( v6 )
      {
        if ( v5(*(HWND *)a4, 0x110Cu, 0, (LPARAM)v18) )
        {
          v5(*(HWND *)a4, 0x110Bu, 9u, v18[1]);
          if ( (v18[2] & 0x20) != 0 )
          {
            sub_4954F0(*(HWND *)a4, v18[1], 1u);
            v5(*(HWND *)a4, 0x1102u, 1u, v18[1]);
          }
          else
          {
            sub_4954F0(*(HWND *)a4, v18[1], 2u);
            v5(*(HWND *)a4, 0x1102u, 2u, v18[1]);
          }
          return 1;
        }
      }
    }
    return DefWindowProcA(hWnd, Msg, wParam, a4);
  }
  if ( dword_B34F9C )
  {
    dword_B34F9C(*(_DWORD *)(a4 + 0x34), 1, 0, 0);
    if ( dword_B34F9C )
      dword_B34F9C(*(_DWORD *)(a4 + 0x5C), 0, 0, 0);
  }
  return 1;
}
