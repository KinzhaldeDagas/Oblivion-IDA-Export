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

  p_Unk0E4 = (Ni2DBuffer **)&this->Unk0E4; /*0x7e171b*/
  if ( !this->Unk0E4 ) /*0x7e1713*/
  {
    DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7e1731*/
                                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                          unk_B43104,
                                          9);
    NiSmartPointer_Set__(p_Unk0E4, DefaultRenderTarget); /*0x7e1739*/
  }
  if ( !this->Unk0E0 ) /*0x7e173e*/
  {
    v7 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7e175c*/
                         *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                         unk_B43104,
                         0xA);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0E0, v7); /*0x7e1764*/
  }
  if ( !this->Unk0D8 ) /*0x7e1769*/
  {
    v8 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7e1787*/
                         *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                         unk_B43104,
                         0xB);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0D8, v8); /*0x7e178f*/
  }
  if ( !this->Unk0DC ) /*0x7e1794*/
  {
    v9 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7e17b1*/
                         *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                         unk_B43104,
                         0xC);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0DC, v9); /*0x7e17b9*/
  }
  this->Unk0F8 = FormHeapAlloc(
                   (unsigned __int64)(unsigned int)(LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1) >> 0x1E != 0
                 ? 0xFFFFFFFF
                 : 4 * (LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1));
  this->Unk0FC = FormHeapAlloc(
                   (unsigned __int64)(unsigned int)(LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1) >> 0x1E != 0
                 ? 0xFFFFFFFF
                 : 4 * (LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1));
  v1 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1; /*0x7e1611*/
  for ( i = 0; i < v1; v1 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1 )
  {
    *(_DWORD *)(this->Unk0F8 + 4 * i) = FormHeapAlloc((unsigned __int64)(unsigned int)v1 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v1);
    *(_DWORD *)(this->Unk0FC + 4 * i++) = FormHeapAlloc(
                                            (unsigned __int64)(unsigned int)(LODWORD(OB_ShaderConstantStorage_010201A0[0x6D])
                                                                           + 1) >> 0x1E != 0
                                          ? 0xFFFFFFFF
                                          : 4 * (LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1));
  }
  sub_7E0840(this); /*0x7e167a*/
  sub_7E0270(this, LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]), OB_ShaderConstantStorage_010201A0[0x6E]); /*0x7e168e*/
  for ( j = 0; j < LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1; ++j ) /*0x7e16a0*/
  {
    FormHeapFree(*(_DWORD *)(this->Unk0F8 + 4 * j)); /*0x7e16ac*/
    FormHeapFree(*(_DWORD *)(this->Unk0FC + 4 * j)); /*0x7e16bb*/
  }
  FormHeapFree(this->Unk0F8); /*0x7e16d9*/
  FormHeapFree(this->Unk0FC); /*0x7e16e5*/
  this->Unk0F8 = 0; /*0x7e16ee*/
  this->Unk0FC = 0; /*0x7e16f8*/
  LOBYTE(this->Unk108) = 1; /*0x7e1702*/
}
