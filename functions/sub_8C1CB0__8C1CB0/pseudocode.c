int __thiscall sub_8C1CB0(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x8c1cb3*/
  {
    *a2 = 0; /*0x8c1d31*/
    return *(this + 3); /*0x8c1d34*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x8c1cbb*/
    if ( v3 ) /*0x8c1cc5*/
    {
      v4 = v3 + 1; /*0x8c1cc7*/
      v3[1] = 0; /*0x8c1cca*/
      v3[3] = 0; /*0x8c1cd0*/
      v3[4] = 0; /*0x8c1cd7*/
      v3[2] = 1; /*0x8c1cde*/
      *v3 = &hkPrismaticConstraintCinfo::`vftable'; /*0x8c1ce5*/
    }
    else
    {
      v4 = 0; /*0x8c1ced*/
    }
    v5 = *(this + 2) == 0; /*0x8c1cef*/
    *(this + 3) = v4; /*0x8c1cf3*/
    if ( !v5 ) /*0x8c1cf6*/
    {
      if ( v4 ) /*0x8c1cfa*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x8c1d02*/
        *a2 = 1; /*0x8c1d0b*/
        return *(this + 3); /*0x8c1d12*/
      }
      sub_8A07E0(this, 0); /*0x8c1d1a*/
    }
    *a2 = 1; /*0x8c1d23*/
    return *(this + 3); /*0x8c1d26*/
  }
}
