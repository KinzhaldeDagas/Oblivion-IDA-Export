void __thiscall sub_879830(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  int v6; // ebp
  int v7; // edi
  NiD3DPass *v8; // esi
  _DWORD *v9; // ebx
  int v10; // edi
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  NiTexture *Texture; // ebp
  int v20; // eax
  UInt32 m_uiRefCount; // edi
  int v22; // ebx
  UInt32 Unk08; // edi
  int v24; // ebx
  int *v25; // edi
  int v26; // ebp
  UInt32 v27; // edi
  int v28; // ebx
  int *v29; // edi
  int v30; // ebp
  NiTexture *v31; // ebx
  NiRenderedTexture *v32; // edi
  NiRenderedTexture *v33; // ebp

  v6 = Stage;
  v7 = *(_DWORD *)(Stage + 0xC);
  v8 = (NiD3DPass *)dword_B476DC;
  sub_848E50(v7);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    v7,
    *(_DWORD *)(v6 + 0x10));
  v9 = a5;
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88);
  Stage = v8->Stages.data->Stage;
  v10 = Stage;
  v12 = v11(a5, 0);
  v13 = *(_DWORD *)(v10 + 4);
  v14 = v12;
  if ( v13 != v12 )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    }
    *(_DWORD *)(Stage + 4) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  Stage = (int)v8->Stages.data->Texture;
  v15 = Stage;
  v16 = sub_848FD0(v9, 0);
  v17 = *(_DWORD *)(v15 + 4);
  v18 = v16;
  if ( v17 != v16 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    }
    *(_DWORD *)(Stage + 4) = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  Texture = v8->Stages.data[1].Texture;
  v20 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90))(v9, 0);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v22 = v20;
  if ( m_uiRefCount != v20 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    Texture->members.super.super.m_uiRefCount = v22;
    if ( v22 )
      InterlockedIncrement((volatile LONG *)(v22 + 4));
  }
  Unk08 = v8->Stages.data[1].Unk08;
  v24 = *(_DWORD *)(Unk08 + 4);
  v25 = (int *)(Unk08 + 4);
  v26 = dword_B43110;
  if ( v24 != dword_B43110 )
  {
    if ( v24 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) )
        (**(void (__thiscall ***)(int, int))v24)(v24, 1);
    }
    *v25 = v26;
    if ( v26 )
      InterlockedIncrement((volatile LONG *)(v26 + 4));
  }
  v27 = v8->Stages.data[2].Stage;
  v28 = *(_DWORD *)(v27 + 4);
  v29 = (int *)(v27 + 4);
  v30 = dword_B43108;
  if ( v28 != dword_B43108 )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v28 + 4)) )
        (**(void (__thiscall ***)(int, int))v28)(v28, 1);
    }
    *v29 = v30;
    if ( v30 )
      InterlockedIncrement((volatile LONG *)(v30 + 4));
  }
  v31 = v8->Stages.data[2].Texture;
  v32 = (NiRenderedTexture *)v31->members.super.super.m_uiRefCount;
  v33 = CanopySadowMap;
  if ( v32 != CanopySadowMap )
  {
    if ( v32 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v32->member) )
        v32->__vftable->super.super.super.Destructor((NiRefObject *)v32, 1);
    }
    v31->members.super.super.m_uiRefCount = (UInt32)v33;
    if ( v33 )
      InterlockedIncrement((volatile LONG *)&v33->member);
  }
  ++v8->RefCount;
  Stage = (int)v8;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v8->RefCount-- == 1 )
    sub_7604D0(v8);
  ++*((_DWORD *)this + 0xE);
}
