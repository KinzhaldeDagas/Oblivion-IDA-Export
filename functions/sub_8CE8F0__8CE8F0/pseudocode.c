void __thiscall sub_8CE8F0(int this)
{
  int v2; // ebx
  void (__cdecl *v3)(int, int); // ecx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  __int128 v13; // xmm0
  int v14; // eax

  v2 = 0;
  *(float *)(this + 4) = flt_A99DCC;
  *(_DWORD *)(this + 0x14) = 0;
  v3 = (void (__cdecl *)(int, int))dword_BA7A50;
  if ( dword_BA7A50 )
  {
    v4 = 0;
    if ( *(int *)(this + 0x1B4) > 0 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x1A4) + 4 * v4) + 0x30) & 0x3F;
        if ( v5 == 0xE || v5 == 0x10 )
        {
          v6 = *(_DWORD *)(*(_DWORD *)(this + 0x1B0) + 4 * v4);
          if ( v6 )
          {
            if ( v6 == 1 )
              v3(v2 + *(_DWORD *)(this + 0x1BC), 1);
          }
          else
          {
            v3(v2 + *(_DWORD *)(this + 0x1BC), 0);
          }
        }
        ++v4;
        v2 += 0x30;
        if ( v4 >= *(_DWORD *)(this + 0x1B4) )
          break;
        v3 = (void (__cdecl *)(int, int))dword_BA7A50;
      }
    }
  }
  v7 = *(_DWORD *)(this + 0x1B4) - 1;
  if ( v7 >= 0 )
  {
    v8 = 0x30 * v7;
    do
    {
      v9 = (_DWORD *)(*(_DWORD *)(this + 0x1B0) + 4 * v7);
      if ( *v9 == 1 )
      {
        sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(_DWORD *)(this + 0x1A4) + 4 * v7));
        v10 = *(_DWORD *)(this + 0x1A4);
        --*(_DWORD *)(this + 0x1A8);
        *(_DWORD *)(v10 + 4 * v7) = *(_DWORD *)(v10 + 4 * *(_DWORD *)(this + 0x1A8));
        --*(_DWORD *)(this + 0x1C0);
        v11 = *(_DWORD *)(this + 0x1BC);
        v12 = 0x30 * *(_DWORD *)(this + 0x1C0);
        v13 = *(_OWORD *)(v12 + v11);
        v14 = v11 + v12;
        *(_OWORD *)(v8 + v11) = v13;
        *(_OWORD *)(v8 + v11 + 0x10) = *(_OWORD *)(v14 + 0x10);
        *(_DWORD *)(v8 + v11 + 0x20) = *(_DWORD *)(v14 + 0x20);
        *(_DWORD *)(v8 + v11 + 0x24) = *(_DWORD *)(v14 + 0x24);
        *(_DWORD *)(v8 + v11 + 0x28) = *(_DWORD *)(v14 + 0x28);
        *(_DWORD *)(v8 + v11 + 0x2C) = *(_DWORD *)(v14 + 0x2C);
        --*(_DWORD *)(this + 0x1B4);
        *(_DWORD *)(*(_DWORD *)(this + 0x1B0) + 4 * v7) = *(_DWORD *)(*(_DWORD *)(this + 0x1B0)
                                                                    + 4 * *(_DWORD *)(this + 0x1B4));
      }
      else
      {
        *v9 = 1;
      }
      --v7;
      v8 -= 0x30;
    }
    while ( v7 >= 0 );
  }
}
