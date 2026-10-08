float *sub_9682B0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x40u); /*0x9682b2*/
  if ( v0 ) /*0x9682bc*/
    return sub_961580(v0, &flt_B258F4, &g_zeroNiPoint3.x, &stru_B258D0.x, &stru_B258DC.x, &rhs.x); /*0x9682d9*/
  else
    return 0; /*0x9682df*/
}
