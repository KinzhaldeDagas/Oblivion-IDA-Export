// ShadowLight selector 0x177 consumer. Selects the 0x177 pooled pass, binds the material/base texture, binds the current ShadowSceneLight +0x114 rendered shadow texture into stage 2, appends the pass, and increments PassCount. Sole caller is ShadowLightShader_SetupRenderPass case 0x177.
void __thiscall sub_845CF0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *a5)
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

  v6 = (NiD3DPass *)unk_B45B7C; /*0x845d28*/
  v17 = **(_DWORD **)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x845d31*/
  sub_848E50(*(float **)(a4 + 0xC)); /*0x845d35*/
  v7 = *(_DWORD *)(a4 + 8); /*0x845d3a*/
  if ( (*(_BYTE *)(v7 + 0x18) & 1) != 0 || (*(_WORD *)(v7 + 0x18) & 0x200) != 0 ) /*0x845d4d*/
  {
    v8 = *(volatile LONG **)(8 * *(_DWORD *)&OB_RendererGlobalState_010201A0[0x217] + 0xB45278); /*0x845d6c*/
    PixelShader = v6->PixelShader; /*0x845d73*/
    if ( PixelShader != (NiD3DPixelShader *)v8 ) /*0x845d78*/
    {
      if ( PixelShader ) /*0x845d7c*/
      {
        if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x845d82*/
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x845d98*/
      }
      v6->PixelShader = (NiD3DPixelShader *)v8; /*0x845d9c*/
      if ( v8 ) /*0x845d9f*/
        InterlockedIncrement(v8 + 1); /*0x845da5*/
    }
  }
  else
  {
    NiD3DPass_SetPixelShader( /*0x845d5f*/
      &v6->__vftable,
      *(NiD3DPixelShader **)(8 * *(_DWORD *)&OB_RendererGlobalState_010201A0[0x217] + 0xB45274));
  }
  Stage = v6->Stages.data->Stage; /*0x845dae*/
  v11 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))a5->__vftable[1].super.super.DumpAttributes)(a5, 0); /*0x845dbe*/
  v12 = *(_DWORD *)(Stage + 4); /*0x845dc0*/
  v18 = v11; /*0x845dc5*/
  if ( v12 != v11 ) /*0x845dc9*/
  {
    if ( v12 ) /*0x845dcd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x845dd3*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x845de9*/
      v11 = v18; /*0x845deb*/
    }
    *(_DWORD *)(Stage + 4) = v11; /*0x845df1*/
    if ( v11 ) /*0x845df4*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x845dfa*/
  }
  sub_848FA0((_DWORD **)Stage, (int)a5); /*0x845e08*/
  v13 = v6->Stages.data[2].Stage; /*0x845e1a*/
  InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v17 + 0x114)); /*0x845e1d*/
  v15 = *(NiRenderedTexture **)(v13 + 4); /*0x845e22*/
  a5 = InnerTexture; /*0x845e27*/
  if ( v15 != InnerTexture ) /*0x845e2b*/
  {
    if ( v15 ) /*0x845e2f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->member) ) /*0x845e35*/
        v15->__vftable->super.super.super.Destructor((NiRefObject *)v15, 1); /*0x845e4b*/
      InnerTexture = a5; /*0x845e4d*/
    }
    *(_DWORD *)(v13 + 4) = InnerTexture; /*0x845e53*/
    if ( InnerTexture ) /*0x845e56*/
      InterlockedIncrement((volatile LONG *)&InnerTexture->member); /*0x845e5c*/
  }
  NiD3DTextureStage_ApplyAddressModePreset((_DWORD **)v13, 0); /*0x845e66*/
  ++v6->RefCount; /*0x845e70*/
  a5 = (NiRenderedTexture *)v6; /*0x845e73*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5); /*0x845e8b*/
  if ( v6->RefCount-- == 1 ) /*0x845e93*/
    NiD3DPass_ReleaseToPool(v6); /*0x845e9e*/
  ++*((_DWORD *)this + 0xE); /*0x845ea3*/
}
