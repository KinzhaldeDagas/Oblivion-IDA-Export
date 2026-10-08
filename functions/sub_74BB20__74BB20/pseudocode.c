float *sub_74BB20()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x84u); /*0x74bb25*/
  if ( v0 ) /*0x74bb2f*/
    return sub_74ACC0(v0); /*0x74bb33*/
  else
    return 0; /*0x74bb38*/
}
