void __thiscall sub_83DC30(NiTArray_NiD3DPass *this, int a2, int a3, NiRenderedTexture *Stage, _DWORD *a5)
{
  NiInterpController *m_controller; // esi
  int v7; // ebx
  _DWORD *v8; // esi
  NiRenderedTexture *v9; // ebp
  int (__thiscall *v10)(_DWORD *, _DWORD); // eax
  UInt32 v11; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v13; // ebp
  UInt32 v14; // eax
  UInt32 v15; // ebp
  NiRenderedTexture *v16; // ebp
  int (__thiscall *v17)(_DWORD *, int); // eax
  UInt32 v18; // eax
  UInt32 v19; // ebp
  int v20; // esi
  NiRenderedTexture *v21; // eax
  int v22; // ebp
  NiRenderedTexture **v23; // esi
  bool v24; // zf
  int v25; // ebp
  NiRenderedTexture *v26; // esi
  NiRenderedTexture *v27; // ecx
  UInt32 v28; // [esp+38h] [ebp+4h]
  UInt32 v29; // [esp+38h] [ebp+4h]
  UInt32 v30; // [esp+38h] [ebp+4h]

  m_controller = Stage->member.super.super.m_controller;
  v7 = dword_B45830;
  sub_848E50((int)m_controller);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, NiInterpController *, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    m_controller,
    0);
  v8 = a5;
  dword_B46628 = a5[0x2A];
  dword_B4662C = v8[0x2B];
  dword_B46630 = v8[0x2C];
  dword_B46634 = v8[0x2D];
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x88);
  Stage = **(NiRenderedTexture ***)(v7 + 0x24);
  v9 = Stage;
  v11 = v10(v8, 0);
  m_uiRefCount = v9->member.super.super.super.m_uiRefCount;
  v28 = v11;
  if ( m_uiRefCount != v11 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v11 = v28;
    }
    Stage->member.super.super.super.m_uiRefCount = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  sub_848FA0(Stage, (int)v8);
  Stage = *(NiRenderedTexture **)(*(_DWORD *)(v7 + 0x24) + 4);
  v13 = Stage;
  v14 = sub_848FD0(v8, 0);
  v15 = v13->member.super.super.super.m_uiRefCount;
  v29 = v14;
  if ( v15 != v14 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1);
      v14 = v29;
    }
    Stage->member.super.super.super.m_uiRefCount = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  sub_848FA0(Stage, (int)v8);
  v17 = *(int (__thiscall **)(_DWORD *, int))(*v8 + 0x88);
  Stage = *(NiRenderedTexture **)(*(_DWORD *)(v7 + 0x24) + 0x10);
  v16 = Stage;
  v18 = v17(v8, 1);
  v19 = v16->member.super.super.super.m_uiRefCount;
  v30 = v18;
  if ( v19 != v18 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v19)(v19, 1);
      v18 = v30;
    }
    Stage->member.super.super.super.m_uiRefCount = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  sub_848FA0(Stage, (int)v8);
  v20 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18);
  v21 = (NiRenderedTexture *)dword_B43108;
  v22 = *(_DWORD *)(v20 + 4);
  v23 = (NiRenderedTexture **)(v20 + 4);
  v24 = v22 == dword_B43108;
  Stage = (NiRenderedTexture *)dword_B43108;
  if ( !v24 )
  {
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
        (**(void (__thiscall ***)(int, int))v22)(v22, 1);
      v21 = Stage;
    }
    *v23 = v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)&v21->member);
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C);
  v26 = *(NiRenderedTexture **)(v25 + 4);
  v24 = v26 == CanopySadowMap;
  v27 = CanopySadowMap;
  Stage = CanopySadowMap;
  if ( !v24 )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v26->member) )
        v26->__vftable->super.super.super.Destructor((NiRefObject *)v26, 1);
      v27 = Stage;
    }
    *(_DWORD *)(v25 + 4) = v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)&v27->member);
  }
  ++*(_DWORD *)(v7 + 0x60);
  Stage = (NiRenderedTexture *)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  v24 = (*(_DWORD *)(v7 + 0x60))-- == 1;
  if ( v24 )
    sub_7604D0((NiD3DPass *)v7);
  ++*((_DWORD *)this + 0xE);
}
