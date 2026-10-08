_WORD *__thiscall sub_65DD30(_WORD *this, unsigned __int16 a2, __int16 a3)
{
  int v4; // ecx
  __int64 v5; // rax

  *(this + 7) = a3; /*0x65dd3c*/
  v4 = 0; /*0x65dd40*/
  *(_DWORD *)this = &NiTArray<TESRegion *>::`vftable'; /*0x65dd45*/
  *((_DWORD *)this + 2) = a2; /*0x65dd4b*/
  *(this + 6) = 0; /*0x65dd53*/
  if ( a2 ) /*0x65dd57*/
  {
    v5 = 4LL * a2; /*0x65dd61*/
    LOBYTE(v4) = HIDWORD(v5) != 0; /*0x65dd63*/
    *((_DWORD *)this + 1) = FormHeapAlloc(v5 | -v4); /*0x65dd70*/
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x65dd7c*/
  }
  return this; /*0x65dd78*/
}
