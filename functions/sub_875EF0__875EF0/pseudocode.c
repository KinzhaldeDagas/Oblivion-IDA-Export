void __thiscall sub_875EF0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  NiD3DPass *v6; // edi
  float *v7; // ebx
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // ebp
  UInt32 v16; // ebp
  float v17; // eax
  int v18; // ebx
  float *v19; // ebp
  bool v20; // zf
  NiTexture *v21; // ebp
  volatile LONG *v22; // ebx
  float v23; // ecx
  UInt32 v24; // [esp+38h] [ebp+Ch]
  NiTexture *v25; // [esp+38h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B47670; /*0x875f1d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x875f24*/
  v7 = *(float **)(a4 + 0xC); /*0x875f29*/
  sub_848E50(v7); /*0x875f2f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x875f46*/
  Stage = v6->Stages.data->Stage; /*0x875f4f*/
  v24 = Stage; /*0x875f5b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x875f5f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x875f61*/
  v11 = v9; /*0x875f64*/
  if ( v10 != v9 ) /*0x875f68*/
  {
    if ( v10 ) /*0x875f6c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x875f72*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x875f88*/
    }
    *(_DWORD *)(v24 + 4) = v11; /*0x875f90*/
    if ( v11 ) /*0x875f93*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x875f99*/
  }
  Texture = v6->Stages.data->Texture; /*0x875fa6*/
  v25 = Texture; /*0x875fae*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x875fb2*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x875fb7*/
  v15 = v13; /*0x875fba*/
  if ( m_uiRefCount != v13 ) /*0x875fbe*/
  {
    if ( m_uiRefCount ) /*0x875fc2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x875fc8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x875fde*/
    }
    v25->members.super.super.m_uiRefCount = v15; /*0x875fe6*/
    if ( v15 ) /*0x875fe9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x875fef*/
  }
  v16 = v6->Stages.data[2].Stage; /*0x875ff8*/
  v17 = unk_B43108[0]; /*0x875ffb*/
  v18 = *(_DWORD *)(v16 + 4); /*0x876000*/
  v19 = (float *)(v16 + 4); /*0x876003*/
  v20 = v18 == LODWORD(unk_B43108[0]); /*0x876006*/
  value = unk_B43108[0]; /*0x876008*/
  if ( !v20 ) /*0x87600c*/
  {
    if ( v18 ) /*0x876010*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x876016*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x87602c*/
      v17 = value; /*0x87602e*/
    }
    *v19 = v17; /*0x876034*/
    if ( v17 != 0.0 ) /*0x876037*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87603d*/
  }
  v21 = v6->Stages.data[2].Texture; /*0x876046*/
  v22 = (volatile LONG *)v21->members.super.super.m_uiRefCount; /*0x87604e*/
  v20 = v22 == g_CanopyShadowMap; /*0x876051*/
  v23 = *(float *)&g_CanopyShadowMap; /*0x876053*/
  value = *(float *)&g_CanopyShadowMap; /*0x876055*/
  if ( !v20 ) /*0x876059*/
  {
    if ( v22 ) /*0x87605d*/
    {
      if ( !InterlockedDecrement(v22 + 1) ) /*0x876063*/
        (**(void (__thiscall ***)(void *, int))v22)((void *)v22, 1); /*0x876079*/
      v23 = value; /*0x87607b*/
    }
    *(float *)&v21->members.super.super.m_uiRefCount = v23; /*0x876081*/
    if ( v23 != 0.0 ) /*0x876084*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v23) + 4)); /*0x87608a*/
  }
  ++v6->RefCount; /*0x876095*/
  value = *(float *)&v6; /*0x876098*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8760b0*/
  v20 = v6->RefCount-- == 1; /*0x8760b8*/
  if ( v20 ) /*0x8760bf*/
    NiD3DPass_ReleaseToPool(v6); /*0x8760c3*/
  ++*((_DWORD *)this + 0xE); /*0x8760c8*/
}
