float *sub_6CE690()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x58u);
  if ( v0 )
    return sub_6CE4C0(v0);
  else
    return 0;
}
