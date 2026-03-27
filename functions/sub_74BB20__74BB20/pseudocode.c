float *sub_74BB20()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x84u);
  if ( v0 )
    return sub_74ACC0(v0);
  else
    return 0;
}
