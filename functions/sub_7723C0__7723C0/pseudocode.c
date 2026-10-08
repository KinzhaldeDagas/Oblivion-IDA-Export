_DWORD *sub_7723C0()
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x18u); /*0x7723c2*/
  if ( result ) /*0x7723ce*/
  {
    *result = 0; /*0x7723d5*/
    result[1] = 0; /*0x7723d7*/
    result[2] = 0; /*0x7723da*/
    result[3] = 8; /*0x7723dd*/
    result[4] = 8; /*0x7723e0*/
    result[5] = 0; /*0x7723e3*/
    unk_B4275C = (int)result; /*0x7723e6*/
  }
  else
  {
    unk_B4275C = 0; /*0x7723ec*/
  }
  return result; /*0x7723eb*/
}
