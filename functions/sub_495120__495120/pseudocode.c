void __thiscall sub_495120(HWND *this, LPARAM a2, int *a3)
{
  unsigned int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // edx
  void (__thiscall *v7)(int *, int); // eax
  void (__stdcall *v8)(HWND, UINT, WPARAM, LPARAM); // ebx
  int i; // eax
  int v10; // ecx
  HWND v11; // [esp-10h] [ebp-68h]
  LPARAM lParam[13]; // [esp+18h] [ebp-40h] BYREF
  unsigned int v14; // [esp+54h] [ebp-4h]

  v3 = 0;
  if ( a3 )
  {
    v4 = FormHeapAlloc(0x10u);
    v5 = v4;
    v14 = 0;
    if ( v4 )
    {
      *(_WORD *)(v4 + 8) = 0x80;
      *(_WORD *)(v4 + 0xE) = 0x80;
      *(_DWORD *)v4 = &NiTArray<char *>::`vftable';
      *(_WORD *)(v4 + 0xA) = 0;
      *(_WORD *)(v4 + 0xC) = 0;
      *(_DWORD *)(v4 + 4) = FormHeapAlloc(0x200u);
    }
    else
    {
      v5 = 0;
    }
    v6 = *a3;
    lParam[0] = a2;
    v7 = *(void (__thiscall **)(int *, int))(v6 + 0x30);
    v14 = 0xFFFFFFFF;
    lParam[1] = 0xFFFF0002;
    lParam[2] = 0x27;
    lParam[0xB] = (LPARAM)a3;
    v7(a3, v5);
    if ( *(_WORD *)(v5 + 0xA) )
    {
      v8 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
      do
      {
        lParam[6] = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v3);
        v11 = *(this + 3);
        lParam[8] = 6;
        lParam[9] = 6;
        v8(v11, 0x1100u, 0, (LPARAM)lParam);
        ++v3;
      }
      while ( v3 < *(unsigned __int16 *)(v5 + 0xA) );
    }
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(v5 + 0xA); *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v10) = 0 )
      v10 = (unsigned __int16)i++;
    *(_WORD *)(v5 + 0xA) = 0;
    *(_WORD *)(v5 + 0xC) = 0;
    (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
}
