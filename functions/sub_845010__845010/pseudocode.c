void __thiscall sub_845010(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  NiD3DPass *v7; // ebx
  int ShadowSceneNode; // eax
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebx
  NiTexture *Texture; // ebp
  NiRenderedTexture *m_uiRefCount; // ebx
  NiRenderedTexture *v14; // eax
  int v16; // [esp+14h] [ebp-10h]
  NiRenderedTexture *InnerTexture; // [esp+28h] [ebp+4h]

  v6 = (NiD3DPass *)unk_B45BB8; /*0x845043*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0); /*0x845050*/
  v7 = value; /*0x845052*/
  ShadowSceneNode = GetShadowSceneNode(value->TexturesPerPass >> 0x1C); /*0x845060*/
  if ( ShadowSceneNode ) /*0x84506a*/
  {
    if ( OB_RendererGlobalState_010201A0.pad_1DB[0x39] ) /*0x84506c*/
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120)); /*0x845080*/
    else
      InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x84508c*/
  }
  else
  {
    InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x845098*/
  }
  if ( !unk_B42CE3 ) /*0x84509c*/
    flt_B464A0[1] = *(float *)&v7[1].PixelShaderTarget * flt_B464A0[1]; /*0x8450b1*/
  Stage = v6->Stages.data->Stage; /*0x8450ba*/
  v10 = sub_848FD0(v7, 0); /*0x8450c1*/
  v11 = *(_DWORD *)(Stage + 4); /*0x8450c6*/
  v16 = v10; /*0x8450cb*/
  if ( v11 != v10 ) /*0x8450cf*/
  {
    if ( v11 ) /*0x8450d3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8450d9*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8450ef*/
      v10 = v16; /*0x8450f1*/
    }
    *(_DWORD *)(Stage + 4) = v10; /*0x8450f7*/
    if ( v10 ) /*0x8450fa*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x845100*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x84510e*/
  Texture = v6->Stages.data->Texture; /*0x845116*/
  m_uiRefCount = (NiRenderedTexture *)Texture->members.super.super.m_uiRefCount; /*0x845119*/
  v14 = InnerTexture; /*0x84511c*/
  if ( m_uiRefCount != InnerTexture ) /*0x845122*/
  {
    if ( m_uiRefCount ) /*0x845126*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&m_uiRefCount->member) ) /*0x84512c*/
        m_uiRefCount->__vftable->super.super.super.Destructor((NiRefObject *)m_uiRefCount, 1); /*0x845142*/
      v14 = InnerTexture; /*0x845144*/
    }
    Texture->members.super.super.m_uiRefCount = (UInt32)v14; /*0x84514a*/
    if ( v14 ) /*0x84514d*/
      InterlockedIncrement((volatile LONG *)&v14->member); /*0x845153*/
  }
  ++v6->RefCount; /*0x84515e*/
  value = v6; /*0x845161*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x845179*/
  if ( v6->RefCount-- == 1 ) /*0x845181*/
    NiD3DPass_ReleaseToPool(v6); /*0x84518c*/
  ++*((_DWORD *)this + 0xE); /*0x845191*/
}
