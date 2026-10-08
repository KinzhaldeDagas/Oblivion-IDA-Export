void __thiscall sub_85CDB0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // edi
  float *v8; // ebx
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

  v7 = (NiD3DPass *)unk_B477D4; /*0x85cddd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x85cde4*/
  v8 = *(float **)(a4 + 0xC); /*0x85cde9*/
  sub_848E50(v8); /*0x85cdef*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x85ce06*/
  Stage = v7->Stages.data->Stage; /*0x85ce0f*/
  v25 = Stage; /*0x85ce1d*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85ce21*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85ce23*/
  v23 = v10; /*0x85ce28*/
  if ( v11 != v10 ) /*0x85ce2c*/
  {
    if ( v11 ) /*0x85ce30*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85ce36*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85ce4d*/
      v10 = v23; /*0x85ce4f*/
    }
    *(_DWORD *)(v25 + 4) = v10; /*0x85ce59*/
    if ( v10 ) /*0x85ce5c*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85ce62*/
  }
  sub_848FA0((_DWORD **)v25, (int)a5); /*0x85ce70*/
  Texture = v7->Stages.data->Texture; /*0x85ce78*/
  v26 = Texture; /*0x85ce80*/
  v13 = sub_848FD0(a5, 0); /*0x85ce84*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85ce89*/
  v24 = v13; /*0x85ce8e*/
  if ( m_uiRefCount != v13 ) /*0x85ce92*/
  {
    if ( m_uiRefCount ) /*0x85ce96*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85ce9c*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85ceb3*/
      v13 = v24; /*0x85ceb5*/
    }
    v26->members.super.super.m_uiRefCount = v13; /*0x85cebf*/
    if ( v13 ) /*0x85cec2*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85cec8*/
  }
  sub_848FA0(v26, (int)a5); /*0x85ced6*/
  v15 = v7->Stages.data[2].Stage; /*0x85cede*/
  v16 = unk_B43108[0]; /*0x85cee1*/
  v17 = *(_DWORD *)(v15 + 4); /*0x85cee6*/
  v18 = (float *)(v15 + 4); /*0x85cee9*/
  v27 = unk_B43108[0]; /*0x85ceee*/
  if ( v17 != LODWORD(unk_B43108[0]) ) /*0x85cef2*/
  {
    if ( v17 ) /*0x85cef6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x85cefc*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x85cf13*/
      v16 = v27; /*0x85cf15*/
    }
    *v18 = v16; /*0x85cf1b*/
    if ( v16 != 0.0 ) /*0x85cf1d*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x85cf23*/
  }
  v19 = v7->Stages.data[2].Texture; /*0x85cf2c*/
  v20 = (volatile LONG *)v19->members.super.super.m_uiRefCount; /*0x85cf34*/
  v21 = (volatile LONG *)g_CanopyShadowMap; /*0x85cf39*/
  v28 = (volatile LONG *)g_CanopyShadowMap; /*0x85cf3b*/
  if ( v20 != g_CanopyShadowMap ) /*0x85cf3f*/
  {
    if ( v20 ) /*0x85cf43*/
    {
      if ( !InterlockedDecrement(v20 + 1) ) /*0x85cf49*/
        (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x85cf5f*/
      v21 = v28; /*0x85cf61*/
    }
    v19->members.super.super.m_uiRefCount = (UInt32)v21; /*0x85cf67*/
    if ( v21 ) /*0x85cf6a*/
      InterlockedIncrement(v21 + 1); /*0x85cf70*/
  }
  if ( !(_BYTE)value ) /*0x85cf7b*/
  {
    ++v7->RefCount; /*0x85cf82*/
    value = v7; /*0x85cf85*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85cf9d*/
    if ( v7->RefCount-- == 1 ) /*0x85cfa5*/
      NiD3DPass_ReleaseToPool(v7); /*0x85cfb0*/
    ++*((_DWORD *)this + 0xE); /*0x85cfb5*/
  }
}
