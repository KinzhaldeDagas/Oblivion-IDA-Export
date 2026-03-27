_BYTE *__stdcall sub_862660(int a1, int a2, int a3)
{
  int ShadowSceneNode; // eax
  int v4; // esi
  NiRenderedTexture *InnerTexture; // esi
  int v6; // ebx
  NiRenderedTexture *v7; // edi

  ShadowSceneNode = GetShadowSceneNode(*(_DWORD *)(a2 + 0x1C) >> 0x1C);
  if ( a3 != 0x148 && a3 != 0x14A )
  {
    v4 = *(_DWORD *)(a2 + 0x1C);
    if ( (v4 & 0x20000) != 0 )
    {
      InnerTexture = (NiRenderedTexture *)dword_B43114;
      goto LABEL_11;
    }
    if ( byte_B43074 && (v4 & 0x200000) != 0 )
      goto LABEL_10;
  }
  if ( ShadowSceneNode )
  {
    if ( bDynWinRelfections_ )
    {
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120));
      goto LABEL_11;
    }
LABEL_10:
    InnerTexture = (NiRenderedTexture *)dword_B430F4;
LABEL_11:
    if ( InnerTexture )
      goto LABEL_13;
  }
  InnerTexture = (NiRenderedTexture *)dword_B430F4;
LABEL_13:
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4);
  v7 = *(NiRenderedTexture **)(v6 + 4);
  if ( v7 != InnerTexture )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->member) )
        v7->__vftable->super.super.super.Destructor((NiRefObject *)v7, 1);
    }
    *(_DWORD *)(v6 + 4) = InnerTexture;
    if ( InnerTexture )
      InterlockedIncrement((volatile LONG *)&InnerTexture->member);
  }
  return sub_7715E0((_DWORD **)v6, 0);
}
