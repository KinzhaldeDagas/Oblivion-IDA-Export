float *sub_96CDA0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x14u); /*0x96cda2*/
  if ( v0 ) /*0x96cdac*/
    return sub_96C420(v0, 1.0, (int)&g_zeroNiPoint3); /*0x96cdbb*/
  else
    return 0; /*0x96cdc1*/
}
