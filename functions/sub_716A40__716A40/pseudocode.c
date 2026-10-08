NiDefaultAVObjectPalette *sub_716A40()
{
  NiDefaultAVObjectPalette *v0; // eax

  v0 = (NiDefaultAVObjectPalette *)FormHeapAlloc(0x20u); /*0x716a63*/
  if ( v0 ) /*0x716a79*/
    return NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(v0, 0); /*0x716a7f*/
  else
    return 0; /*0x716a94*/
}
