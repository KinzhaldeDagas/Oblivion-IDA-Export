_DWORD *__thiscall sub_8F5BC0(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  *((_WORD *)this + 3) = 1; /*0x8f5bce*/
  *this = &off_A9B38C; /*0x8f5bd4*/
  *(this + 2) = a2; /*0x8f5bda*/
  *(this + 3) = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 8))(unk_BA7D98, 0x40, a3, 0x17); /*0x8f5beb*/
  *(this + 4) = 0; /*0x8f5bf3*/
  *(this + 5) = 0; /*0x8f5bf6*/
  *(this + 6) = a3; /*0x8f5bf9*/
  *(this + 7) = 0xFFFFFFFF; /*0x8f5bfc*/
  *(this + 8) = 0xFFFFFFFF; /*0x8f5bff*/
  v4 = *(this + 2); /*0x8f5c02*/
  if ( *(_WORD *)(v4 + 4) ) /*0x8f5c05*/
    ++*(_WORD *)(v4 + 6); /*0x8f5c0b*/
  return this; /*0x8f5c0f*/
}
