NiLookAtInterpolator *sub_6DFD70()
{
  NiLookAtInterpolator *v0; // eax

  v0 = (NiLookAtInterpolator *)FormHeapAlloc(0x44u); /*0x6dfd93*/
  if ( v0 ) /*0x6dfda9*/
    return NiLookAtInterpolator::NiLookAtInterpolator(v0, 0, 0, 0); /*0x6dfdb3*/
  else
    return 0; /*0x6dfdc8*/
}
