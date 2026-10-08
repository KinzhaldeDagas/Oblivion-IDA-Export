void __thiscall sub_8500A0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *InnerTexture)
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

  v5 = InnerTexture; /*0x8500cb*/
  v6 = unk_B45BA4; /*0x8500d2*/
  ShadowSceneNode = GetShadowSceneNode((unsigned int)InnerTexture->member.super.formatPrefs.alphaFormat >> 0x1C); /*0x8500df*/
  if ( ShadowSceneNode ) /*0x8500e9*/
  {
    if ( OB_RendererGlobalState_010201A0.pad_1DB[0x39] ) /*0x8500eb*/
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120)); /*0x8500ff*/
    else
      InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x85010b*/
  }
  else
  {
    InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x850117*/
  }
  flt_B464A0[1] = *(float *)&v5[2].member.super.rendererData * flt_B464A0[1]; /*0x85012b*/
  v8 = **(NiD3DTextureStage ***)(v6 + 0x24); /*0x850134*/
  v17 = v8; /*0x85013f*/
  if ( ((int (__thiscall *)(NiRenderedTexture *, _DWORD))v5->__vftable[1].super.super.DumpChildAttributes)(v5, 0) ) /*0x850143*/
  {
    v9 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))v5->__vftable[1].super.super.DumpChildAttributes)(v5, 0); /*0x850158*/
  }
  else
  {
    v9 = unk_B430F0; /*0x850163*/
    if ( (v5->member.super.formatPrefs.alphaFormat & 0x80) == 0 ) /*0x850169*/
      v9 = LODWORD(flt_B430DC[0]); /*0x85016b*/
  }
  Texture = v8->Texture; /*0x850171*/
  if ( Texture == (NiTexture *)v9 ) /*0x850176*/
  {
    v11 = v17; /*0x8501af*/
  }
  else
  {
    if ( Texture ) /*0x85017a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x850180*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x850196*/
    }
    v11 = v17; /*0x85019a*/
    v17->Texture = (NiTexture *)v9; /*0x85019e*/
    if ( v9 ) /*0x8501a1*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x8501a7*/
  }
  if ( v11 ) /*0x8501b5*/
  {
    if ( unk_B42CDD ) /*0x8501b7*/
    {
      v12 = ((int (__thiscall *)(NiRenderedTexture *))v5->__vftable[1].super.super.PostLoad)(v5); /*0x8501c8*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x8501cd*/
    }
  }
  v13 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0xC); /*0x8501d5*/
  v14 = *(NiRenderedTexture **)(v13 + 4); /*0x8501d8*/
  v15 = InnerTexture; /*0x8501db*/
  if ( v14 != InnerTexture ) /*0x8501e1*/
  {
    if ( v14 ) /*0x8501e5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v14->member) ) /*0x8501eb*/
        v14->__vftable->super.super.super.Destructor((NiRefObject *)v14, 1); /*0x850201*/
    }
    *(_DWORD *)(v13 + 4) = v15; /*0x850205*/
    if ( v15 ) /*0x850208*/
      InterlockedIncrement((volatile LONG *)&v15->member); /*0x85020e*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x850219*/
  InnerTexture = (NiRenderedTexture *)v6; /*0x85021c*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&InnerTexture); /*0x850238*/
  if ( (*(_DWORD *)(v6 + 0x60))-- == 1 ) /*0x850240*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x85024b*/
  ++*((_DWORD *)this + 0xE); /*0x850250*/
}
