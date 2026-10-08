_DWORD *__thiscall sub_8E8AE0(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 3); /*0x8e8ae3*/
  *this = &off_A9ACB0; /*0x8e8ae6*/
  if ( *(_WORD *)(v3 + 4) ) /*0x8e8aec*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x8e8af7*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8e8b02*/
  }
  *this = &hkBaseObject::`vftable'; /*0x8e8b09*/
  if ( (a2 & 1) != 0 ) /*0x8e8b0f*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8e8b21*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8e8b26*/
}
