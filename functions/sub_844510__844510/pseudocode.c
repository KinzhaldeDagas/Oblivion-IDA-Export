void __thiscall sub_844510(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *a5)
{
  NiD3DPass *v6; // edi
  UInt32 Stage; // ebp
  int v8; // eax
  int v9; // ebx
  NiTexture *Texture; // ebx
  NiRenderedTexture *v11; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture **p_members; // ebx
  bool v14; // zf
  UInt32 Unk08; // ebp
  NiRenderedTexture *v16; // ebx
  NiRenderedTexture *v17; // ecx
  int v18; // [esp+30h] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B45A1C;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage;
  v8 = sub_848FD0(a5, 0);
  v9 = *(_DWORD *)(Stage + 4);
  v18 = v8;
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      v8 = v18;
    }
    *(_DWORD *)(Stage + 4) = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)a5);
  Texture = v6->Stages.data[1].Texture;
  v11 = (NiRenderedTexture *)dword_B43108;
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  p_members = (NiRenderedTexture **)&Texture->members;
  v14 = m_uiRefCount == dword_B43108;
  a5 = (NiRenderedTexture *)dword_B43108;
  if ( !v14 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v11 = a5;
    }
    *p_members = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)&v11->member);
  }
  Unk08 = v6->Stages.data[1].Unk08;
  v16 = *(NiRenderedTexture **)(Unk08 + 4);
  v14 = v16 == CanopySadowMap;
  v17 = CanopySadowMap;
  a5 = CanopySadowMap;
  if ( !v14 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v16->member) )
        v16->__vftable->super.super.super.Destructor((NiRefObject *)v16, 1);
      v17 = a5;
    }
    *(_DWORD *)(Unk08 + 4) = v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)&v17->member);
  }
  ++v6->RefCount;
  a5 = (NiRenderedTexture *)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5);
  v14 = v6->RefCount-- == 1;
  if ( v14 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
