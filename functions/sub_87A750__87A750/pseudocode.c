void __thiscall sub_87A750(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *a5)
{
  NiD3DPass *v6; // esi
  UInt32 Stage; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  NiTexture *Texture; // edi
  int v12; // eax
  UInt32 m_uiRefCount; // edi
  int v14; // ebp
  NiTexture *v15; // ebp
  NiRenderedTexture *v16; // eax
  UInt32 v17; // edi
  NiRenderedTexture **p_members; // ebp
  bool v19; // zf
  UInt32 Unk08; // ebp
  NiRenderedTexture *v21; // edi
  NiRenderedTexture *v22; // ecx
  UInt32 v23; // [esp+38h] [ebp+Ch]
  NiTexture *v24; // [esp+38h] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B47704;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage;
  v23 = Stage;
  v8 = sub_848FD0(a5, 0);
  v9 = *(_DWORD *)(Stage + 4);
  v10 = v8;
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *(_DWORD *)(v23 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  Texture = v6->Stages.data->Texture;
  v24 = Texture;
  v12 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))a5->__vftable[1].super.super.DumpAttributes)(a5, 0);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v14 = v12;
  if ( m_uiRefCount != v12 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v24->members.super.super.m_uiRefCount = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v15 = v6->Stages.data[1].Texture;
  v16 = (NiRenderedTexture *)dword_B43108;
  v17 = v15->members.super.super.m_uiRefCount;
  p_members = (NiRenderedTexture **)&v15->members;
  v19 = v17 == dword_B43108;
  a5 = (NiRenderedTexture *)dword_B43108;
  if ( !v19 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1);
      v16 = a5;
    }
    *p_members = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)&v16->member);
  }
  Unk08 = v6->Stages.data[1].Unk08;
  v21 = *(NiRenderedTexture **)(Unk08 + 4);
  v19 = v21 == CanopySadowMap;
  v22 = CanopySadowMap;
  a5 = CanopySadowMap;
  if ( !v19 )
  {
    if ( v21 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v21->member) )
        v21->__vftable->super.super.super.Destructor((NiRefObject *)v21, 1);
      v22 = a5;
    }
    *(_DWORD *)(Unk08 + 4) = v22;
    if ( v22 )
      InterlockedIncrement((volatile LONG *)&v22->member);
  }
  ++v6->RefCount;
  a5 = (NiRenderedTexture *)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5);
  v19 = v6->RefCount-- == 1;
  if ( v19 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
