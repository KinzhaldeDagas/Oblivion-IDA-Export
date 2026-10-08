void __stdcall OB_BSShader_RebuildRenderEntryLightConstants_010201A0(
        unsigned int shaderIndex,
        void *renderEntry,
        void *lightingProperty,
        void *previousRenderEntry)
{
  unsigned __int8 i; // bl
  void *v5; // ecx
  float lightingPropertya; // [esp+1Ch] [ebp+Ch]

  lightingPropertya = *((float *)lightingProperty + 0x25);// Tree/LOD light rebuild reads BSShaderLightingProperty+0x94. Base constructor 0x7EE4B8 initializes this dimmer to 1.0; no leaf-specific writer is proven in the draw path. /*0x7f60fc*/
  for ( i = 0; i < *((_BYTE *)renderEntry + 8); ++i ) /*0x7f6106*/
  {
    v5 = *(void **)(*((_DWORD *)renderEntry + 3) + 4 * i); /*0x7f6118*/
    if ( !previousRenderEntry /*0x7f6128*/
      || i >= *((_BYTE *)previousRenderEntry + 8)
      || v5 != *(void **)(*((_DWORD *)previousRenderEntry + 3) + 4 * i) )
    {
      OB_BSShader_DispatchLightConstantUpdate_010201A0(i, v5, lightingPropertya);// Rebuild only present/changed slots. Normal tree callers pass previousRenderEntry=null after reset, so every present slot is rewritten. /*0x7f6134*/
    }
  }
}
