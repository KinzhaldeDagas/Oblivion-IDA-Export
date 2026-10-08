int __thiscall sub_43E300(_DWORD *this, _BYTE *a2)
{
  _BYTE *v2; // esi
  char v3; // dl
  unsigned int i; // eax
  int v5; // edi
  int v6; // eax

  v2 = a2; /*0x43e301*/
  v3 = *a2; /*0x43e305*/
  for ( i = 0; v3; i = v5 + v6 ) /*0x43e305*/
  {
    v5 = 0x21 * i; /*0x43e315*/
    v6 = v3; /*0x43e317*/
    v3 = *++v2; /*0x43e31a*/
  }
  return i % *(this + 2); /*0x43e32c*/
}
