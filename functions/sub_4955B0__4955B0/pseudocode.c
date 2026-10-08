LRESULT __stdcall sub_4955B0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM a4)
{
  HWND v4; // eax
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

  if ( Msg == 5 ) /*0x4955c8*/
  {
    Window = GetWindow(hWnd, 5); /*0x4957f6*/
    v12 = Window; /*0x4957fc*/
    if ( Window ) /*0x495800*/
    {
      SetWindowPos(Window, 0, 0, 0, (unsigned __int16)a4, HIWORD(a4), 2); /*0x495815*/
      ShowWindow(v12, 1); /*0x49581e*/
    }
    return DefWindowProcA(hWnd, Msg, wParam, a4); /*0x49581e*/
  }
  if ( Msg == 6 ) /*0x4955d1*/
  {
    if ( (_WORD)wParam == 1 || (_WORD)wParam == 2 ) /*0x4957e7*/
      ShowCursor(1); /*0x4957eb*/
    return DefWindowProcA(hWnd, Msg, wParam, a4); /*0x4957f1*/
  }
  if ( Msg != 0x4E ) /*0x4955da*/
    return DefWindowProcA(hWnd, Msg, wParam, a4); /*0x49582c*/
  v4 = *(HWND *)(a4 + 8); /*0x4955e0*/
  if ( v4 == (HWND)0xFFFFFE64 ) /*0x4955e8*/
  {
    _memset((int)v18, 0, sizeof(v18)); /*0x495766*/
    v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x49576d*/
    if ( SendMessageA(*(HWND *)a4, 0x110Au, 9u, 0) ) /*0x495780*/
    {
      v14 = *(HWND *)a4; /*0x49579c*/
      v15 = 4; /*0x49579d*/
      v10(v14, 0x110Cu, 0, (LPARAM)&v15); /*0x4957a5*/
      if ( *(_DWORD *)&MEMORY[0xB33E90][0x110C] ) /*0x4957a7*/
      {
        if ( (*(int (__cdecl **)(int, int, _DWORD, _DWORD))&MEMORY[0xB33E90][0x110C])( /*0x4957c1*/
               v17,
               3,
               *(unsigned __int16 *)(a4 + 0xC),
               *(_DWORD *)(a4 + 0xE)) )
        {
          return 1; /*0x4957d6*/
        }
      }
    }
    return DefWindowProcA(hWnd, Msg, wParam, a4); /*0x4957c8*/
  }
  if ( v4 != (HWND)0xFFFFFE6E ) /*0x4955f3*/
  {
    if ( v4 == (HWND)0xFFFFFFFB ) /*0x4955fc*/
    {
      _memset((int)v18, 0, sizeof(v18)); /*0x49560b*/
      v5 = SendMessageA; /*0x495616*/
      v13 = *(HWND *)a4; /*0x495627*/
      v18[0] = 0x14; /*0x495628*/
      v6 = v5(v13, 0x110Au, 8u, v18[1]); /*0x495630*/
      v7 = *(void (__cdecl **)(LPARAM, int, _DWORD, _DWORD))&MEMORY[0xB33E90][0x110C]; /*0x495632*/
      v8 = *(_DWORD *)&MEMORY[0xB33E90][0x110C] == 0; /*0x495638*/
      v18[1] = v6; /*0x49563a*/
      if ( !v8 ) /*0x49563e*/
      {
        v7(v18[9], 2, 0, 0); /*0x49564b*/
        v6 = v18[1]; /*0x49564d*/
      }
      if ( !v6 ) /*0x495656*/
      {
        v6 = v5(*(HWND *)a4, 0x110Au, 9u, 0); /*0x495663*/
        v18[1] = v6; /*0x495665*/
      }
      v18[0] = 0xD; /*0x49566b*/
      v18[4] = (LPARAM)&MEMORY[0xB33E90][0x1008]; /*0x495673*/
      v18[5] = 0x104; /*0x49567b*/
      if ( v6 ) /*0x495683*/
      {
        if ( v5(*(HWND *)a4, 0x110Cu, 0, (LPARAM)v18) ) /*0x495698*/
        {
          v5(*(HWND *)a4, 0x110Bu, 9u, v18[1]); /*0x4956b1*/
          if ( (v18[2] & 0x20) != 0 ) /*0x4956b8*/
          {
            sub_4954F0(*(HWND *)a4, v18[1], 1u); /*0x4956c4*/
            v5(*(HWND *)a4, 0x1102u, 1u, v18[1]); /*0x4956db*/
          }
          else
          {
            sub_4954F0(*(HWND *)a4, v18[1], 2u); /*0x4956f6*/
            v5(*(HWND *)a4, 0x1102u, 2u, v18[1]); /*0x49570d*/
          }
          return 1; /*0x4956e9*/
        }
      }
    }
    return DefWindowProcA(hWnd, Msg, wParam, a4); /*0x49569c*/
  }
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x110C] ) /*0x49571e*/
  {
    (*(void (__cdecl **)(HWND, int, _DWORD, _DWORD))&MEMORY[0xB33E90][0x110C])(*(HWND *)(a4 + 0x34), 1, 0, 0); /*0x495731*/
    if ( *(_DWORD *)&MEMORY[0xB33E90][0x110C] ) /*0x495733*/
      (*(void (__cdecl **)(HWND, _DWORD, _DWORD, _DWORD))&MEMORY[0xB33E90][0x110C])(*(HWND *)(a4 + 0x5C), 0, 0, 0); /*0x495749*/
  }
  return 1; /*0x4956dd*/
}
