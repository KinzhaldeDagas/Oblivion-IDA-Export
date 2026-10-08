int __thiscall sub_8C2CE0(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8c2ce3*/
  {
    *a2 = 0; /*0x8c2d61*/
    return *(this + 3); /*0x8c2d64*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x8c2ceb*/
    if ( v3 ) /*0x8c2cf5*/
    {
      v4 = v3 + 1; /*0x8c2cf7*/
      v3[1] = 0; /*0x8c2cfa*/
      v3[3] = 0; /*0x8c2d00*/
      v3[4] = 0; /*0x8c2d07*/
      v3[2] = 1; /*0x8c2d0e*/
      *v3 = &hkHingeConstraintCinfo::`vftable'; /*0x8c2d15*/
    }
    else
    {
      v4 = 0; /*0x8c2d1d*/
    }
    v5 = *(this + 2) == 0; /*0x8c2d1f*/
    *(this + 3) = v4; /*0x8c2d23*/
    if ( !v5 ) /*0x8c2d26*/
    {
      if ( v4 ) /*0x8c2d2a*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8c2d32*/
        *a2 = 1; /*0x8c2d3b*/
        return *(this + 3); /*0x8c2d42*/
      }
      sub_8A07E0(this, 0); /*0x8c2d4a*/
    }
    *a2 = 1; /*0x8c2d53*/
    return *(this + 3); /*0x8c2d56*/
  }
}
