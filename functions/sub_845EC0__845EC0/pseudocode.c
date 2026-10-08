// ShadowLight selector 0x178 consumer. Selects the 0x178 pooled pass, binds the material/base texture, binds the current ShadowSceneLight +0x114 rendered shadow texture into stage 2, appends the pass, and increments PassCount. Sole caller is ShadowLightShader_SetupRenderPass case 0x178.
void __thiscall sub_845EC0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *a5)
{
  NiD3DPass *v6; // esi
  int v7; // eax
  volatile LONG *v8; // ebx
  NiD3DPixelShader *PixelShader; // edi
  UInt32 Stage; // edi
  int v11; // eax
  int v12; // ebx
  UInt32 v13; // ebx
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *v15; // edi
  int v17; // [esp+14h] [ebp-10h]
  int v18; // [esp+30h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B45B80; /*0x845ef8*/
  v17 = **(_DWORD **)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x845f01*/
  sub_848E50(*(float **)(a4 + 0xC)); /*0x845f05*/
  v7 = *(_DWORD *)(a4 + 8); /*0x845f0a*/
  if ( (*(_BYTE *)(v7 + 0x18) & 1) != 0 || (*(_WORD *)(v7 + 0x18) & 0x200) != 0 ) /*0x845f1d*/
  {
    v8 = *(volatile LONG **)(8 * *(_DWORD *)&OB_RendererGlobalState_010201A0[0x217] + 0xB45278); /*0x845f3c*/
    PixelShader = v6->PixelShader; /*0x845f43*/
    if ( PixelShader != (NiD3DPixelShader *)v8 ) /*0x845f48*/
    {
      if ( PixelShader ) /*0x845f4c*/
      {
        if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x845f52*/
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x845f68*/
      }
      v6->PixelShader = (NiD3DPixelShader *)v8; /*0x845f6c*/
      if ( v8 ) /*0x845f6f*/
        InterlockedIncrement(v8 + 1); /*0x845f75*/
    }
  }
  else
  {
    NiD3DPass_SetPixelShader( /*0x845f2f*/
      &v6->__vftable,
      *(NiD3DPixelShader **)(8 * *(_DWORD *)&OB_RendererGlobalState_010201A0[0x217] + 0xB45274));
  }
  Stage = v6->Stages.data->Stage; /*0x845f7e*/
  v11 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))a5->__vftable[1].super.super.DumpAttributes)(a5, 0); /*0x845f8e*/
  v12 = *(_DWORD *)(Stage + 4); /*0x845f90*/
  v18 = v11; /*0x845f95*/
  if ( v12 != v11 ) /*0x845f99*/
  {
    if ( v12 ) /*0x845f9d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x845fa3*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x845fb9*/
      v11 = v18; /*0x845fbb*/
    }
    *(_DWORD *)(Stage + 4) = v11; /*0x845fc1*/
    if ( v11 ) /*0x845fc4*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x845fca*/
  }
  sub_848FA0((_DWORD **)Stage, (int)a5); /*0x845fd8*/
  v13 = v6->Stages.data[2].Stage; /*0x845fea*/
  InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v17 + 0x114)); /*0x845fed*/
  v15 = *(NiRenderedTexture **)(v13 + 4); /*0x845ff2*/
  a5 = InnerTexture; /*0x845ff7*/
  if ( v15 != InnerTexture ) /*0x845ffb*/
  {
    if ( v15 ) /*0x845fff*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->member) ) /*0x846005*/
        v15->__vftable->super.super.super.Destructor((NiRefObject *)v15, 1); /*0x84601b*/
      InnerTexture = a5; /*0x84601d*/
    }
    *(_DWORD *)(v13 + 4) = InnerTexture; /*0x846023*/
    if ( InnerTexture ) /*0x846026*/
      InterlockedIncrement((volatile LONG *)&InnerTexture->member); /*0x84602c*/
  }
  NiD3DTextureStage_ApplyAddressModePreset((_DWORD **)v13, 0); /*0x846036*/
  ++v6->RefCount; /*0x846040*/
  a5 = (NiRenderedTexture *)v6; /*0x846043*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5); /*0x84605b*/
  if ( v6->RefCount-- == 1 ) /*0x846063*/
    NiD3DPass_ReleaseToPool(v6); /*0x84606e*/
  ++*((_DWORD *)this + 0xE); /*0x846073*/
}
