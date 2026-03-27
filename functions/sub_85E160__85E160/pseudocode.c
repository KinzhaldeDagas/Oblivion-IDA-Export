void __thiscall sub_85E160(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v7; // edi
  UInt32 Stage; // ebp
  int v9; // eax
  int v10; // ebx
  NiTexture *Texture; // ebx
  int v12; // eax
  UInt32 m_uiRefCount; // ebp
  int *p_members; // ebx
  UInt32 Unk08; // ebp
  NiRenderedTexture *v16; // ebx
  NiRenderedTexture *v17; // ecx
  int v19; // [esp+30h] [ebp+Ch]
  int v20; // [esp+34h] [ebp+10h]
  NiRenderedTexture *v21; // [esp+34h] [ebp+10h]

  v7 = (NiD3DPass *)dword_B477F4;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v7->Stages.data->Stage;
  v9 = sub_848FD0(a5, 0);
  v10 = *(_DWORD *)(Stage + 4);
  v19 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      v9 = v19;
    }
    *(_DWORD *)(Stage + 4) = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)a5);
  Texture = v7->Stages.data->Texture;
  v12 = dword_B43108;
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  p_members = (int *)&Texture->members;
  v20 = dword_B43108;
  if ( m_uiRefCount != dword_B43108 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v12 = v20;
    }
    *p_members = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  Unk08 = v7->Stages.data->Unk08;
  v16 = *(NiRenderedTexture **)(Unk08 + 4);
  v17 = CanopySadowMap;
  v21 = CanopySadowMap;
  if ( v16 != CanopySadowMap )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v16->member) )
        v16->__vftable->super.super.super.Destructor((NiRefObject *)v16, 1);
      v17 = v21;
    }
    *(_DWORD *)(Unk08 + 4) = v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)&v17->member);
  }
  if ( !(_BYTE)a6 )
  {
    ++v7->RefCount;
    a6 = v7;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v7->RefCount-- == 1 )
      sub_7604D0(v7);
    ++*((_DWORD *)this + 0xE);
  }
}
