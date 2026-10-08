float *sub_95F6A0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x20u); /*0x95f6a2*/
  if ( v0 ) /*0x95f6ac*/
    return sub_95F620(v0, &g_zeroNiPoint3.x, &stru_B258DC.x); /*0x95f6ba*/
  else
    return 0; /*0x95f6c0*/
}
