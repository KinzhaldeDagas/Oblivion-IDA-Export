NiParticleMeshesData *sub_740460()
{
  NiParticleMeshesData *v0; // eax
  NiParticleMeshesData *result; // eax

  v0 = (NiParticleMeshesData *)FormHeapAlloc(0x64u);
  if ( v0 )
  {
    result = NiParticleMeshesData::NiParticleMeshesData(v0);
    *((_BYTE *)result + 0x40) = 1;
  }
  else
  {
    *(_BYTE *)0x40 = 1;
    return 0;
  }
  return result;
}
