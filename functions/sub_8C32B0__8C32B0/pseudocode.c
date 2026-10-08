int __thiscall sub_8C32B0(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8c32b3*/
  {
    *a2 = 0; /*0x8c3331*/
    return *(this + 3); /*0x8c3334*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x8c32bb*/
    if ( v3 ) /*0x8c32c5*/
    {
      v4 = v3 + 1; /*0x8c32c7*/
      v3[1] = 0; /*0x8c32ca*/
      v3[3] = 0; /*0x8c32d0*/
      v3[4] = 0; /*0x8c32d7*/
      v3[2] = 1; /*0x8c32de*/
      *v3 = &hkBallAndSocketConstraintCinfo::`vftable'; /*0x8c32e5*/
    }
    else
    {
      v4 = 0; /*0x8c32ed*/
    }
    v5 = *(this + 2) == 0; /*0x8c32ef*/
    *(this + 3) = v4; /*0x8c32f3*/
    if ( !v5 ) /*0x8c32f6*/
    {
      if ( v4 ) /*0x8c32fa*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8c3302*/
        *a2 = 1; /*0x8c330b*/
        return *(this + 3); /*0x8c3312*/
      }
      sub_8A07E0(this, 0); /*0x8c331a*/
    }
    *a2 = 1; /*0x8c3323*/
    return *(this + 3); /*0x8c3326*/
  }
}
