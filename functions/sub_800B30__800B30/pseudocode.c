// MoonSugarEffect decode: allocates dword_B474AC refraction render target type 0x14 only when requested and not already present.
int __cdecl sub_800B30(char a1)
{
  int result; // eax
  Ni2DBuffer *DefaultRenderTarget; // eax

  result = unk_B474AC; /*0x800b30*/
  if ( !unk_B474AC ) /*0x800b30*/
  {
    if ( a1 ) /*0x800b3d*/
    {
      DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x800b4d*/
                                            *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                            renderer,
                                            0x14);
      NiSmartPointer_Set__((Ni2DBuffer **)&unk_B474AC, DefaultRenderTarget); /*0x800b58*/
      return unk_B474AC; /*0x800b5d*/
    }
  }
  return result; /*0x800b62*/
}
