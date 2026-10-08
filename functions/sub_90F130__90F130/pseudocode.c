int __thiscall sub_90F130(_DWORD *this)
{
  int v2; // ecx
  int i; // edi
  int v4; // ecx
  int result; // eax
  int v6; // ecx

  v2 = *(this + 2); /*0x90f133*/
  *this = &off_A9CAA8; /*0x90f138*/
  if ( v2 ) /*0x90f13e*/
  {
    if ( *(_WORD *)(v2 + 4) ) /*0x90f140*/
    {
      if ( !--*(_WORD *)(v2 + 6) ) /*0x90f14b*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x90f156*/
    }
  }
  for ( i = 0; i < *(this + 4); ++i ) /*0x90f160*/
  {
    v4 = *(_DWORD *)(*(this + 3) + 4 * i); /*0x90f165*/
    if ( *(_WORD *)(v4 + 4) ) /*0x90f168*/
    {
      if ( !--*(_WORD *)(v4 + 6) ) /*0x90f173*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x90f17e*/
    }
  }
  result = *(this + 5); /*0x90f188*/
  if ( result >= 0 ) /*0x90f18e*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x90f1a0*/
    if ( !v6 ) /*0x90f1a8*/
      v6 = unk_BA7D9C; /*0x90f1aa*/
    result = sub_8A75D0(v6, (_DWORD *)*(this + 3), 4 * result, 0x14); /*0x90f1bf*/
  }
  *this = &hkBaseObject::`vftable'; /*0x90f1c4*/
  return result; /*0x90f1ca*/
}
