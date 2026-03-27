void __thiscall sub_83FD50(NiTArray_NiD3DPass *this, int a2, int a3, NiRenderedTexture *Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // ebp
  int m_controller; // esi
  NiD3DPass *v8; // ebx
  _DWORD *v9; // esi
  NiRenderedTexture *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v14; // ebp
  int v15; // eax
  UInt32 v16; // ebp
  NiRenderedTexture *v17; // ebp
  int (__thiscall *v18)(_DWORD *, int); // eax
  int v19; // eax
  UInt32 v20; // ebp
  UInt32 v21; // esi
  NiRenderedTexture *v22; // eax
  int v23; // ebp
  NiRenderedTexture **v24; // esi
  bool v25; // zf
  NiTexture *Texture; // ebp
  NiRenderedTexture *v27; // esi
  NiRenderedTexture *v28; // ecx
  int v29; // [esp+38h] [ebp+4h]
  int v30; // [esp+38h] [ebp+4h]
  int v31; // [esp+38h] [ebp+4h]

  v6 = Stage;
  m_controller = (int)Stage->member.super.super.m_controller;
  v8 = (NiD3DPass *)dword_B458A4;
  sub_848E50(m_controller);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, NiExtraData **))this->_vtbl + 0x2F))(
    this,
    a2,
    m_controller,
    v6->member.super.super.m_extraDataList);
  v9 = a5;
  dword_B46628 = a5[0x2A];
  dword_B4662C = v9[0x2B];
  dword_B46630 = v9[0x2C];
  dword_B46634 = v9[0x2D];
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x88);
  Stage = (NiRenderedTexture *)v8->Stages.data->Stage;
  v10 = Stage;
  v12 = v11(v9, 0);
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount;
  v29 = v12;
  if ( m_uiRefCount != v12 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v12 = v29;
    }
    Stage->member.super.super.super.m_uiRefCount = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  sub_848FA0(Stage, (int)v9);
  Stage = (NiRenderedTexture *)v8->Stages.data->Texture;
  v14 = Stage;
  v15 = sub_848FD0(v9, 0);
  v16 = v14->member.super.super.super.m_uiRefCount;
  v30 = v15;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1);
      v15 = v30;
    }
    Stage->member.super.super.super.m_uiRefCount = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  sub_848FA0(Stage, (int)v9);
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88);
  Stage = (NiRenderedTexture *)v8->Stages.data[1].Texture;
  v17 = Stage;
  v19 = v18(v9, 1);
  v20 = v17->member.super.super.super.m_uiRefCount;
  v31 = v19;
  if ( v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1);
      v19 = v31;
    }
    Stage->member.super.super.super.m_uiRefCount = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  sub_848FA0(Stage, (int)v9);
  v21 = v8->Stages.data[2].Stage;
  v22 = (NiRenderedTexture *)dword_B43108;
  v23 = *(_DWORD *)(v21 + 4);
  v24 = (NiRenderedTexture **)(v21 + 4);
  v25 = v23 == dword_B43108;
  Stage = (NiRenderedTexture *)dword_B43108;
  if ( !v25 )
  {
    if ( v23 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
        (**(void (__thiscall ***)(int, int))v23)(v23, 1);
      v22 = Stage;
    }
    *v24 = v22;
    if ( v22 )
      InterlockedIncrement((volatile LONG *)&v22->member);
  }
  Texture = v8->Stages.data[2].Texture;
  v27 = (NiRenderedTexture *)Texture->members.super.super.m_uiRefCount;
  v25 = v27 == CanopySadowMap;
  v28 = CanopySadowMap;
  Stage = CanopySadowMap;
  if ( !v25 )
  {
    if ( v27 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v27->member) )
        v27->__vftable->super.super.super.Destructor((NiRefObject *)v27, 1);
      v28 = Stage;
    }
    Texture->members.super.super.m_uiRefCount = (UInt32)v28;
    if ( v28 )
      InterlockedIncrement((volatile LONG *)&v28->member);
  }
  ++v8->RefCount;
  Stage = (NiRenderedTexture *)v8;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  v25 = v8->RefCount-- == 1;
  if ( v25 )
    sub_7604D0(v8);
  ++*((_DWORD *)this + 0xE);
}
