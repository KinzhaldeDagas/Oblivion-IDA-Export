NiLookAtInterpolator *sub_6DFD70()
{
  NiLookAtInterpolator *v0; // eax

  v0 = (NiLookAtInterpolator *)FormHeapAlloc(0x44u);
  if ( v0 )
    return NiLookAtInterpolator::NiLookAtInterpolator(v0, 0, 0, 0);
  else
    return 0;
}
