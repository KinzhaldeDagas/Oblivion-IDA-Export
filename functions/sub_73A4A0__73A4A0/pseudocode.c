NiScreenSpaceCamera *sub_73A4A0()
{
  NiScreenSpaceCamera *v0; // eax

  v0 = (NiScreenSpaceCamera *)FormHeapAlloc(0x144u); /*0x73a4c6*/
  if ( v0 ) /*0x73a4dc*/
    return NiScreenSpaceCamera::NiScreenSpaceCamera(v0); /*0x73a4e0*/
  else
    return 0; /*0x73a4f5*/
}
