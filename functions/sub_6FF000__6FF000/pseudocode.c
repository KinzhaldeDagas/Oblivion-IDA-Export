float *sub_6FF000()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x3Cu);
  if ( v0 )
    return sub_6FEEE0(v0);
  else
    return 0;
}
