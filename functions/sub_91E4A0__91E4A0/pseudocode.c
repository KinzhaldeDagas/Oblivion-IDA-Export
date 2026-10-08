_DWORD *__thiscall sub_91E4A0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ecx

  v2 = *(this + 9); /*0x91e4a4*/
  v3 = this + 0xA; /*0x91e4a9*/
  *this = &off_A9D86C; /*0x91e4ac*/
  *(this + 2) = &off_A9D854; /*0x91e4b2*/
  *(this + 8) = off_A9D84C; /*0x91e4b9*/
  *(this + 0xA) = &off_A9D840; /*0x91e4c0*/
  if ( v2 ) /*0x91e4c6*/
  {
    v4 = 0; /*0x91e4cc*/
    if ( *(int *)(v2 + 0x60) > 0 ) /*0x91e4d0*/
    {
      do /*0x91e4ea*/
        sub_898A80(*(int **)(*(_DWORD *)(*(this + 9) + 0x5C) + 4 * v4++), (int)v3); /*0x91e4dc*/
      while ( v4 < *(_DWORD *)(*(this + 9) + 0x60) ); /*0x91e4ea*/
    }
  }
  v5 = *(this + 0xD); /*0x91e4ed*/
  if ( v5 >= 0 ) /*0x91e4f2*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91e504*/
    if ( !v6 ) /*0x91e50c*/
      v6 = unk_BA7D9C; /*0x91e50e*/
    sub_8A75D0(v6, (_DWORD *)*(this + 0xB), 4 * v5, 0x14); /*0x91e523*/
  }
  *v3 = &off_A9D2B4; /*0x91e52b*/
  return sub_949180(this); /*0x91e52a*/
}
