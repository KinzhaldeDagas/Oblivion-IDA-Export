NiLight *sub_73D270()
{
  NiLight *v0; // eax

  v0 = (NiLight *)FormHeapAlloc(0x128u);
  if ( v0 )
    return sub_73D160(v0);
  else
    return 0;
}
