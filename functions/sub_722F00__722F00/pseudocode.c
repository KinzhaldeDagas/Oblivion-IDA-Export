unsigned int __thiscall sub_722F00(_DWORD *this, _BYTE *a2, char a3, bool *a4)
{
  unsigned int result; // eax

  result = sub_707D80(this, a2, a3, a4); /*0x722f14*/
  if ( *(this + 0x2E) ) /*0x722f19*/
  {
    *((_WORD *)this + 0xC) |= 4u; /*0x722f22*/
    *a2 = 1; /*0x722f27*/
    *((_WORD *)this + 0xC) |= 2u; /*0x722f2a*/
    *a4 = 0; /*0x722f2f*/
  }
  return result; /*0x722f32*/
}
