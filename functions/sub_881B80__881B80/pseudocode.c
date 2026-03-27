void __thiscall sub_881B80(NiTArray_NiD3DPass *this, int a2, int a3, NiRenderedTexture *Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // ebx
  int v7; // esi
  int m_controller; // ebx
  _DWORD *v9; // ebp
  NiRenderedTexture *v10; // ebx
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebx
  NiRenderedTexture *v14; // ebx
  UInt32 v15; // eax
  UInt32 v16; // ebx
  NiRenderedTexture *v17; // ebx
  int (__thiscall *v18)(_DWORD *, int); // edx
  UInt32 v19; // eax
  UInt32 v20; // ebx
  int v21; // eax
  UInt32 v22; // ebp
  UInt32 v23; // ebx
  int v24; // ebp
  NiRenderedTexture *v25; // eax
  int v26; // ebx
  NiRenderedTexture **v27; // ebp
  bool v28; // zf
  int v29; // ebp
  NiRenderedTexture *v30; // eax
  int v31; // ebx
  NiRenderedTexture **v32; // ebp
  int v33; // ebp
  NiRenderedTexture *v34; // ebx
  NiRenderedTexture *v35; // ecx
  UInt32 v36; // [esp+40h] [ebp+4h]
  UInt32 v37; // [esp+40h] [ebp+4h]
  UInt32 v38; // [esp+40h] [ebp+4h]

  v6 = Stage;
  v7 = dword_B47754;
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
  v36 = v12;
  if ( m_uiRefCount != v12 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v12 = v36;
    }
    Stage->member.super.super.super.m_uiRefCount = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  Stage = *(NiRenderedTexture **)(*(_DWORD *)(v7 + 0x24) + 4);
  v14 = Stage;
  v15 = sub_848FD0(v9, 0);
  v16 = v14->member.super.super.super.m_uiRefCount;
  v37 = v15;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1);
      v15 = v37;
    }
    Stage->member.super.super.super.m_uiRefCount = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88);
  Stage = *(NiRenderedTexture **)(*(_DWORD *)(v7 + 0x24) + 8);
  v17 = Stage;
  v19 = v18(v9, 1);
  v20 = v17->member.super.super.super.m_uiRefCount;
  v38 = v19;
  if ( v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1);
      v19 = v38;
    }
    Stage->member.super.super.super.m_uiRefCount = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  Stage = *(NiRenderedTexture **)(*(_DWORD *)(v7 + 0x24) + 0xC);
  v21 = sub_848FD0(v9, 1);
  v22 = Stage->member.super.super.super.m_uiRefCount;
  v23 = v21;
  if ( v22 != v21 )
  {
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v22)(v22, 1);
    }
    Stage->member.super.super.super.m_uiRefCount = v23;
    if ( v23 )
      InterlockedIncrement((volatile LONG *)(v23 + 4));
  }
  v24 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x14);
  v25 = (NiRenderedTexture *)dword_B43110;
  v26 = *(_DWORD *)(v24 + 4);
  v27 = (NiRenderedTexture **)(v24 + 4);
  v28 = v26 == dword_B43110;
  Stage = (NiRenderedTexture *)dword_B43110;
  if ( !v28 )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
        (**(void (__thiscall ***)(int, int))v26)(v26, 1);
      v25 = Stage;
    }
    *v27 = v25;
    if ( v25 )
      InterlockedIncrement((volatile LONG *)&v25->member);
  }
  v29 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18);
  v30 = (NiRenderedTexture *)dword_B43108;
  v31 = *(_DWORD *)(v29 + 4);
  v32 = (NiRenderedTexture **)(v29 + 4);
  v28 = v31 == dword_B43108;
  Stage = (NiRenderedTexture *)dword_B43108;
  if ( !v28 )
  {
    if ( v31 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
        (**(void (__thiscall ***)(int, int))v31)(v31, 1);
      v30 = Stage;
    }
    *v32 = v30;
    if ( v30 )
      InterlockedIncrement((volatile LONG *)&v30->member);
  }
  v33 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C);
  v34 = *(NiRenderedTexture **)(v33 + 4);
  v28 = v34 == CanopySadowMap;
  v35 = CanopySadowMap;
  Stage = CanopySadowMap;
  if ( !v28 )
  {
    if ( v34 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v34->member) )
        v34->__vftable->super.super.super.Destructor((NiRefObject *)v34, 1);
      v35 = Stage;
    }
    *(_DWORD *)(v33 + 4) = v35;
    if ( v35 )
      InterlockedIncrement((volatile LONG *)&v35->member);
  }
  ++*(_DWORD *)(v7 + 0x60);
  Stage = (NiRenderedTexture *)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  v28 = (*(_DWORD *)(v7 + 0x60))-- == 1;
  if ( v28 )
    sub_7604D0((NiD3DPass *)v7);
  ++*((_DWORD *)this + 0xE);
}
