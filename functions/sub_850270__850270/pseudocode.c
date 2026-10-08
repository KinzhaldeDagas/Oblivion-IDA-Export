void __thiscall sub_850270(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *InnerTexture)
{
  NiRenderedTexture *v5; // ebp
  int v6; // edi
  int ShadowSceneNode; // eax
  NiD3DTextureStage *v8; // esi
  int v9; // ebx
  NiTexture *Texture; // esi
  NiD3DTextureStage *v11; // esi
  unsigned int v12; // eax
  int v13; // ebp
  NiRenderedTexture *v14; // esi
  NiRenderedTexture *v15; // ebx
  NiD3DTextureStage *v17; // [esp+14h] [ebp-14h]

  v5 = InnerTexture; /*0x85029b*/
  v6 = unk_B45BA8; /*0x8502a2*/
  ShadowSceneNode = GetShadowSceneNode((unsigned int)InnerTexture->member.super.formatPrefs.alphaFormat >> 0x1C); /*0x8502af*/
  if ( ShadowSceneNode ) /*0x8502b9*/
  {
    if ( OB_RendererGlobalState_010201A0.pad_1DB[0x39] ) /*0x8502bb*/
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120)); /*0x8502cf*/
    else
      InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x8502db*/
  }
  else
  {
    InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x8502e7*/
  }
  flt_B464A0[1] = *(float *)&v5[2].member.super.rendererData * flt_B464A0[1]; /*0x8502fb*/
  v8 = **(NiD3DTextureStage ***)(v6 + 0x24); /*0x850304*/
  v17 = v8; /*0x85030f*/
  if ( ((int (__thiscall *)(NiRenderedTexture *, _DWORD))v5->__vftable[1].super.super.DumpChildAttributes)(v5, 0) ) /*0x850313*/
  {
    v9 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))v5->__vftable[1].super.super.DumpChildAttributes)(v5, 0); /*0x850328*/
  }
  else
  {
    v9 = unk_B430F0; /*0x850333*/
    if ( (v5->member.super.formatPrefs.alphaFormat & 0x80) == 0 ) /*0x850339*/
      v9 = LODWORD(flt_B430DC[0]); /*0x85033b*/
  }
  Texture = v8->Texture; /*0x850341*/
  if ( Texture == (NiTexture *)v9 ) /*0x850346*/
  {
    v11 = v17; /*0x85037f*/
  }
  else
  {
    if ( Texture ) /*0x85034a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x850350*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x850366*/
    }
    v11 = v17; /*0x85036a*/
    v17->Texture = (NiTexture *)v9; /*0x85036e*/
    if ( v9 ) /*0x850371*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x850377*/
  }
  if ( v11 ) /*0x850385*/
  {
    if ( unk_B42CDD ) /*0x850387*/
    {
      v12 = ((int (__thiscall *)(NiRenderedTexture *))v5->__vftable[1].super.super.PostLoad)(v5); /*0x850398*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x85039d*/
    }
  }
  v13 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0xC); /*0x8503a5*/
  v14 = *(NiRenderedTexture **)(v13 + 4); /*0x8503a8*/
  v15 = InnerTexture; /*0x8503ab*/
  if ( v14 != InnerTexture ) /*0x8503b1*/
  {
    if ( v14 ) /*0x8503b5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v14->member) ) /*0x8503bb*/
        v14->__vftable->super.super.super.Destructor((NiRefObject *)v14, 1); /*0x8503d1*/
    }
    *(_DWORD *)(v13 + 4) = v15; /*0x8503d5*/
    if ( v15 ) /*0x8503d8*/
      InterlockedIncrement((volatile LONG *)&v15->member); /*0x8503de*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8503e9*/
  InnerTexture = (NiRenderedTexture *)v6; /*0x8503ec*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&InnerTexture); /*0x850408*/
  if ( (*(_DWORD *)(v6 + 0x60))-- == 1 ) /*0x850410*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x85041b*/
  ++*((_DWORD *)this + 0xE); /*0x850420*/
}
