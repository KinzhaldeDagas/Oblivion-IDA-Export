NiDefaultAVObjectPalette *sub_716A40()
{
  NiDefaultAVObjectPalette *v0; // eax

  v0 = (NiDefaultAVObjectPalette *)FormHeapAlloc(0x20u);
  if ( v0 )
    return NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(v0, 0);
  else
    return 0;
}
