void __thiscall sub_877C30(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v6; // edi
  int v7; // ebp
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // ebp
  UInt32 Unk08; // ebp
  int v17; // ebx
  bool v18; // zf
  NiD3DPass *v19; // ecx
  UInt32 v20; // [esp+34h] [ebp+Ch]
  NiTexture *v21; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B476A8;
  sub_848C40(*(float **)(a4 + 0x10));
  v7 = *(_DWORD *)(a4 + 0xC);
  sub_848E50(v7);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    v7,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage;
  v20 = Stage;
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
    *(_DWORD *)(v20 + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  Texture = v6->Stages.data->Texture;
  v21 = Texture;
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
    v21->members.super.super.m_uiRefCount = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  Unk08 = v6->Stages.data[1].Unk08;
  v17 = *(_DWORD *)(Unk08 + 4);
  v18 = v17 == dword_B43110;
  v19 = (NiD3DPass *)dword_B43110;
  a5 = (NiD3DPass *)dword_B43110;
  if ( !v18 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
      v19 = a5;
    }
    *(_DWORD *)(Unk08 + 4) = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)v19->Name);
  }
  ++v6->RefCount;
  a5 = v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  v18 = v6->RefCount-- == 1;
  if ( v18 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
