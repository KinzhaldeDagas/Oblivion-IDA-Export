NiSequence *sub_6D84A0()
{
  NiSequence *v0; // eax

  v0 = (NiSequence *)FormHeapAlloc(0x34u);
  if ( v0 )
    return NiSequence::NiSequence(v0, 0, 0xCu, 0xC);
  else
    return 0;
}
