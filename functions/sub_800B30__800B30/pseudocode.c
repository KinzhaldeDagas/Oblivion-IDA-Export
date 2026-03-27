int __cdecl sub_800B30(char a1)
{
  int result; // eax
  Ni2DBuffer *DefaultRenderTarget; // eax

  result = dword_B474AC;
  if ( !dword_B474AC )
  {
    if ( a1 )
    {
      DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, g_Renderer, 0x14);
      NiSmartPointer_Set__((Ni2DBuffer **)&dword_B474AC, DefaultRenderTarget);
      return dword_B474AC;
    }
  }
  return result;
}
