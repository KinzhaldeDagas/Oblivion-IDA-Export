NiSourceTexture *__cdecl NiSourceCubeMap::Create()
{
  NiSourceTexture *v0; // eax
  NiSourceTexture *v1; // esi

  v0 = (NiSourceTexture *)FormHeapAlloc(0x4Cu); /*0x7208a4*/
  v1 = v0; /*0x7208a9*/
  if ( !v0 ) /*0x7208bc*/
    return 0; /*0x7208e5*/
  NiSourceTexture::NiSourceTexture(v0); /*0x7208c0*/
  v1->vtbl = (NiSourceTextureVtbl *)&NiSourceCubeMap::VTBL; /*0x7208c5*/
  v1[1].vtbl = 0; /*0x7208cb*/
  return v1; /*0x7208d4*/
}
