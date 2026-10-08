int __thiscall sub_65DE60(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  if ( this && (v1 = *(this + 2)) != 0 ) /*0x65de69*/
    v2 = *(_DWORD *)(v1 + 0x18); /*0x65de6b*/
  else
    v2 = 0; /*0x65de70*/
  if ( v2 ) /*0x65de74*/
    return *(_DWORD *)(v2 + 0xC); /*0x65de76*/
  else
    return 0; /*0x65de7a*/
}
