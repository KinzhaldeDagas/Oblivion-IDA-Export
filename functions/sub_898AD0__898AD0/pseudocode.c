signed int __thiscall sub_898AD0(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x53); /*0x898ad1*/
  result = 0; /*0x898ad7*/
  if ( v2 <= 0 ) /*0x898adc*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x52) - 4) = 0; /*0x898af4*/
    return 0xFFFFFFFF; /*0x898afb*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x52); /*0x898ade*/
    while ( *v4 != a2 ) /*0x898aea*/
    {
      ++result; /*0x898aec*/
      ++v4; /*0x898aed*/
      if ( result >= v2 ) /*0x898af2*/
        goto LABEL_5; /*0x898af2*/
    }
    *(_DWORD *)(*(this + 0x52) + 4 * result) = 0; /*0x898b11*/
  }
  return result; /*0x898afa*/
}
