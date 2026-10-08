_WORD *__thiscall sub_704130(_WORD *this, int a2, __int16 a3, char a4, char a5, int a6)
{
  __int16 v7; // dx

  *(_DWORD *)this = &NiTexturingProperty::Map::`vftable'; /*0x704139*/
  *(this + 2) = 0; /*0x70413f*/
  *((_DWORD *)this + 2) = a2; /*0x704145*/
  if ( a2 ) /*0x704148*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x70414e*/
  LOBYTE(v7) = 0; /*0x704163*/
  HIBYTE(v7) = a5 | (0x10 * a4); /*0x704165*/
  *((_DWORD *)this + 3) = a6; /*0x704167*/
  *(this + 2) = a3 | *(this + 2) & 0xC000 | v7 & 0xFF00; /*0x704181*/
  return this; /*0x704185*/
}
