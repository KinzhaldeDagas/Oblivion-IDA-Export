void __thiscall sub_83E390(NiTArray_NiD3DPass *this, int a2, int a3, NiRenderedTexture *Stage, _DWORD *a5)
{
  int m_controller; // esi
  NiD3DPass *v7; // ebx
  _DWORD *v8; // esi
  NiRenderedTexture *v9; // ebp
  int (__thiscall *v10)(_DWORD *, _DWORD); // eax
  int v11; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v13; // ebp
  int v14; // eax
  UInt32 v15; // ebp
  NiRenderedTexture *v16; // ebp
  int (__thiscall *v17)(_DWORD *, int); // eax
  int v18; // eax
  UInt32 v19; // ebp
  UInt32 v20; // esi
  NiRenderedTexture *v21; // eax
  int v22; // ebp
  NiRenderedTexture **v23; // esi
  bool v24; // zf
  NiTexture *Texture; // ebp
  NiRenderedTexture *v26; // esi
  NiRenderedTexture *v27; // ecx
  int v28; // [esp+38h] [ebp+4h]
  int v29; // [esp+38h] [ebp+4h]
  int v30; // [esp+38h] [ebp+4h]

  m_controller = (int)Stage->member.super.super.m_controller;
  v7 = (NiD3DPass *)dword_B4584C;
  sub_848E50(m_controller);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0);
  v8 = a5;
  dword_B46628 = a5[0x2A];
  dword_B4662C = v8[0x2B];
  dword_B46630 = v8[0x2C];
  dword_B46634 = v8[0x2D];
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x88);
  Stage = (NiRenderedTexture *)v7->Stages.data->Stage;
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
  Stage = (NiRenderedTexture *)v7->Stages.data->Texture;
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
  Stage = (NiRenderedTexture *)v7->Stages.data[1].Texture;
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
  v20 = v7->Stages.data[2].Stage;
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
  Texture = v7->Stages.data[2].Texture;
  v26 = (NiRenderedTexture *)Texture->members.super.super.m_uiRefCount;
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
    Texture->members.super.super.m_uiRefCount = (UInt32)v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)&v27->member);
  }
  ++v7->RefCount;
  Stage = (NiRenderedTexture *)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  v24 = v7->RefCount-- == 1;
  if ( v24 )
    sub_7604D0(v7);
  ++*((_DWORD *)this + 0xE);
}
