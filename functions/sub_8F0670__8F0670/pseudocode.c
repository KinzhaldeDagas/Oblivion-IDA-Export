_DWORD *__thiscall sub_8F0670(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 3); /*0x8f0673*/
  *this = &off_A9B120; /*0x8f0676*/
  if ( *(_WORD *)(v3 + 4) ) /*0x8f067c*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x8f0687*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8f0692*/
  }
  *this = &hkBaseObject::`vftable'; /*0x8f0699*/
  if ( (a2 & 1) != 0 ) /*0x8f069f*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f06b1*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8f06b6*/
}
