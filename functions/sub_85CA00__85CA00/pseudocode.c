void __thiscall sub_85CA00(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v7; // edi
  int v8; // ebx
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebp
  NiTexture *Texture; // ebp
  int v13; // eax
  UInt32 m_uiRefCount; // ebp
  UInt32 v15; // ebx
  int v16; // eax
  int v17; // ebp
  int *v18; // ebx
  NiTexture *v19; // ebp
  NiRenderedTexture *v20; // ebx
  NiRenderedTexture *v21; // ecx
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]
  UInt32 v25; // [esp+38h] [ebp+Ch]
  NiTexture *v26; // [esp+38h] [ebp+Ch]
  int v27; // [esp+38h] [ebp+Ch]
  NiRenderedTexture *v28; // [esp+38h] [ebp+Ch]

  v7 = (NiD3DPass *)dword_B477CC;
  sub_848C40(*(float **)(a4 + 0x10));
  v8 = *(_DWORD *)(a4 + 0xC);
  sub_848E50(v8);
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, int, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0);
  Stage = v7->Stages.data->Stage;
  v25 = Stage;
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0);
  v11 = *(_DWORD *)(Stage + 4);
  v23 = v10;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      v10 = v23;
    }
    *(_DWORD *)(v25 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_848FA0((_DWORD **)v25, (int)a5);
  Texture = v7->Stages.data->Texture;
  v26 = Texture;
  v13 = sub_848FD0(a5, 0);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v24 = v13;
  if ( m_uiRefCount != v13 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v13 = v24;
    }
    v26->members.super.super.m_uiRefCount = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  sub_848FA0(v26, (int)a5);
  v15 = v7->Stages.data[2].Stage;
  v16 = dword_B43108;
  v17 = *(_DWORD *)(v15 + 4);
  v18 = (int *)(v15 + 4);
  v27 = dword_B43108;
  if ( v17 != dword_B43108 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
      v16 = v27;
    }
    *v18 = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  v19 = v7->Stages.data[2].Texture;
  v20 = (NiRenderedTexture *)v19->members.super.super.m_uiRefCount;
  v21 = CanopySadowMap;
  v28 = CanopySadowMap;
  if ( v20 != CanopySadowMap )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v20->member) )
        v20->__vftable->super.super.super.Destructor((NiRefObject *)v20, 1);
      v21 = v28;
    }
    v19->members.super.super.m_uiRefCount = (UInt32)v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)&v21->member);
  }
  if ( !(_BYTE)a6 )
  {
    ++v7->RefCount;
    a6 = v7;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v7->RefCount-- == 1 )
      sub_7604D0(v7);
    ++*((_DWORD *)this + 0xE);
  }
}
