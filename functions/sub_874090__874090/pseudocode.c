void __thiscall sub_874090(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, _DWORD *a5)
{
  int v6; // edi
  NiD3DPass *v7; // esi
  _DWORD *v8; // ebx
  int v9; // edi
  int (__thiscall *v10)(_DWORD *, _DWORD); // eax
  int v11; // eax
  int v12; // edi
  int v13; // ebp
  int v14; // edi
  int v15; // eax
  int v16; // edi
  int v17; // ebp
  UInt32 v18; // ebp
  int v19; // eax
  int v20; // edi
  int v21; // ebx
  NiTexture *Texture; // edi
  UInt32 m_uiRefCount; // ebx
  int *p_members; // edi
  int v25; // ebp
  UInt32 Unk08; // edi
  int v27; // ebx
  int *v28; // edi
  int v29; // ebp
  UInt32 v30; // ebx
  NiRenderedTexture *v31; // edi
  NiRenderedTexture *v32; // ebp

  v6 = *(_DWORD *)(Stage + 0xC);
  v7 = (NiD3DPass *)dword_B47634;
  sub_848E50(v6);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0);
  v8 = a5;
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88);
  Stage = v7->Stages.data->Stage;
  v9 = Stage;
  v11 = v10(a5, 0);
  v12 = *(_DWORD *)(v9 + 4);
  v13 = v11;
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    *(_DWORD *)(Stage + 4) = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  Stage = (int)v7->Stages.data->Texture;
  v14 = Stage;
  v15 = sub_848FD0(v8, 0);
  v16 = *(_DWORD *)(v14 + 4);
  v17 = v15;
  if ( v16 != v15 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
        (**(void (__thiscall ***)(int, int))v16)(v16, 1);
    }
    *(_DWORD *)(Stage + 4) = v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)(v17 + 4));
  }
  v18 = v7->Stages.data[1].Stage;
  v19 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x90))(v8, 0);
  v20 = *(_DWORD *)(v18 + 4);
  v21 = v19;
  if ( v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        (**(void (__thiscall ***)(int, int))v20)(v20, 1);
    }
    *(_DWORD *)(v18 + 4) = v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)(v21 + 4));
  }
  Texture = v7->Stages.data[1].Texture;
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  p_members = (int *)&Texture->members;
  v25 = dword_B43110;
  if ( m_uiRefCount != dword_B43110 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    *p_members = v25;
    if ( v25 )
      InterlockedIncrement((volatile LONG *)(v25 + 4));
  }
  Unk08 = v7->Stages.data[1].Unk08;
  v27 = *(_DWORD *)(Unk08 + 4);
  v28 = (int *)(Unk08 + 4);
  v29 = dword_B43108;
  if ( v27 != dword_B43108 )
  {
    if ( v27 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) )
        (**(void (__thiscall ***)(int, int))v27)(v27, 1);
    }
    *v28 = v29;
    if ( v29 )
      InterlockedIncrement((volatile LONG *)(v29 + 4));
  }
  v30 = v7->Stages.data[2].Stage;
  v31 = *(NiRenderedTexture **)(v30 + 4);
  v32 = CanopySadowMap;
  if ( v31 != CanopySadowMap )
  {
    if ( v31 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v31->member) )
        v31->__vftable->super.super.super.Destructor((NiRefObject *)v31, 1);
    }
    *(_DWORD *)(v30 + 4) = v32;
    if ( v32 )
      InterlockedIncrement((volatile LONG *)&v32->member);
  }
  ++v7->RefCount;
  Stage = (int)v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v7->RefCount-- == 1 )
    sub_7604D0(v7);
  ++*((_DWORD *)this + 0xE);
}
