void __thiscall sub_84FED0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *InnerTexture)
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

  v5 = InnerTexture; /*0x84fefb*/
  v6 = unk_B45BA0; /*0x84ff02*/
  ShadowSceneNode = GetShadowSceneNode((unsigned int)InnerTexture->member.super.formatPrefs.alphaFormat >> 0x1C); /*0x84ff0f*/
  if ( ShadowSceneNode ) /*0x84ff19*/
  {
    if ( OB_RendererGlobalState_010201A0.pad_1DB[0x39] ) /*0x84ff1b*/
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120)); /*0x84ff2f*/
    else
      InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x84ff3b*/
  }
  else
  {
    InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x84ff47*/
  }
  flt_B464A0[1] = *(float *)&v5[2].member.super.rendererData * flt_B464A0[1]; /*0x84ff5b*/
  v8 = **(NiD3DTextureStage ***)(v6 + 0x24); /*0x84ff64*/
  v17 = v8; /*0x84ff6f*/
  if ( ((int (__thiscall *)(NiRenderedTexture *, _DWORD))v5->__vftable[1].super.super.DumpChildAttributes)(v5, 0) ) /*0x84ff73*/
  {
    v9 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))v5->__vftable[1].super.super.DumpChildAttributes)(v5, 0); /*0x84ff88*/
  }
  else
  {
    v9 = unk_B430F0; /*0x84ff93*/
    if ( (v5->member.super.formatPrefs.alphaFormat & 0x80) == 0 ) /*0x84ff99*/
      v9 = LODWORD(flt_B430DC[0]); /*0x84ff9b*/
  }
  Texture = v8->Texture; /*0x84ffa1*/
  if ( Texture == (NiTexture *)v9 ) /*0x84ffa6*/
  {
    v11 = v17; /*0x84ffdf*/
  }
  else
  {
    if ( Texture ) /*0x84ffaa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84ffb0*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84ffc6*/
    }
    v11 = v17; /*0x84ffca*/
    v17->Texture = (NiTexture *)v9; /*0x84ffce*/
    if ( v9 ) /*0x84ffd1*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84ffd7*/
  }
  if ( v11 ) /*0x84ffe5*/
  {
    if ( unk_B42CDD ) /*0x84ffe7*/
    {
      v12 = ((int (__thiscall *)(NiRenderedTexture *))v5->__vftable[1].super.super.PostLoad)(v5); /*0x84fff8*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x84fffd*/
    }
  }
  v13 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0xC); /*0x850005*/
  v14 = *(NiRenderedTexture **)(v13 + 4); /*0x850008*/
  v15 = InnerTexture; /*0x85000b*/
  if ( v14 != InnerTexture ) /*0x850011*/
  {
    if ( v14 ) /*0x850015*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v14->member) ) /*0x85001b*/
        v14->__vftable->super.super.super.Destructor((NiRefObject *)v14, 1); /*0x850031*/
    }
    *(_DWORD *)(v13 + 4) = v15; /*0x850035*/
    if ( v15 ) /*0x850038*/
      InterlockedIncrement((volatile LONG *)&v15->member); /*0x85003e*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x850049*/
  InnerTexture = (NiRenderedTexture *)v6; /*0x85004c*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&InnerTexture); /*0x850068*/
  if ( (*(_DWORD *)(v6 + 0x60))-- == 1 ) /*0x850070*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x85007b*/
  ++*((_DWORD *)this + 0xE); /*0x850080*/
}
