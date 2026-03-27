NiPathInterpolator *sub_6DC5E0()
{
  NiPathInterpolator *v0; // eax

  v0 = (NiPathInterpolator *)FormHeapAlloc(0x5Cu);
  if ( v0 )
    return NiPathInterpolator::NiPathInterpolator(v0, 0, 0);
  else
    return 0;
}
