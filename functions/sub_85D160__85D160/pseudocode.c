void __thiscall sub_85D160(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // edi
  float *v8; // ebp
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebp
  NiTexture *Texture; // ebp
  int v13; // eax
  UInt32 m_uiRefCount; // ebp
  UInt32 v15; // ebx
  float v16; // eax
  int v17; // ebp
  float *v18; // ebx
  NiTexture *v19; // ebp
  volatile LONG *v20; // ebx
  volatile LONG *v21; // ecx
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]
  UInt32 v25; // [esp+38h] [ebp+Ch]
  NiTexture *v26; // [esp+38h] [ebp+Ch]
  float v27; // [esp+38h] [ebp+Ch]
  volatile LONG *v28; // [esp+38h] [ebp+Ch]

  v7 = (NiD3DPass *)unk_B477DC; /*0x85d18d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x85d194*/
  v8 = *(float **)(a4 + 0xC); /*0x85d199*/
  sub_848E50(v8); /*0x85d19f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x85d1b8*/
    this,
    a2,
    v8,
    *(_DWORD *)(a4 + 0x10));
  Stage = v7->Stages.data->Stage; /*0x85d1c1*/
  v25 = Stage; /*0x85d1cf*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85d1d3*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85d1d5*/
  v23 = v10; /*0x85d1da*/
  if ( v11 != v10 ) /*0x85d1de*/
  {
    if ( v11 ) /*0x85d1e2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85d1e8*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85d1ff*/
      v10 = v23; /*0x85d201*/
    }
    *(_DWORD *)(v25 + 4) = v10; /*0x85d20b*/
    if ( v10 ) /*0x85d20e*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85d214*/
  }
  sub_848FA0((_DWORD **)v25, (int)a5); /*0x85d222*/
  Texture = v7->Stages.data->Texture; /*0x85d22a*/
  v26 = Texture; /*0x85d232*/
  v13 = sub_848FD0(a5, 0); /*0x85d236*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85d23b*/
  v24 = v13; /*0x85d240*/
  if ( m_uiRefCount != v13 ) /*0x85d244*/
  {
    if ( m_uiRefCount ) /*0x85d248*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85d24e*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85d265*/
      v13 = v24; /*0x85d267*/
    }
    v26->members.super.super.m_uiRefCount = v13; /*0x85d271*/
    if ( v13 ) /*0x85d274*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85d27a*/
  }
  sub_848FA0(v26, (int)a5); /*0x85d288*/
  v15 = v7->Stages.data[2].Stage; /*0x85d290*/
  v16 = unk_B43108[0]; /*0x85d293*/
  v17 = *(_DWORD *)(v15 + 4); /*0x85d298*/
  v18 = (float *)(v15 + 4); /*0x85d29b*/
  v27 = unk_B43108[0]; /*0x85d2a0*/
  if ( v17 != LODWORD(unk_B43108[0]) ) /*0x85d2a4*/
  {
    if ( v17 ) /*0x85d2a8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x85d2ae*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x85d2c5*/
      v16 = v27; /*0x85d2c7*/
    }
    *v18 = v16; /*0x85d2cd*/
    if ( v16 != 0.0 ) /*0x85d2cf*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x85d2d5*/
  }
  v19 = v7->Stages.data[2].Texture; /*0x85d2de*/
  v20 = (volatile LONG *)v19->members.super.super.m_uiRefCount; /*0x85d2e6*/
  v21 = (volatile LONG *)g_CanopyShadowMap; /*0x85d2eb*/
  v28 = (volatile LONG *)g_CanopyShadowMap; /*0x85d2ed*/
  if ( v20 != g_CanopyShadowMap ) /*0x85d2f1*/
  {
    if ( v20 ) /*0x85d2f5*/
    {
      if ( !InterlockedDecrement(v20 + 1) ) /*0x85d2fb*/
        (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x85d311*/
      v21 = v28; /*0x85d313*/
    }
    v19->members.super.super.m_uiRefCount = (UInt32)v21; /*0x85d319*/
    if ( v21 ) /*0x85d31c*/
      InterlockedIncrement(v21 + 1); /*0x85d322*/
  }
  if ( !(_BYTE)value ) /*0x85d32d*/
  {
    ++v7->RefCount; /*0x85d334*/
    value = v7; /*0x85d337*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85d34f*/
    if ( v7->RefCount-- == 1 ) /*0x85d357*/
      NiD3DPass_ReleaseToPool(v7); /*0x85d362*/
    ++*((_DWORD *)this + 0xE); /*0x85d367*/
  }
}
