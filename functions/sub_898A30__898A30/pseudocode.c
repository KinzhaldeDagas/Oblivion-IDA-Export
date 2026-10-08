signed int __thiscall sub_898A30(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x38); /*0x898a31*/
  result = 0; /*0x898a37*/
  if ( v2 <= 0 ) /*0x898a3c*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x37) - 4) = 0; /*0x898a54*/
    return 0xFFFFFFFF; /*0x898a5b*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x37); /*0x898a3e*/
    while ( *v4 != a2 ) /*0x898a4a*/
    {
      ++result; /*0x898a4c*/
      ++v4; /*0x898a4d*/
      if ( result >= v2 ) /*0x898a52*/
        goto LABEL_5; /*0x898a52*/
    }
    *(_DWORD *)(*(this + 0x37) + 4 * result) = 0; /*0x898a71*/
  }
  return result; /*0x898a5a*/
}
