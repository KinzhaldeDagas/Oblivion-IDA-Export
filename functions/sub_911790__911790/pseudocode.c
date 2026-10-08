_DWORD *__thiscall sub_911790(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 3); /*0x911793*/
  *this = &off_A9CCFC; /*0x911798*/
  if ( v3 ) /*0x91179e*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x9117a0*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x9117ab*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x9117b6*/
    }
  }
  *this = &hkBaseObject::`vftable'; /*0x9117bd*/
  if ( (a2 & 1) != 0 ) /*0x9117c3*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9117d5*/
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this; /*0x9117da*/
}
