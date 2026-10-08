int __thiscall sub_8BF490(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8bf493*/
  {
    *a2 = 0; /*0x8bf511*/
    return *(this + 3); /*0x8bf514*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x8bf49b*/
    if ( v3 ) /*0x8bf4a5*/
    {
      v4 = v3 + 1; /*0x8bf4a7*/
      v3[1] = 0; /*0x8bf4aa*/
      v3[3] = 0; /*0x8bf4b0*/
      v3[4] = 0; /*0x8bf4b7*/
      v3[2] = 1; /*0x8bf4be*/
      *v3 = &hkMalleableConstraintCinfo::`vftable'; /*0x8bf4c5*/
    }
    else
    {
      v4 = 0; /*0x8bf4cd*/
    }
    v5 = *(this + 2) == 0; /*0x8bf4cf*/
    *(this + 3) = v4; /*0x8bf4d3*/
    if ( !v5 ) /*0x8bf4d6*/
    {
      if ( v4 ) /*0x8bf4da*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8bf4e2*/
        *a2 = 1; /*0x8bf4eb*/
        return *(this + 3); /*0x8bf4f2*/
      }
      sub_8A07E0(this, 0); /*0x8bf4fa*/
    }
    *a2 = 1; /*0x8bf503*/
    return *(this + 3); /*0x8bf506*/
  }
}
