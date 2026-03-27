void __thiscall sub_7E1710(WaterShaderHeightMap *this)
{
  int v1; // eax
  int i; // edi
  int j; // edi
  Ni2DBuffer **p_Unk0E4; // edi
  Ni2DBuffer *DefaultRenderTarget; // eax
  Ni2DBuffer *v7; // eax
  Ni2DBuffer *v8; // eax
  Ni2DBuffer *v9; // eax

  p_Unk0E4 = (Ni2DBuffer **)&this->Unk0E4;
  if ( !this->Unk0E4 )
  {
    DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 9);
    NiSmartPointer_Set__(p_Unk0E4, DefaultRenderTarget);
  }
  if ( !this->Unk0E0 )
  {
    v7 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0xA);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0E0, v7);
  }
  if ( !this->Unk0D8 )
  {
    v8 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0xB);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0D8, v8);
  }
  if ( !this->Unk0DC )
  {
    v9 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0xC);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0DC, v9);
  }
  this->Unk0F8 = FormHeapAlloc(
                   (unsigned __int64)(unsigned int)(WaterSurfaceResolution + 1) >> 0x1E != 0
                 ? 0xFFFFFFFF
                 : 4 * (WaterSurfaceResolution + 1));
  this->Unk0FC = FormHeapAlloc(
                   (unsigned __int64)(unsigned int)(WaterSurfaceResolution + 1) >> 0x1E != 0
                 ? 0xFFFFFFFF
                 : 4 * (WaterSurfaceResolution + 1));
  v1 = WaterSurfaceResolution + 1;
  for ( i = 0; i < v1; v1 = WaterSurfaceResolution + 1 )
  {
    *(_DWORD *)(this->Unk0F8 + 4 * i) = FormHeapAlloc((unsigned __int64)(unsigned int)v1 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v1);
    *(_DWORD *)(this->Unk0FC + 4 * i++) = FormHeapAlloc(
                                            (unsigned __int64)(unsigned int)(WaterSurfaceResolution + 1) >> 0x1E != 0
                                          ? 0xFFFFFFFF
                                          : 4 * (WaterSurfaceResolution + 1));
  }
  sub_7E0840(this);
  sub_7E0270(this, WaterSurfaceResolution, *(float *)&widthStaticSquareForSomeSurface2log2__);
  for ( j = 0; j < WaterSurfaceResolution + 1; ++j )
  {
    FormHeapFree(*(_DWORD *)(this->Unk0F8 + 4 * j));
    FormHeapFree(*(_DWORD *)(this->Unk0FC + 4 * j));
  }
  FormHeapFree(this->Unk0F8);
  FormHeapFree(this->Unk0FC);
  this->Unk0F8 = 0;
  this->Unk0FC = 0;
  LOBYTE(this->Unk108) = 1;
}
