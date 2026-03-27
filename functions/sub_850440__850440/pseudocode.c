void __thiscall sub_850440(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *InnerTexture)
{
  int v5; // ebp
  NiD3DPass *v6; // edi
  int ShadowSceneNode; // eax
  UInt32 Stage; // esi
  int v9; // ebx
  int v10; // esi
  _DWORD **v11; // esi
  int v12; // eax
  UInt32 v13; // ebp
  NiRenderedTexture *v14; // esi
  int v15; // ebx
  UInt32 v17; // [esp+14h] [ebp-14h]

  v5 = (int)InnerTexture;
  v6 = (NiD3DPass *)dword_B45BAC;
  ShadowSceneNode = GetShadowSceneNode((unsigned int)InnerTexture->member.super.formatPrefs.alphaFormat >> 0x1C);
  if ( ShadowSceneNode )
  {
    if ( bDynWinRelfections_ )
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120));
    else
      InnerTexture = (NiRenderedTexture *)dword_B430F4;
  }
  else
  {
    InnerTexture = (NiRenderedTexture *)dword_B430F4;
  }
  *(float *)&dword_B464A4 = *(float *)(v5 + 0xA4) * *(float *)&dword_B464A4;
  Stage = v6->Stages.data->Stage;
  v17 = Stage;
  if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 0x8C))(v5, 0) )
  {
    v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 0x8C))(v5, 0);
  }
  else
  {
    v9 = dword_B430F0;
    if ( (*(_DWORD *)(v5 + 0x1C) & 0x80) == 0 )
      v9 = dword_B430DC;
  }
  v10 = *(_DWORD *)(Stage + 4);
  if ( v10 == v9 )
  {
    v11 = (_DWORD **)v17;
  }
  else
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    v11 = (_DWORD **)v17;
    *(_DWORD *)(v17 + 4) = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  if ( v11 )
  {
    if ( byte_B42CDD )
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x78))(v5);
      sub_7715E0(v11, v12);
    }
  }
  v13 = v6->Stages.data[1].Stage;
  v14 = *(NiRenderedTexture **)(v13 + 4);
  v15 = (int)InnerTexture;
  if ( v14 != InnerTexture )
  {
    if ( v14 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v14->member) )
        v14->__vftable->super.super.super.Destructor((NiRefObject *)v14, 1);
    }
    *(_DWORD *)(v13 + 4) = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  ++v6->RefCount;
  InnerTexture = (NiRenderedTexture *)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&InnerTexture);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
