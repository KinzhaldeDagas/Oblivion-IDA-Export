void __thiscall sub_844E30(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
{
  int v6; // ebx
  int v7; // esi
  int ShadowSceneNode; // eax
  NiRenderedTexture *InnerTexture; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // esi
  int v13; // ebp
  NiTexture *Texture; // ebp
  UInt32 m_uiRefCount; // esi
  int v16; // eax
  NiD3DPass *v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+28h] [ebp+4h]

  v6 = dword_B45BB4;
  v18 = (NiD3DPass *)dword_B45BB4;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0);
  v7 = (int)a5;
  ShadowSceneNode = GetShadowSceneNode(a5->TexturesPerPass >> 0x1C);
  if ( byte_B43074 )
  {
    if ( (*(_DWORD *)(v7 + 0x1C) & 0x200000) != 0 )
    {
      v19 = dword_B430F4;
      goto LABEL_12;
    }
    if ( ShadowSceneNode )
    {
      if ( !bDynWinRelfections_ )
      {
        v19 = dword_B430F4;
        goto LABEL_12;
      }
      goto LABEL_6;
    }
  }
  else if ( ShadowSceneNode )
  {
    if ( !bDynWinRelfections_ )
    {
      InnerTexture = (NiRenderedTexture *)dword_B430F4;
      goto LABEL_11;
    }
LABEL_6:
    InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120));
LABEL_11:
    v19 = (int)InnerTexture;
LABEL_12:
    if ( v19 )
      goto LABEL_14;
  }
  v19 = dword_B430F4;
LABEL_14:
  if ( !byte_B42CE3 )
    *(float *)&dword_B464A4 = *(float *)(v7 + 0xA4) * *(float *)&dword_B464A4;
  v10 = **(_DWORD **)(v6 + 0x24);
  v11 = sub_848FD0((_DWORD *)v7, 0);
  v12 = *(_DWORD *)(v10 + 4);
  v13 = v11;
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    *(_DWORD *)(v10 + 4) = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  sub_848FA0((_DWORD **)v10, (int)a5);
  Texture = v18->Stages.data->Texture;
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v16 = v19;
  if ( m_uiRefCount != v19 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v16 = v19;
    }
    Texture->members.super.super.m_uiRefCount = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  ++v18->RefCount;
  a5 = v18;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  if ( v18->RefCount-- == 1 )
    sub_7604D0(v18);
  ++*((_DWORD *)this + 0xE);
}
