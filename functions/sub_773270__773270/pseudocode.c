_BYTE *__thiscall sub_773270(_DWORD *this)
{
  _BYTE *result; // eax
  int v2; // esi

  result = this + 0x29; /*0x773271*/
  v2 = 5; /*0x773277*/
  do /*0x77328e*/
  {
    result[0xFFFFFFDC] = 0; /*0x773280*/
    *result = 0; /*0x773283*/
    result[0xC] = 0; /*0x773285*/
    ++result; /*0x773288*/
    --v2; /*0x77328b*/
  }
  while ( v2 ); /*0x77328e*/
  *(this + 0x22) = 0; /*0x773290*/
  *(this + 0x19) = 0; /*0x773296*/
  *(this + 0x2B) = 0; /*0x773299*/
  return result; /*0x77329f*/
}
