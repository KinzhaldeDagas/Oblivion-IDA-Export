float *sub_6FE9F0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x68u); /*0x6fea13*/
  if ( v0 ) /*0x6fea29*/
    return sub_6FE760(v0); /*0x6fea2d*/
  else
    return 0; /*0x6fea42*/
}
