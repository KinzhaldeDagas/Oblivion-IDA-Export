_DWORD *__thiscall sub_5369B0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  for ( result = this; result; result = (_DWORD *)result[1] ) /*0x5369b4*/
  {
    if ( result[3] == a2 ) /*0x5369c3*/
      break; /*0x5369c3*/
  }
  return result; /*0x5369cc*/
}
