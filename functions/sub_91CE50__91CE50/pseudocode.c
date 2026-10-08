_DWORD *__thiscall sub_91CE50(char *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // ecx

  v2 = *((_DWORD *)this + 9); /*0x91ce53*/
  *(_DWORD *)this = &off_A9D708; /*0x91ce58*/
  *((_DWORD *)this + 2) = &off_A9D6F0; /*0x91ce5e*/
  *((_DWORD *)this + 8) = off_A9D6E8; /*0x91ce65*/
  *((_DWORD *)this + 0xA) = off_A9D6D4; /*0x91ce6c*/
  *((_DWORD *)this + 0xB) = &off_A9D6C8; /*0x91ce73*/
  if ( v2 ) /*0x91ce7a*/
  {
    v3 = 0; /*0x91ce80*/
    if ( *(int *)(v2 + 0x60) > 0 ) /*0x91ce84*/
    {
      do /*0x91cea0*/
        sub_91CC30(this, *(int **)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x5C) + 4 * v3++)); /*0x91ce92*/
      while ( v3 < *(_DWORD *)(*((_DWORD *)this + 9) + 0x60) ); /*0x91cea0*/
    }
  }
  v4 = *((_DWORD *)this + 0xE); /*0x91cea3*/
  if ( v4 >= 0 ) /*0x91cea8*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91ceba*/
    if ( !v5 ) /*0x91cec2*/
      v5 = unk_BA7D9C; /*0x91cec4*/
    sub_8A75D0(v5, *((_DWORD **)this + 0xC), 4 * v4, 0x14); /*0x91ced9*/
  }
  *((_DWORD *)this + 0xB) = &off_A9D2B4; /*0x91cede*/
  *((_DWORD *)this + 0xA) = &hkPhantomListener::`vftable'; /*0x91cee5*/
  return sub_949180(this); /*0x91ceee*/
}
