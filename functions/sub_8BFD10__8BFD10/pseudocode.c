int __thiscall sub_8BFD10(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8bfd13*/
  {
    *a2 = 0; /*0x8bfd91*/
    return *(this + 3); /*0x8bfd94*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x8bfd1b*/
    if ( v3 ) /*0x8bfd25*/
    {
      v4 = v3 + 1; /*0x8bfd27*/
      v3[1] = 0; /*0x8bfd2a*/
      v3[3] = 0; /*0x8bfd30*/
      v3[4] = 0; /*0x8bfd37*/
      v3[2] = 1; /*0x8bfd3e*/
      *v3 = &hkBreakableConstraintCinfo::`vftable'; /*0x8bfd45*/
    }
    else
    {
      v4 = 0; /*0x8bfd4d*/
    }
    v5 = *(this + 2) == 0; /*0x8bfd4f*/
    *(this + 3) = v4; /*0x8bfd53*/
    if ( !v5 ) /*0x8bfd56*/
    {
      if ( v4 ) /*0x8bfd5a*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8bfd62*/
        *a2 = 1; /*0x8bfd6b*/
        return *(this + 3); /*0x8bfd72*/
      }
      sub_8A07E0(this, 0); /*0x8bfd7a*/
    }
    *a2 = 1; /*0x8bfd83*/
    return *(this + 3); /*0x8bfd86*/
  }
}
