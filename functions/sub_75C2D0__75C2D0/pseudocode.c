float *sub_75C2D0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x68u);
  if ( v0 )
    return sub_75C250(v0);
  else
    return 0;
}
