void __thiscall sub_85CA00(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
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

  v7 = (NiD3DPass *)unk_B477CC; /*0x85ca2d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x85ca34*/
  v8 = *(float **)(a4 + 0xC); /*0x85ca39*/
  sub_848E50(v8); /*0x85ca3f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x85ca56*/
  Stage = v7->Stages.data->Stage; /*0x85ca5f*/
  v25 = Stage; /*0x85ca6d*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85ca71*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85ca73*/
  v23 = v10; /*0x85ca78*/
  if ( v11 != v10 ) /*0x85ca7c*/
  {
    if ( v11 ) /*0x85ca80*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85ca86*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85ca9d*/
      v10 = v23; /*0x85ca9f*/
    }
    *(_DWORD *)(v25 + 4) = v10; /*0x85caa9*/
    if ( v10 ) /*0x85caac*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85cab2*/
  }
  sub_848FA0((_DWORD **)v25, (int)a5); /*0x85cac0*/
  Texture = v7->Stages.data->Texture; /*0x85cac8*/
  v26 = Texture; /*0x85cad0*/
  v13 = sub_848FD0(a5, 0); /*0x85cad4*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85cad9*/
  v24 = v13; /*0x85cade*/
  if ( m_uiRefCount != v13 ) /*0x85cae2*/
  {
    if ( m_uiRefCount ) /*0x85cae6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85caec*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85cb03*/
      v13 = v24; /*0x85cb05*/
    }
    v26->members.super.super.m_uiRefCount = v13; /*0x85cb0f*/
    if ( v13 ) /*0x85cb12*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85cb18*/
  }
  sub_848FA0(v26, (int)a5); /*0x85cb26*/
  v15 = v7->Stages.data[2].Stage; /*0x85cb2e*/
  v16 = unk_B43108[0]; /*0x85cb31*/
  v17 = *(_DWORD *)(v15 + 4); /*0x85cb36*/
  v18 = (float *)(v15 + 4); /*0x85cb39*/
  v27 = unk_B43108[0]; /*0x85cb3e*/
  if ( v17 != LODWORD(unk_B43108[0]) ) /*0x85cb42*/
  {
    if ( v17 ) /*0x85cb46*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x85cb4c*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x85cb63*/
      v16 = v27; /*0x85cb65*/
    }
    *v18 = v16; /*0x85cb6b*/
    if ( v16 != 0.0 ) /*0x85cb6d*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x85cb73*/
  }
  v19 = v7->Stages.data[2].Texture; /*0x85cb7c*/
  v20 = (volatile LONG *)v19->members.super.super.m_uiRefCount; /*0x85cb84*/
  v21 = (volatile LONG *)g_CanopyShadowMap; /*0x85cb89*/
  v28 = (volatile LONG *)g_CanopyShadowMap; /*0x85cb8b*/
  if ( v20 != g_CanopyShadowMap ) /*0x85cb8f*/
  {
    if ( v20 ) /*0x85cb93*/
    {
      if ( !InterlockedDecrement(v20 + 1) ) /*0x85cb99*/
        (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x85cbaf*/
      v21 = v28; /*0x85cbb1*/
    }
    v19->members.super.super.m_uiRefCount = (UInt32)v21; /*0x85cbb7*/
    if ( v21 ) /*0x85cbba*/
      InterlockedIncrement(v21 + 1); /*0x85cbc0*/
  }
  if ( !(_BYTE)value ) /*0x85cbcb*/
  {
    ++v7->RefCount; /*0x85cbd2*/
    value = v7; /*0x85cbd5*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85cbed*/
    if ( v7->RefCount-- == 1 ) /*0x85cbf5*/
      NiD3DPass_ReleaseToPool(v7); /*0x85cc00*/
    ++*((_DWORD *)this + 0xE); /*0x85cc05*/
  }
}
