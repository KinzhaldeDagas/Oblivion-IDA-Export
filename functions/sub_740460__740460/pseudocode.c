NiParticleMeshesData *sub_740460()
{
  NiParticleMeshesData *v0; // eax
  NiParticleMeshesData *result; // eax

  v0 = (NiParticleMeshesData *)FormHeapAlloc(0x64u); /*0x740483*/
  if ( v0 ) /*0x740499*/
  {
    result = NiParticleMeshesData::NiParticleMeshesData(v0); /*0x74049d*/
    *((_BYTE *)result + 0x40) = 1; /*0x7404a2*/
  }
  else
  {
    *(_BYTE *)0x40 = 1; /*0x7404b8*/
    return 0; /*0x7404b6*/
  }
  return result; /*0x7404a6*/
}
