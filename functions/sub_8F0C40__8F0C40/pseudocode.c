_DWORD *__thiscall sub_8F0C40(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 4); /*0x8f0c43*/
  *this = &off_A9B198; /*0x8f0c46*/
  if ( *(_WORD *)(v3 + 4) ) /*0x8f0c4c*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x8f0c57*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8f0c62*/
  }
  *this = &hkBaseObject::`vftable'; /*0x8f0c69*/
  if ( (a2 & 1) != 0 ) /*0x8f0c6f*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f0c81*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8f0c86*/
}
