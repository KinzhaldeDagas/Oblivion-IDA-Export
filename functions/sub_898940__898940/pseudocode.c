signed int __thiscall sub_898940(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x32); /*0x898941*/
  result = 0; /*0x898947*/
  if ( v2 <= 0 ) /*0x89894c*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x31) - 4) = 0; /*0x898964*/
    return 0xFFFFFFFF; /*0x89896b*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x31); /*0x89894e*/
    while ( *v4 != a2 ) /*0x89895a*/
    {
      ++result; /*0x89895c*/
      ++v4; /*0x89895d*/
      if ( result >= v2 ) /*0x898962*/
        goto LABEL_5; /*0x898962*/
    }
    *(_DWORD *)(*(this + 0x31) + 4 * result) = 0; /*0x898981*/
  }
  return result; /*0x89896a*/
}
