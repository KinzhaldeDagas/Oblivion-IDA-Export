_DWORD *__thiscall sub_91E860(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // ecx

  v2 = *(this + 9); /*0x91e864*/
  v3 = this + 0xA; /*0x91e869*/
  *this = &off_A9D8B8; /*0x91e86d*/
  *(this + 2) = &off_A9D8A0; /*0x91e873*/
  *(this + 8) = off_A9D84C; /*0x91e87a*/
  *(this + 0xA) = &off_A9D894; /*0x91e881*/
  if ( v2 ) /*0x91e888*/
  {
    v4 = 0; /*0x91e88d*/
    if ( *(int *)(v2 + 0x60) > 0 ) /*0x91e891*/
    {
      do /*0x91e8ab*/
        sub_898A80(*(int **)(*(_DWORD *)(*(this + 9) + 0x5C) + 4 * v4++), (int)v3); /*0x91e89d*/
      while ( v4 < *(_DWORD *)(*(this + 9) + 0x60) ); /*0x91e8ab*/
    }
  }
  v5 = *(this + 0xC); /*0x91e8ae*/
  if ( v5 > 0 ) /*0x91e8b3*/
  {
    v6 = 0; /*0x91e8b5*/
    do /*0x91e8ca*/
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(this + 0xB) + v6))(v6 + *(this + 0xB), 0); /*0x91e8c1*/
      v6 += 0x80; /*0x91e8c3*/
      --v5; /*0x91e8c9*/
    }
    while ( v5 ); /*0x91e8ca*/
  }
  v7 = *(this + 0xD); /*0x91e8cc*/
  if ( v7 >= 0 ) /*0x91e8d2*/
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91e8e4*/
    if ( !v8 ) /*0x91e8ec*/
      v8 = unk_BA7D9C; /*0x91e8ee*/
    sub_8A75D0(v8, (_DWORD *)*(this + 0xB), v7 << 7, 0x14); /*0x91e903*/
  }
  *v3 = &off_A9D2B4; /*0x91e90c*/
  return sub_949180(this); /*0x91e908*/
}
