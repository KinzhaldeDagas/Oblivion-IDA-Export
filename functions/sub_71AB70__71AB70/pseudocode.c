_DWORD *__thiscall sub_71AB70(_BYTE *this, _DWORD **a2)
{
  _DWORD *v3; // eax
  int v4; // esi

  v3 = (_DWORD *)FormHeapAlloc(0x38u); /*0x71ab97*/
  v4 = (int)v3; /*0x71ab9c*/
  if ( v3 ) /*0x71abaf*/
  {
    NiBackToFrontAccumulator_Constructor(v3); /*0x71abb3*/
    *(_DWORD *)v4 = &NiAlphaAccumulator::`vftable'; /*0x71abb8*/
    *(_BYTE *)(v4 + 0x34) = 1; /*0x71abbe*/
    *(_BYTE *)(v4 + 0x35) = 0; /*0x71abc2*/
  }
  else
  {
    v4 = 0; /*0x71abc8*/
  }
  sub_6EC2A0(this, v4, a2); /*0x71abda*/
  *(_BYTE *)(v4 + 0x34) = *(this + 0x34); /*0x71abe2*/
  *(_BYTE *)(v4 + 0x35) = *(this + 0x35); /*0x71abe8*/
  return (_DWORD *)v4; /*0x71abed*/
}
