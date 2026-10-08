void __thiscall sub_850440(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *InnerTexture)
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

  v5 = InnerTexture; /*0x85046b*/
  v6 = unk_B45BAC; /*0x850472*/
  ShadowSceneNode = GetShadowSceneNode((unsigned int)InnerTexture->member.super.formatPrefs.alphaFormat >> 0x1C); /*0x85047f*/
  if ( ShadowSceneNode ) /*0x850489*/
  {
    if ( OB_RendererGlobalState_010201A0.pad_1DB[0x39] ) /*0x85048b*/
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120)); /*0x85049f*/
    else
      InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x8504ab*/
  }
  else
  {
    InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x8504b7*/
  }
  flt_B464A0[1] = *(float *)&v5[2].member.super.rendererData * flt_B464A0[1]; /*0x8504cb*/
  v8 = **(NiD3DTextureStage ***)(v6 + 0x24); /*0x8504d4*/
  v17 = v8; /*0x8504df*/
  if ( ((int (__thiscall *)(NiRenderedTexture *, _DWORD))v5->__vftable[1].super.super.DumpChildAttributes)(v5, 0) ) /*0x8504e3*/
  {
    v9 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))v5->__vftable[1].super.super.DumpChildAttributes)(v5, 0); /*0x8504f8*/
  }
  else
  {
    v9 = unk_B430F0; /*0x850503*/
    if ( (v5->member.super.formatPrefs.alphaFormat & 0x80) == 0 ) /*0x850509*/
      v9 = LODWORD(flt_B430DC[0]); /*0x85050b*/
  }
  Texture = v8->Texture; /*0x850511*/
  if ( Texture == (NiTexture *)v9 ) /*0x850516*/
  {
    v11 = v17; /*0x85054f*/
  }
  else
  {
    if ( Texture ) /*0x85051a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x850520*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x850536*/
    }
    v11 = v17; /*0x85053a*/
    v17->Texture = (NiTexture *)v9; /*0x85053e*/
    if ( v9 ) /*0x850541*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x850547*/
  }
  if ( v11 ) /*0x850555*/
  {
    if ( unk_B42CDD ) /*0x850557*/
    {
      v12 = ((int (__thiscall *)(NiRenderedTexture *))v5->__vftable[1].super.super.PostLoad)(v5); /*0x850568*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x85056d*/
    }
  }
  v13 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0xC); /*0x850575*/
  v14 = *(NiRenderedTexture **)(v13 + 4); /*0x850578*/
  v15 = InnerTexture; /*0x85057b*/
  if ( v14 != InnerTexture ) /*0x850581*/
  {
    if ( v14 ) /*0x850585*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v14->member) ) /*0x85058b*/
        v14->__vftable->super.super.super.Destructor((NiRefObject *)v14, 1); /*0x8505a1*/
    }
    *(_DWORD *)(v13 + 4) = v15; /*0x8505a5*/
    if ( v15 ) /*0x8505a8*/
      InterlockedIncrement((volatile LONG *)&v15->member); /*0x8505ae*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8505b9*/
  InnerTexture = (NiRenderedTexture *)v6; /*0x8505bc*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&InnerTexture); /*0x8505d8*/
  if ( (*(_DWORD *)(v6 + 0x60))-- == 1 ) /*0x8505e0*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x8505eb*/
  ++*((_DWORD *)this + 0xE); /*0x8505f0*/
}
