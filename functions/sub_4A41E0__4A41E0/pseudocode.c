// Verified: lazily builds a 64x64 NiPixelData with per-channel random values, wraps it as NiTexturingProperty, holds a refcounted global property, and sets clamp mode.
int TESRegion_CreateFallbackCanopyShadowTexture()
{
  int result; // eax
  NiPixelData *v1; // ebx
  NiPixelData *v2; // eax
  _BYTE *v3; // esi
  int v4; // ebp
  int v5; // edi
  NiObjectNET *v6; // eax
  NiObjectNET *v7; // esi
  volatile LONG *v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // edi

  result = g_FallbackCanopyShadowTextureProperty; /*0x4a4207*/
  v1 = 0; /*0x4a420c*/
  if ( !g_FallbackCanopyShadowTextureProperty ) /*0x4a4207*/
  {
    v2 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x4a4218*/
    if ( v2 ) /*0x4a422a*/
      v1 = NiPixelData::NiPixelData(v2, 0x40u, 0x40u, (int)&unk_B25E00, 1u, 1); /*0x4a4240*/
    v3 = (_BYTE *)(*((_DWORD *)v1 + 0x14) + **((_DWORD **)v1 + 0x17) + 2); /*0x4a4252*/
    v4 = 0x40; /*0x4a4255*/
    do /*0x4a433f*/
    {
      v5 = 0x40; /*0x4a425a*/
      do /*0x4a4336*/
      {
        v3[0xFFFFFFFE] = (int)Rand5(flt_A40098); /*0x4a428d*/
        v3[0xFFFFFFFF] = (int)Rand5(flt_A40098); /*0x4a42c0*/
        *v3 = (int)Rand5(flt_A40098); /*0x4a42f3*/
        v3 += 4; /*0x4a431c*/
        --v5; /*0x4a431f*/
        v3[0xFFFFFFFD] = (int)Rand5(flt_A40098); /*0x4a432f*/
      }
      while ( v5 ); /*0x4a4336*/
      --v4; /*0x4a433c*/
    }
    while ( v4 ); /*0x4a433f*/
    ++*((_DWORD *)v1 + 0x1A); /*0x4a434a*/
    v6 = (NiObjectNET *)FormHeapAlloc(0x30u); /*0x4a434f*/
    if ( v6 ) /*0x4a4361*/
      v7 = NiTexturingProperty_CreateFromSourceTexture(v6, (NiSourceTexture *)v1); /*0x4a436b*/
    else
      v7 = 0; /*0x4a436f*/
    v8 = (volatile LONG *)g_FallbackCanopyShadowTextureProperty; /*0x4a4371*/
    if ( (NiObjectNET *)g_FallbackCanopyShadowTextureProperty != v7 ) /*0x4a4381*/
    {
      if ( v8 ) /*0x4a4385*/
      {
        v9 = (void (__thiscall ***)(_DWORD, int))g_FallbackCanopyShadowTextureProperty; /*0x4a4387*/
        if ( !InterlockedDecrement(v8 + 1) ) /*0x4a438d*/
          (**v9)(v9, 1); /*0x4a43a2*/
      }
      v8 = (volatile LONG *)v7; /*0x4a43a6*/
      g_FallbackCanopyShadowTextureProperty = (int)v7; /*0x4a43a8*/
      if ( v7 ) /*0x4a43ae*/
      {
        InterlockedIncrement((volatile LONG *)&v7->members); /*0x4a43b4*/
        v8 = (volatile LONG *)g_FallbackCanopyShadowTextureProperty; /*0x4a43ba*/
      }
    }
    OB_NiTexturingProperty_SetClampMode_010201A0((void *)v8, 0); /*0x4a43c2*/
    return g_FallbackCanopyShadowTextureProperty; /*0x4a43c7*/
  }
  return result; /*0x4a43cc*/
}
