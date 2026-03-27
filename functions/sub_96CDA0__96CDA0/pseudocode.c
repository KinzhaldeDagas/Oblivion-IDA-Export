float *sub_96CDA0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x14u);
  if ( v0 )
    return sub_96C420(v0, 1.0, (int)&Vector3_InitValue_);
  else
    return 0;
}
