// ShadowLight selector 0x179 consumer. Selects the 0x179 pooled pass, binds the material/base texture, binds the current ShadowSceneLight +0x114 rendered shadow texture into stage 2, appends the pass, and increments PassCount. Sole caller is ShadowLightShader_SetupRenderPass case 0x179.
void __thiscall sub_846090(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *a5)
{
  int v6; // esi
  int v7; // ebp
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // edi
  int v12; // ebp
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *v14; // edi
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+34h] [ebp+Ch]

  v6 = unk_B45B84; /*0x8460c9*/
  v16 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 9); /*0x8460cf*/
  sub_848E50(*(float **)(a4 + 0xC)); /*0x8460d6*/
  v7 = *(_DWORD *)(8 * *(_DWORD *)&OB_RendererGlobalState_010201A0[0x217] + 0xB45274); /*0x8460e0*/
  v8 = *(_DWORD *)(v6 + 0x44); /*0x8460e7*/
  if ( v8 != v7 ) /*0x8460ec*/
  {
    if ( v8 ) /*0x8460f0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x8460f6*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x84610c*/
    }
    *(_DWORD *)(v6 + 0x44) = v7; /*0x846110*/
    if ( v7 ) /*0x846113*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x846119*/
  }
  v9 = **(_DWORD **)(v6 + 0x24); /*0x84612d*/
  v17 = **(_DWORD **)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x84613b*/
  v10 = ((int (__thiscall *)(NiRenderedTexture *, int))a5->__vftable[1].super.super.DumpAttributes)(a5, v16); /*0x846144*/
  v11 = *(_DWORD *)(v9 + 4); /*0x846146*/
  v18 = v10; /*0x84614b*/
  if ( v11 != v10 ) /*0x84614f*/
  {
    if ( v11 ) /*0x846153*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x846159*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x84616f*/
      v10 = v18; /*0x846171*/
    }
    *(_DWORD *)(v9 + 4) = v10; /*0x846177*/
    if ( v10 ) /*0x84617a*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x846180*/
  }
  sub_848FA0((_DWORD **)v9, (int)a5); /*0x84618e*/
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x8461a0*/
  InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v17 + 0x114)); /*0x8461a3*/
  v14 = *(NiRenderedTexture **)(v12 + 4); /*0x8461a8*/
  a5 = InnerTexture; /*0x8461ad*/
  if ( v14 != InnerTexture ) /*0x8461b1*/
  {
    if ( v14 ) /*0x8461b5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v14->member) ) /*0x8461bb*/
        v14->__vftable->super.super.super.Destructor((NiRefObject *)v14, 1); /*0x8461d1*/
      InnerTexture = a5; /*0x8461d3*/
    }
    *(_DWORD *)(v12 + 4) = InnerTexture; /*0x8461d9*/
    if ( InnerTexture ) /*0x8461dc*/
      InterlockedIncrement((volatile LONG *)&InnerTexture->member); /*0x8461e2*/
  }
  NiD3DTextureStage_ApplyAddressModePreset((_DWORD **)v12, 0); /*0x8461ec*/
  ++*(_DWORD *)(v6 + 0x60); /*0x8461f6*/
  a5 = (NiRenderedTexture *)v6; /*0x8461f9*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5); /*0x846211*/
  if ( (*(_DWORD *)(v6 + 0x60))-- == 1 ) /*0x846219*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x846224*/
  ++*((_DWORD *)this + 0xE); /*0x846229*/
}
