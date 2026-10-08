NiSurfaceData *__cdecl CreateSurfaceData(D3DFORMAT a1)
{
  NiSurfaceData *v1; // eax
  NiSurfaceData *inited; // esi

  v1 = (NiSurfaceData *)FormHeapAlloc(0x44u); /*0x76c6d3*/
  if ( v1 ) /*0x76c6dd*/
  {
    inited = InitSurfacEData(v1); /*0x76c6e6*/
    D3DFMTToTextureFormat(a1, inited); /*0x76c6ee*/
    return inited; /*0x76c6f6*/
  }
  else
  {
    D3DFMTToTextureFormat(a1, 0); /*0x76c702*/
    return 0; /*0x76c70a*/
  }
}
