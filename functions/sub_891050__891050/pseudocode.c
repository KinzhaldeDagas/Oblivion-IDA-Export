int __thiscall sub_891050(int *this, _BYTE *a2)
{
  hkVector4 *v3; // eax
  hkVector4 *v4; // eax
  bool v5; // zf

  if ( *(this + 3) ) /*0x891074*/
  {
    *a2 = 0; /*0x8910ca*/
  }
  else
  {
    v3 = (hkVector4 *)FormHeapAlloc(0xB0u); /*0x89107f*/
    if ( v3 ) /*0x891095*/
      v4 = sub_890C00(v3, 1); /*0x89109b*/
    else
      v4 = 0; /*0x8910a2*/
    v5 = *(this + 2) == 0; /*0x8910a4*/
    *(this + 3) = (int)v4; /*0x8910b0*/
    if ( !v5 ) /*0x8910b3*/
      sub_8B9A00(this, (int)v4); /*0x8910b8*/
    *a2 = 1; /*0x8910c1*/
  }
  return *(this + 3); /*0x8910d0*/
}
