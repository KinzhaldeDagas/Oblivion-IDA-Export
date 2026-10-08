int __thiscall sub_8B34B0(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8b34b3*/
  {
    *a2 = 0; /*0x8b3531*/
    return *(this + 3); /*0x8b3534*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x8b34bb*/
    if ( v3 ) /*0x8b34c5*/
    {
      v4 = v3 + 1; /*0x8b34c7*/
      v3[1] = 0; /*0x8b34ca*/
      v3[3] = 0; /*0x8b34d0*/
      v3[4] = 0; /*0x8b34d7*/
      v3[2] = 1; /*0x8b34de*/
      *v3 = &hkLimitedHingeConstraintCinfo::`vftable'; /*0x8b34e5*/
    }
    else
    {
      v4 = 0; /*0x8b34ed*/
    }
    v5 = *(this + 2) == 0; /*0x8b34ef*/
    *(this + 3) = v4; /*0x8b34f3*/
    if ( !v5 ) /*0x8b34f6*/
    {
      if ( v4 ) /*0x8b34fa*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8b3502*/
        *a2 = 1; /*0x8b350b*/
        return *(this + 3); /*0x8b3512*/
      }
      sub_8A07E0(this, 0); /*0x8b351a*/
    }
    *a2 = 1; /*0x8b3523*/
    return *(this + 3); /*0x8b3526*/
  }
}
