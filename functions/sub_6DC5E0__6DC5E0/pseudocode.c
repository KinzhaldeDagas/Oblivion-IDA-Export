NiPathInterpolator *sub_6DC5E0()
{
  NiPathInterpolator *v0; // eax

  v0 = (NiPathInterpolator *)FormHeapAlloc(0x5Cu); /*0x6dc603*/
  if ( v0 ) /*0x6dc619*/
    return NiPathInterpolator::NiPathInterpolator(v0, 0, 0); /*0x6dc621*/
  else
    return 0; /*0x6dc636*/
}
