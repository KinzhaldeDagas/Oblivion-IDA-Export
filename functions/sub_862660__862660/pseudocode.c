_BYTE *__stdcall sub_862660(int a1, int a2, int a3)
{
  int ShadowSceneNode; // eax
  int v4; // esi
  NiRenderedTexture *InnerTexture; // esi
  int v6; // ebx
  NiRenderedTexture *v7; // edi

  ShadowSceneNode = GetShadowSceneNode(*(_DWORD *)(a2 + 0x1C) >> 0x1C); /*0x862671*/
  if ( a3 != 0x148 && a3 != 0x14A ) /*0x86268b*/
  {
    v4 = *(_DWORD *)(a2 + 0x1C); /*0x86268d*/
    if ( (v4 & 0x20000) != 0 ) /*0x862696*/
    {
      InnerTexture = (NiRenderedTexture *)LODWORD(flt_B43110[1]); /*0x862698*/
      goto LABEL_11; /*0x86269e*/
    }
    if ( OB_RendererGlobalState_010201A0[0x1DB] && (v4 & 0x200000) != 0 ) /*0x8626af*/
      goto LABEL_10; /*0x8626af*/
  }
  if ( ShadowSceneNode ) /*0x8626b3*/
  {
    if ( OB_RendererGlobalState_010201A0[0x214] ) /*0x8626b5*/
    {
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120)); /*0x8626c9*/
      goto LABEL_11; /*0x8626cb*/
    }
LABEL_10:
    InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x8626cd*/
LABEL_11:
    if ( InnerTexture ) /*0x8626d5*/
      goto LABEL_13; /*0x8626d5*/
  }
  InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x8626d7*/
LABEL_13:
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4); /*0x8626dd*/
  v7 = *(NiRenderedTexture **)(v6 + 4); /*0x8626e7*/
  if ( v7 != InnerTexture ) /*0x8626ec*/
  {
    if ( v7 ) /*0x8626f0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->member) ) /*0x8626f6*/
        v7->__vftable->super.super.super.Destructor((NiRefObject *)v7, 1); /*0x86270c*/
    }
    *(_DWORD *)(v6 + 4) = InnerTexture; /*0x862710*/
    if ( InnerTexture ) /*0x862713*/
      InterlockedIncrement((volatile LONG *)&InnerTexture->member); /*0x862719*/
  }
  return NiD3DTextureStage_ApplyAddressModePreset((_DWORD **)v6, 0); /*0x862728*/
}
