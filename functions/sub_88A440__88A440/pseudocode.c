void __thiscall sub_88A440(unsigned int *this)
{
  unsigned int v2; // eax
  int *v3; // ebx
  unsigned int i; // edi
  int v5; // eax
  bool v6; // zf
  int *v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  char v10; // [esp+7h] [ebp-1h] BYREF

  v2 = *(this + 0x11); /*0x88a444*/
  if ( v2 ) /*0x88a449*/
  {
    if ( v2 >= 0xC8 ) /*0x88a454*/
      *(this + 0x11) = 0xC8; /*0x88a456*/
    v3 = (int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this); /*0x88a465*/
    if ( v3 ) /*0x88a469*/
    {
      for ( i = 0; i < *(this + 0x11); ++i ) /*0x88a46e*/
      {
        v5 = *(this + 0x10); /*0x88a473*/
        v6 = *(_DWORD *)(v5 + 4 * i) == 0; /*0x88a476*/
        v7 = (int *)(v5 + 4 * i); /*0x88a47a*/
        if ( !v6 ) /*0x88a47d*/
        {
          if ( *(_DWORD *)(*v7 + 8) ) /*0x88a481*/
            sub_8988F0(v3, &v10, *v7); /*0x88a491*/
        }
        v8 = *(this + 0x10) + 4 * i; /*0x88a49d*/
        if ( *(_DWORD *)v8 ) /*0x88a499*/
        {
          v9 = *(_DWORD *)v8; /*0x88a4a2*/
          if ( *(_WORD *)(*(_DWORD *)v8 + 4) ) /*0x88a4a4*/
          {
            if ( !--*(_WORD *)(v9 + 6) ) /*0x88a4b0*/
              (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x88a4bf*/
          }
        }
      }
      _memset(*(this + 0x10), 0, 4 * *(this + 0x11)); /*0x88a4d7*/
      *(this + 0x11) = 0; /*0x88a4df*/
    }
  }
}
