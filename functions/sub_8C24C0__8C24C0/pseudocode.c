int __thiscall sub_8C24C0(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8c24c3*/
  {
    *a2 = 0; /*0x8c2541*/
    return *(this + 3); /*0x8c2544*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x1Cu); /*0x8c24cb*/
    if ( v3 ) /*0x8c24d5*/
    {
      v4 = v3 + 1; /*0x8c24d7*/
      v3[1] = 0; /*0x8c24da*/
      v3[3] = 0; /*0x8c24e0*/
      v3[4] = 0; /*0x8c24e7*/
      v3[2] = 1; /*0x8c24ee*/
      *v3 = &hkFixedConstraintCinfo::`vftable'; /*0x8c24f5*/
    }
    else
    {
      v4 = 0; /*0x8c24fd*/
    }
    v5 = *(this + 2) == 0; /*0x8c24ff*/
    *(this + 3) = v4; /*0x8c2503*/
    if ( !v5 ) /*0x8c2506*/
    {
      if ( v4 ) /*0x8c250a*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8c2512*/
        *a2 = 1; /*0x8c251b*/
        return *(this + 3); /*0x8c2522*/
      }
      sub_8A07E0(this, 0); /*0x8c252a*/
    }
    *a2 = 1; /*0x8c2533*/
    return *(this + 3); /*0x8c2536*/
  }
}
