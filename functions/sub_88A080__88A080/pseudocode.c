void __thiscall sub_88A080(unsigned int *this)
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

  v2 = *(this + 0xF); /*0x88a083*/
  if ( v2 ) /*0x88a088*/
  {
    if ( v2 >= 0x64 ) /*0x88a091*/
      *(this + 0xF) = 0x64; /*0x88a093*/
    v3 = (int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this); /*0x88a0a2*/
    if ( v3 ) /*0x88a0a6*/
    {
      for ( i = 0; i < *(this + 0xF); ++i ) /*0x88a0ab*/
      {
        v5 = *(this + 0xE); /*0x88a0b0*/
        v6 = *(_DWORD *)(v5 + 4 * i) == 0; /*0x88a0b3*/
        v7 = (int *)(v5 + 4 * i); /*0x88a0b7*/
        if ( !v6 ) /*0x88a0ba*/
        {
          v8 = *v7; /*0x88a0bc*/
          if ( !*(_DWORD *)(v8 + 8) ) /*0x88a0be*/
            sub_89BAE0(v3, v8); /*0x88a0c7*/
        }
        v9 = *(this + 0xE) + 4 * i; /*0x88a0d3*/
        if ( *(_DWORD *)v9 ) /*0x88a0cf*/
        {
          v10 = *(_DWORD *)v9; /*0x88a0d8*/
          if ( *(_WORD *)(*(_DWORD *)v9 + 4) ) /*0x88a0da*/
          {
            if ( !--*(_WORD *)(v10 + 6) ) /*0x88a0e6*/
              (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x88a0f5*/
          }
        }
      }
      _memset(*(this + 0xE), 0, 4 * *(this + 0xF)); /*0x88a10d*/
      *(this + 0xF) = 0; /*0x88a115*/
    }
  }
}
