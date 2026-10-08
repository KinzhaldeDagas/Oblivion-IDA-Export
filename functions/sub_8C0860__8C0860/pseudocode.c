int __thiscall sub_8C0860(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8c0863*/
  {
    *a2 = 0; /*0x8c08e1*/
    return *(this + 3); /*0x8c08e4*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x8c086b*/
    if ( v3 ) /*0x8c0875*/
    {
      v4 = v3 + 1; /*0x8c0877*/
      v3[1] = 0; /*0x8c087a*/
      v3[3] = 0; /*0x8c0880*/
      v3[4] = 0; /*0x8c0887*/
      v3[2] = 1; /*0x8c088e*/
      *v3 = &hkStiffSpringConstraintCinfo::`vftable'; /*0x8c0895*/
    }
    else
    {
      v4 = 0; /*0x8c089d*/
    }
    v5 = *(this + 2) == 0; /*0x8c089f*/
    *(this + 3) = v4; /*0x8c08a3*/
    if ( !v5 ) /*0x8c08a6*/
    {
      if ( v4 ) /*0x8c08aa*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8c08b2*/
        *a2 = 1; /*0x8c08bb*/
        return *(this + 3); /*0x8c08c2*/
      }
      sub_8A07E0(this, 0); /*0x8c08ca*/
    }
    *a2 = 1; /*0x8c08d3*/
    return *(this + 3); /*0x8c08d6*/
  }
}
