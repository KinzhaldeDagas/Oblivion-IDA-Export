NiSourceTexture *__cdecl NiSourceCubeMap::Create()
{
  NiSourceTexture *v0; // eax
  NiSourceTexture *v1; // esi

  v0 = (NiSourceTexture *)FormHeapAlloc(0x4Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiSourceTexture::NiSourceTexture(v0);
  v1->vtbl = (NiSourceTextureVtbl *)&NiSourceCubeMap::VTBL;
  v1[1].vtbl = 0;
  return v1;
}
