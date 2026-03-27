void __thiscall sub_83D780(NiTArray_NiD3DPass *this, int a2, int a3, NiRenderedTexture *Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // ebx
  int v7; // edi
  int m_controller; // ebx
  _DWORD *v9; // ebx
  NiRenderedTexture *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v14; // ebp
  UInt32 v15; // eax
  UInt32 v16; // ebp
  int v17; // ebx
  NiRenderedTexture *v18; // eax
  int v19; // ebp
  NiRenderedTexture **v20; // ebx
  bool v21; // zf
  int v22; // ebp
  NiRenderedTexture *v23; // ebx
  NiRenderedTexture *v24; // ecx
  UInt32 v25; // [esp+30h] [ebp+4h]
  UInt32 v26; // [esp+30h] [ebp+4h]

  v6 = Stage;
  v7 = dword_B4581C;
  sub_848C40((float *)Stage->member.super.super.m_extraDataList);
  m_controller = (int)v6->member.super.super.m_controller;
  sub_848E50(m_controller);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0);
  v9 = a5;
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88);
  Stage = **(NiRenderedTexture ***)(v7 + 0x24);
  v10 = Stage;
  v12 = v11(a5, 0);
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount;
  v25 = v12;
  if ( m_uiRefCount != v12 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v12 = v25;
    }
    Stage->member.super.super.super.m_uiRefCount = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  sub_848FA0(Stage, (int)v9);
  Stage = *(NiRenderedTexture **)(*(_DWORD *)(v7 + 0x24) + 4);
  v14 = Stage;
  v15 = sub_848FD0(v9, 0);
  v16 = v14->member.super.super.super.m_uiRefCount;
  v26 = v15;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1);
      v15 = v26;
    }
    Stage->member.super.super.super.m_uiRefCount = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  sub_848FA0(Stage, (int)v9);
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18);
  v18 = (NiRenderedTexture *)dword_B43108;
  v19 = *(_DWORD *)(v17 + 4);
  v20 = (NiRenderedTexture **)(v17 + 4);
  v21 = v19 == dword_B43108;
  Stage = (NiRenderedTexture *)dword_B43108;
  if ( !v21 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
        (**(void (__thiscall ***)(int, int))v19)(v19, 1);
      v18 = Stage;
    }
    *v20 = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)&v18->member);
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C);
  v23 = *(NiRenderedTexture **)(v22 + 4);
  v21 = v23 == CanopySadowMap;
  v24 = CanopySadowMap;
  Stage = CanopySadowMap;
  if ( !v21 )
  {
    if ( v23 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v23->member) )
        v23->__vftable->super.super.super.Destructor((NiRefObject *)v23, 1);
      v24 = Stage;
    }
    *(_DWORD *)(v22 + 4) = v24;
    if ( v24 )
      InterlockedIncrement((volatile LONG *)&v24->member);
  }
  ++*(_DWORD *)(v7 + 0x60);
  Stage = (NiRenderedTexture *)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1;
  if ( v21 )
    sub_7604D0((NiD3DPass *)v7);
  ++*((_DWORD *)this + 0xE);
}
