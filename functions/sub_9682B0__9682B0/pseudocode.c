float *sub_9682B0()
{
  float *v0; // eax

  v0 = (float *)FormHeapAlloc(0x40u);
  if ( v0 )
    return sub_961580(
             v0,
             &flt_B258F4,
             &Vector3_InitValue_,
             (float *)&dword_B258D0,
             (float *)&dword_B258DC,
             (float *)&dword_B258E8);
  else
    return 0;
}
