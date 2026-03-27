void __thiscall sub_8773B0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *a5)
{
  NiD3DPass *v6; // edi
  int v7; // ebx
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // ebp
  UInt32 Unk08; // ebx
  NiRenderedTexture *v17; // eax
  int v18; // ebp
  NiRenderedTexture **v19; // ebx
  bool v20; // zf
  UInt32 v21; // ebx
  NiRenderedTexture *v22; // eax
  int v23; // ebp
  NiRenderedTexture **v24; // ebx
  NiTexture *v25; // ebp
  NiRenderedTexture *v26; // ebx
  NiRenderedTexture *v27; // ecx
  UInt32 v28; // [esp+3Ch] [ebp+Ch]
  NiTexture *v29; // [esp+3Ch] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B47698;
  sub_848C40(*(float **)(a4 + 0x10));
  v7 = *(_DWORD *)(a4 + 0xC);
  sub_848E50(v7);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0);
  Stage = v6->Stages.data->Stage;
  v28 = Stage;
  v9 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))a5->__vftable[1].super.super.DumpAttributes)(a5, 0);
  v10 = *(_DWORD *)(Stage + 4);
  v11 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *(_DWORD *)(v28 + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  Texture = v6->Stages.data->Texture;
  v29 = Texture;
  v13 = sub_848FD0(a5, 0);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v15 = v13;
  if ( m_uiRefCount != v13 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v29->members.super.super.m_uiRefCount = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  Unk08 = v6->Stages.data[1].Unk08;
  v17 = (NiRenderedTexture *)dword_B43110;
  v18 = *(_DWORD *)(Unk08 + 4);
  v19 = (NiRenderedTexture **)(Unk08 + 4);
  v20 = v18 == dword_B43110;
  a5 = (NiRenderedTexture *)dword_B43110;
  if ( !v20 )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(int, int))v18)(v18, 1);
      v17 = a5;
    }
    *v19 = v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)&v17->member);
  }
  v21 = v6->Stages.data[2].Stage;
  v22 = (NiRenderedTexture *)dword_B43108;
  v23 = *(_DWORD *)(v21 + 4);
  v24 = (NiRenderedTexture **)(v21 + 4);
  v20 = v23 == dword_B43108;
  a5 = (NiRenderedTexture *)dword_B43108;
  if ( !v20 )
  {
    if ( v23 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
        (**(void (__thiscall ***)(int, int))v23)(v23, 1);
      v22 = a5;
    }
    *v24 = v22;
    if ( v22 )
      InterlockedIncrement((volatile LONG *)&v22->member);
  }
  v25 = v6->Stages.data[2].Texture;
  v26 = (NiRenderedTexture *)v25->members.super.super.m_uiRefCount;
  v20 = v26 == CanopySadowMap;
  v27 = CanopySadowMap;
  a5 = CanopySadowMap;
  if ( !v20 )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v26->member) )
        v26->__vftable->super.super.super.Destructor((NiRefObject *)v26, 1);
      v27 = a5;
    }
    v25->members.super.super.m_uiRefCount = (UInt32)v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)&v27->member);
  }
  ++v6->RefCount;
  a5 = (NiRenderedTexture *)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5);
  v20 = v6->RefCount-- == 1;
  if ( v20 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
