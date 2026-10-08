_WORD *__thiscall sub_948D00(_WORD *this, signed int a2)
{
  int v3; // edx
  int v4; // eax

  v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x948d0f*/
  *(this + 3) = 1; /*0x948d12*/
  *((_DWORD *)this + 2) = off_AA2B5C; /*0x948d18*/
  *(_DWORD *)this = &off_AA2B8C; /*0x948d1f*/
  *((_DWORD *)this + 2) = &off_AA2B74; /*0x948d25*/
  v4 = *(_DWORD *)(v3 + 0x19C); /*0x948d2c*/
  if ( !v4 ) /*0x948d38*/
    v4 = unk_BA7D9C; /*0x948d3a*/
  *((_DWORD *)this + 3) = sub_8A7560(v4, a2, 0x14); /*0x948d51*/
  *((_DWORD *)this + 4) = a2; /*0x948d53*/
  *((_DWORD *)this + 5) = a2; /*0x948d56*/
  sub_8B0E10((char **)this + 6, a2); /*0x948d59*/
  *((_DWORD *)this + 4) = 0; /*0x948d81*/
  return this; /*0x948d88*/
}
