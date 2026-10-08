int __thiscall sub_8C0350(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8c0353*/
  {
    *a2 = 0; /*0x8c03d1*/
    return *(this + 3); /*0x8c03d4*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x8c035b*/
    if ( v3 ) /*0x8c0365*/
    {
      v4 = v3 + 1; /*0x8c0367*/
      v3[1] = 0; /*0x8c036a*/
      v3[3] = 0; /*0x8c0370*/
      v3[4] = 0; /*0x8c0377*/
      v3[2] = 1; /*0x8c037e*/
      *v3 = &hkWheelConstraintCinfo::`vftable'; /*0x8c0385*/
    }
    else
    {
      v4 = 0; /*0x8c038d*/
    }
    v5 = *(this + 2) == 0; /*0x8c038f*/
    *(this + 3) = v4; /*0x8c0393*/
    if ( !v5 ) /*0x8c0396*/
    {
      if ( v4 ) /*0x8c039a*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8c03a2*/
        *a2 = 1; /*0x8c03ab*/
        return *(this + 3); /*0x8c03b2*/
      }
      sub_8A07E0(this, 0); /*0x8c03ba*/
    }
    *a2 = 1; /*0x8c03c3*/
    return *(this + 3); /*0x8c03c6*/
  }
}
