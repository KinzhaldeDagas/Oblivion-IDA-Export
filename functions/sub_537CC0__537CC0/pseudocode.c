float *sub_537CC0()
{
  float *result; // eax
  float *v1; // eax

  result = (float *)unk_B3659C; /*0x537ce1*/
  if ( !unk_B3659C ) /*0x537ce1*/
  {
    v1 = (float *)FormHeapAlloc(0x2Cu); /*0x537cec*/
    if ( v1 ) /*0x537d02*/
    {
      result = sub_537830(v1); /*0x537d06*/
      unk_B3659C = (int)result; /*0x537d0b*/
    }
    else
    {
      unk_B3659C = 0; /*0x537d22*/
      return 0; /*0x537d20*/
    }
  }
  return result; /*0x537d10*/
}
