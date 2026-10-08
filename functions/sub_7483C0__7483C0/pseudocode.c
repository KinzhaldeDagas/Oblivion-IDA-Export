int __thiscall sub_7483C0(_DWORD *this, signed int a2)
{
  _BYTE *v2; // esi
  int i; // edi
  int (__cdecl *v5)(_DWORD *, _BYTE *, int, signed int *, int); // ecx
  int v6; // eax

  v2 = (_BYTE *)a2; /*0x7483c2*/
  for ( i = 0; *v2; ++i ) /*0x7483c9*/
  {
    v5 = (int (__cdecl *)(_DWORD *, _BYTE *, int, signed int *, int))*(this + 2); /*0x7483d0*/
    a2 = 1; /*0x7483de*/
    v6 = v5(this, v2++, 1, &a2, 1); /*0x7483e6*/
    if ( v6 != 1 ) /*0x7483f1*/
      break; /*0x7483f1*/
  }
  return i; /*0x7483fc*/
}
