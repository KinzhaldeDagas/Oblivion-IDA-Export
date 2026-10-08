_DWORD *sub_739980()
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x18u); /*0x7399a3*/
  if ( result ) /*0x7399af*/
  {
    *result = 0; /*0x7399b6*/
    result[1] = 0; /*0x7399b8*/
    result[2] = 0; /*0x7399bb*/
    result[3] = 8; /*0x7399be*/
    result[4] = 8; /*0x7399c1*/
    result[5] = 0; /*0x7399c4*/
    unk_B40134 = (int)result; /*0x7399c7*/
  }
  else
  {
    unk_B40134 = 0; /*0x7399dc*/
  }
  return result; /*0x7399cc*/
}
