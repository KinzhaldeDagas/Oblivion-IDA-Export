void __thiscall sub_845010(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v6; // edi
  int v7; // ebx
  int ShadowSceneNode; // eax
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebx
  NiTexture *Texture; // ebp
  NiRenderedTexture *m_uiRefCount; // ebx
  NiRenderedTexture *v14; // eax
  int v16; // [esp+14h] [ebp-10h]
  NiRenderedTexture *InnerTexture; // [esp+28h] [ebp+4h]

  v6 = (NiD3DPass *)dword_B45BB8;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0);
  v7 = (int)a5;
  ShadowSceneNode = GetShadowSceneNode(a5->TexturesPerPass >> 0x1C);
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
  if ( !byte_B42CE3 )
    *(float *)&dword_B464A4 = *(float *)(v7 + 0xA4) * *(float *)&dword_B464A4;
  Stage = v6->Stages.data->Stage;
  v10 = sub_848FD0((_DWORD *)v7, 0);
  v11 = *(_DWORD *)(Stage + 4);
  v16 = v10;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      v10 = v16;
    }
    *(_DWORD *)(Stage + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)a5);
  Texture = v6->Stages.data->Texture;
  m_uiRefCount = (NiRenderedTexture *)Texture->members.super.super.m_uiRefCount;
  v14 = InnerTexture;
  if ( m_uiRefCount != InnerTexture )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)&m_uiRefCount->member) )
        m_uiRefCount->__vftable->super.super.super.Destructor((NiRefObject *)m_uiRefCount, 1);
      v14 = InnerTexture;
    }
    Texture->members.super.super.m_uiRefCount = (UInt32)v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)&v14->member);
  }
  ++v6->RefCount;
  a5 = v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
