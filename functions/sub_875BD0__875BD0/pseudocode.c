void __thiscall sub_875BD0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
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
  UInt32 v17; // [esp+30h] [ebp+Ch]
  NiTexture *v18; // [esp+30h] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B47668;
  sub_848C40(*(float **)(a4 + 0x10));
  v7 = *(_DWORD *)(a4 + 0xC);
  sub_848E50(v7);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0);
  Stage = v6->Stages.data->Stage;
  v17 = Stage;
  v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))a5->__vftable[8].sub_75FD90)(a5, 0);
  v10 = *(_DWORD *)(Stage + 4);
  v11 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *(_DWORD *)(v17 + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  Texture = v6->Stages.data->Texture;
  v18 = Texture;
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
    v18->members.super.super.m_uiRefCount = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  ++v6->RefCount;
  a5 = v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
