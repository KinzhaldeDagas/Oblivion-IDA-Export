NiSurfaceData *__cdecl CreateSurfaceData(D3DFORMAT a1)
{
  NiSurfaceData *v1; // eax
  NiSurfaceData *inited; // esi

  v1 = (NiSurfaceData *)FormHeapAlloc(0x44u);
  if ( v1 )
  {
    inited = InitSurfacEData(v1);
    D3DFMTToTextureFormat(a1, inited);
    return inited;
  }
  else
  {
    D3DFMTToTextureFormat(a1, 0);
    return 0;
  }
}
