void __thiscall sub_88A3A0(unsigned int *this)
{
  unsigned int v2; // eax
  int *v3; // ebx
  unsigned int i; // edi
  int v5; // eax
  bool v6; // zf
  int *v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx

  v2 = *(this + 0xF); /*0x88a3a3*/
  if ( v2 ) /*0x88a3a8*/
  {
    if ( v2 >= 0x64 ) /*0x88a3b1*/
      *(this + 0xF) = 0x64; /*0x88a3b3*/
    v3 = (int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this); /*0x88a3c2*/
    if ( v3 ) /*0x88a3c6*/
    {
      for ( i = 0; i < *(this + 0xF); ++i ) /*0x88a3cb*/
      {
        v5 = *(this + 0xE); /*0x88a3d0*/
        v6 = *(_DWORD *)(v5 + 4 * i) == 0; /*0x88a3d3*/
        v7 = (int *)(v5 + 4 * i); /*0x88a3d7*/
        if ( !v6 ) /*0x88a3da*/
        {
          v8 = *v7; /*0x88a3dc*/
          if ( *(_DWORD *)(v8 + 8) ) /*0x88a3de*/
            sub_89CCC0(v3, v8); /*0x88a3e7*/
        }
        v9 = *(this + 0xE) + 4 * i; /*0x88a3f3*/
        if ( *(_DWORD *)v9 ) /*0x88a3ef*/
        {
          v10 = *(_DWORD *)v9; /*0x88a3f8*/
          if ( *(_WORD *)(*(_DWORD *)v9 + 4) ) /*0x88a3fa*/
          {
            if ( !--*(_WORD *)(v10 + 6) ) /*0x88a406*/
              (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x88a415*/
          }
        }
      }
      _memset(*(this + 0xE), 0, 4 * *(this + 0xF)); /*0x88a42d*/
      *(this + 0xF) = 0; /*0x88a435*/
    }
  }
}
