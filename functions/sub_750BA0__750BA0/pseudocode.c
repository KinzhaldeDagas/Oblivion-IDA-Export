float *sub_750BA0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x3Cu);
  if ( v0 )
    return sub_750B50(v0);
  else
    return 0;
}
