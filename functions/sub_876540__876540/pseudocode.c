void __thiscall sub_876540(NiTArray_NiD3DPass *this, int a2, int a3, NiRenderedTexture *Stage, int *a5)
{
  int m_controller; // edi
  NiD3DPass *v7; // esi
  int *v8; // ebp
  NiRenderedTexture *v9; // edi
  int (__thiscall *v10)(int *, _DWORD); // eax
  int v11; // eax
  UInt32 m_uiRefCount; // edi
  NiRenderedTexture *v13; // edi
  int v14; // eax
  UInt32 v15; // edi
  int v16; // edx
  int v17; // eax
  UInt32 v18; // ebp
  UInt32 v19; // edi
  UInt32 v20; // edi
  int v21; // eax
  int v22; // ebp
  int *v23; // edi
  bool v24; // zf
  NiTexture *Texture; // edi
  NiRenderedTexture *v26; // ebp
  NiRenderedTexture *v27; // ecx
  int v28; // [esp+38h] [ebp+4h]
  int v29; // [esp+38h] [ebp+4h]

  m_controller = (int)Stage->member.super.super.m_controller;
  v7 = (NiD3DPass *)dword_B4767C;
  sub_848E50(m_controller);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0);
  v8 = a5;
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88);
  Stage = (NiRenderedTexture *)v7->Stages.data->Stage;
  v9 = Stage;
  v11 = v10(a5, 0);
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
  v16 = *v8;
  Stage = (NiRenderedTexture *)v7->Stages.data[1].Texture;
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0);
  v18 = Stage->member.super.super.super.m_uiRefCount;
  v19 = v17;
  if ( v18 != v17 )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v18)(v18, 1);
    }
    Stage->member.super.super.super.m_uiRefCount = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  v20 = v7->Stages.data[2].Stage;
  v21 = dword_B43108;
  v22 = *(_DWORD *)(v20 + 4);
  v23 = (int *)(v20 + 4);
  v24 = v22 == dword_B43108;
  Stage = (NiRenderedTexture *)dword_B43108;
  if ( !v24 )
  {
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
        (**(void (__thiscall ***)(int, int))v22)(v22, 1);
      v21 = (int)Stage;
    }
    *v23 = v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)(v21 + 4));
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
