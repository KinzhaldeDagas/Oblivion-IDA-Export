signed int __thiscall sub_8A63A0(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x26); /*0x8a63a1*/
  result = 0; /*0x8a63a7*/
  if ( v2 <= 0 ) /*0x8a63ac*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x25) - 4) = 0; /*0x8a63c4*/
    return 0xFFFFFFFF; /*0x8a63cb*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x25); /*0x8a63ae*/
    while ( *v4 != a2 ) /*0x8a63ba*/
    {
      ++result; /*0x8a63bc*/
      ++v4; /*0x8a63bd*/
      if ( result >= v2 ) /*0x8a63c2*/
        goto LABEL_5; /*0x8a63c2*/
    }
    *(_DWORD *)(*(this + 0x25) + 4 * result) = 0; /*0x8a63e1*/
  }
  return result; /*0x8a63ca*/
}
