float *sub_6FE9F0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x68u);
  if ( v0 )
    return sub_6FE760(v0);
  else
    return 0;
}
