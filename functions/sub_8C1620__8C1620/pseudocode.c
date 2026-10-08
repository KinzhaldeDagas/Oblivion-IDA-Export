int __thiscall sub_8C1620(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8c1623*/
  {
    *a2 = 0; /*0x8c16a1*/
    return *(this + 3); /*0x8c16a4*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x8c162b*/
    if ( v3 ) /*0x8c1635*/
    {
      v4 = v3 + 1; /*0x8c1637*/
      v3[1] = 0; /*0x8c163a*/
      v3[3] = 0; /*0x8c1640*/
      v3[4] = 0; /*0x8c1647*/
      v3[2] = 1; /*0x8c164e*/
      *v3 = &hkRagdollConstraintCinfo::`vftable'; /*0x8c1655*/
    }
    else
    {
      v4 = 0; /*0x8c165d*/
    }
    v5 = *(this + 2) == 0; /*0x8c165f*/
    *(this + 3) = v4; /*0x8c1663*/
    if ( !v5 ) /*0x8c1666*/
    {
      if ( v4 ) /*0x8c166a*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8c1672*/
        *a2 = 1; /*0x8c167b*/
        return *(this + 3); /*0x8c1682*/
      }
      sub_8A07E0(this, 0); /*0x8c168a*/
    }
    *a2 = 1; /*0x8c1693*/
    return *(this + 3); /*0x8c1696*/
  }
}
