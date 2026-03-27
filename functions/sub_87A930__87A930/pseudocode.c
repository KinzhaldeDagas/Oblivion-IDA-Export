void __thiscall sub_87A930(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v6; // esi
  UInt32 Stage; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  NiTexture *Texture; // ebx
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  int v14; // ebp
  UInt32 v15; // ebp
  int v16; // ebx
  bool v17; // zf
  NiD3DPass *v18; // ecx
  UInt32 v19; // [esp+34h] [ebp+Ch]
  NiTexture *v20; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B47708;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage;
  v19 = Stage;
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
    *(_DWORD *)(v19 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  Texture = v6->Stages.data->Texture;
  v20 = Texture;
  v12 = ((int (__thiscall *)(NiD3DPass *, _DWORD))a5->__vftable[8].sub_75FD90)(a5, 0);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v14 = v12;
  if ( m_uiRefCount != v12 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v20->members.super.super.m_uiRefCount = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v15 = v6->Stages.data[1].Stage;
  v16 = *(_DWORD *)(v15 + 4);
  v17 = v16 == dword_B43110;
  v18 = (NiD3DPass *)dword_B43110;
  a5 = (NiD3DPass *)dword_B43110;
  if ( !v17 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(int, int))v16)(v16, 1);
      v18 = a5;
    }
    *(_DWORD *)(v15 + 4) = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)v18->Name);
  }
  ++v6->RefCount;
  a5 = v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  v17 = v6->RefCount-- == 1;
  if ( v17 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
