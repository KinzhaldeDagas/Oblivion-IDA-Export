int __thiscall NiTStringMap_KeyToHashIndex(_DWORD *this, _BYTE *a2)
{
  _BYTE *v2; // esi
  char v3; // dl
  unsigned int i; // eax
  int v5; // edi
  int v6; // eax

  v2 = a2; /*0x7daed1*/
  v3 = *a2; /*0x7daed5*/
  for ( i = 0; v3; i = v5 + v6 ) /*0x7daed5*/
  {
    v5 = 0x21 * i; /*0x7daee5*/
    v6 = v3; /*0x7daee7*/
    v3 = *++v2; /*0x7daeea*/
  }
  return i % *(this + 1); /*0x7daefc*/
}
