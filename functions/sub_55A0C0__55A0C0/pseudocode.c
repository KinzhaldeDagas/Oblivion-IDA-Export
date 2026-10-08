_DWORD *__thiscall sub_55A0C0(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  __int64 v4; // rax

  v3 = 0; /*0x55a0ec*/
  *this = &BSFaceGenMorphDifferential::`vftable'; /*0x55a0f4*/
  *(this + 2) = a2; /*0x55a0fa*/
  if ( a2 ) /*0x55a0fd*/
  {
    v4 = 0xCLL * a2; /*0x55a104*/
    LOBYTE(v3) = HIDWORD(v4) != 0; /*0x55a106*/
    *(this + 1) = FormHeapAlloc(v4 | -v3); /*0x55a113*/
  }
  else
  {
    *(this + 1) = 0; /*0x55a12e*/
  }
  return this; /*0x55a11b*/
}
