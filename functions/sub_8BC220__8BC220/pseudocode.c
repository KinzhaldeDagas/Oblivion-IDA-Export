_DWORD *__thiscall sub_8BC220(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 2); /*0x8bc223*/
  *this = &off_A98328; /*0x8bc228*/
  if ( v3 ) /*0x8bc22e*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x8bc230*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x8bc23b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8bc246*/
    }
  }
  *this = &hkBaseObject::`vftable'; /*0x8bc24d*/
  if ( (a2 & 1) != 0 ) /*0x8bc253*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8bc265*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x8bc26a*/
}
