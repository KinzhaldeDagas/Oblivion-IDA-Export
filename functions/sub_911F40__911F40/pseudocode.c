int __thiscall sub_911F40(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf

  if ( *(this + 3) ) /*0x911f43*/
  {
    *a2 = 0; /*0x911fc1*/
    return *(this + 3); /*0x911fc4*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x911f4b*/
    if ( v3 ) /*0x911f55*/
    {
      v4 = v3 + 1; /*0x911f57*/
      v3[1] = 0; /*0x911f5a*/
      v3[3] = 0; /*0x911f60*/
      v3[4] = 0; /*0x911f67*/
      v3[2] = 1; /*0x911f6e*/
      *v3 = &hkGenericConstraintCinfo::`vftable'; /*0x911f75*/
    }
    else
    {
      v4 = 0; /*0x911f7d*/
    }
    v5 = *(this + 2) == 0; /*0x911f7f*/
    *(this + 3) = v4; /*0x911f83*/
    if ( !v5 ) /*0x911f86*/
    {
      if ( v4 ) /*0x911f8a*/
      {
        sub_8A07E0(this, v4 + 0xFFFFFFFF); /*0x911f92*/
        *a2 = 1; /*0x911f9b*/
        return *(this + 3); /*0x911fa2*/
      }
      sub_8A07E0(this, 0); /*0x911faa*/
    }
    *a2 = 1; /*0x911fb3*/
    return *(this + 3); /*0x911fb6*/
  }
}
