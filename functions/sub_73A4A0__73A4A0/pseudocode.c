NiScreenSpaceCamera *sub_73A4A0()
{
  NiScreenSpaceCamera *v0; // eax

  v0 = (NiScreenSpaceCamera *)FormHeapAlloc(0x144u);
  if ( v0 )
    return NiScreenSpaceCamera::NiScreenSpaceCamera(v0);
  else
    return 0;
}
