int __thiscall sub_52AC30(int *this, char a2)
{
  int *v2; // ecx
  int result; // eax

  v2 = this + 1; /*0x52ac30*/
  if ( !v2 ) /*0x52ac33*/
    return 0; /*0x52ac52*/
  while ( 1 ) /*0x52ac40*/
  {
    result = *v2; /*0x52ac40*/
    if ( *v2 ) /*0x52ac40*/
    {
      if ( *(_BYTE *)(result + 0x60) == a2 ) /*0x52ac49*/
        break; /*0x52ac49*/
    }
    v2 = (int *)v2[1]; /*0x52ac4b*/
    if ( !v2 ) /*0x52ac50*/
      return 0; /*0x52ac50*/
  }
  return result; /*0x52ac54*/
}
