_DWORD *sub_7734A0()
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x18u); /*0x7734a2*/
  if ( result ) /*0x7734ae*/
  {
    *result = 0; /*0x7734b5*/
    result[1] = 0; /*0x7734b7*/
    result[2] = 0; /*0x7734ba*/
    result[3] = 8; /*0x7734bd*/
    result[4] = 8; /*0x7734c0*/
    result[5] = 0; /*0x7734c3*/
    unk_B42838 = (int)result; /*0x7734c6*/
  }
  else
  {
    unk_B42838 = 0; /*0x7734cc*/
  }
  return result; /*0x7734cb*/
}
