void __thiscall sub_85D8A0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  float *v7; // ebx
  NiD3DPass *v8; // edi
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebp
  NiTexture *Texture; // ebp
  int v13; // eax
  UInt32 m_uiRefCount; // ebp
  UInt32 Unk08; // ebx
  float v16; // eax
  int v17; // ebp
  float *v18; // ebx
  UInt32 v19; // ebp
  volatile LONG *v20; // ebx
  volatile LONG *v21; // ecx
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]
  UInt32 v25; // [esp+38h] [ebp+Ch]
  NiTexture *v26; // [esp+38h] [ebp+Ch]
  float v27; // [esp+38h] [ebp+Ch]
  volatile LONG *v28; // [esp+38h] [ebp+Ch]

  v7 = *(float **)(a4 + 0xC); /*0x85d8ca*/
  v8 = (NiD3DPass *)unk_B477C4; /*0x85d8cd*/
  sub_848E50(v7); /*0x85d8d4*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x85d8eb*/
  Stage = v8->Stages.data->Stage; /*0x85d8f4*/
  v25 = Stage; /*0x85d902*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85d906*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85d908*/
  v23 = v10; /*0x85d90d*/
  if ( v11 != v10 ) /*0x85d911*/
  {
    if ( v11 ) /*0x85d915*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85d91b*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85d932*/
      v10 = v23; /*0x85d934*/
    }
    *(_DWORD *)(v25 + 4) = v10; /*0x85d93e*/
    if ( v10 ) /*0x85d941*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85d947*/
  }
  sub_848FA0((_DWORD **)v25, (int)a5); /*0x85d955*/
  Texture = v8->Stages.data->Texture; /*0x85d95d*/
  v26 = Texture; /*0x85d965*/
  v13 = sub_848FD0(a5, 0); /*0x85d969*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85d96e*/
  v24 = v13; /*0x85d973*/
  if ( m_uiRefCount != v13 ) /*0x85d977*/
  {
    if ( m_uiRefCount ) /*0x85d97b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85d981*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85d998*/
      v13 = v24; /*0x85d99a*/
    }
    v26->members.super.super.m_uiRefCount = v13; /*0x85d9a4*/
    if ( v13 ) /*0x85d9a7*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85d9ad*/
  }
  sub_848FA0(v26, (int)a5); /*0x85d9bb*/
  Unk08 = v8->Stages.data[1].Unk08; /*0x85d9c3*/
  v16 = unk_B43108[0]; /*0x85d9c6*/
  v17 = *(_DWORD *)(Unk08 + 4); /*0x85d9cb*/
  v18 = (float *)(Unk08 + 4); /*0x85d9ce*/
  v27 = unk_B43108[0]; /*0x85d9d3*/
  if ( v17 != LODWORD(unk_B43108[0]) ) /*0x85d9d7*/
  {
    if ( v17 ) /*0x85d9db*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x85d9e1*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x85d9f8*/
      v16 = v27; /*0x85d9fa*/
    }
    *v18 = v16; /*0x85da00*/
    if ( v16 != 0.0 ) /*0x85da02*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x85da08*/
  }
  v19 = v8->Stages.data[2].Stage; /*0x85da11*/
  v20 = *(volatile LONG **)(v19 + 4); /*0x85da19*/
  v21 = (volatile LONG *)g_CanopyShadowMap; /*0x85da1e*/
  v28 = (volatile LONG *)g_CanopyShadowMap; /*0x85da20*/
  if ( v20 != g_CanopyShadowMap ) /*0x85da24*/
  {
    if ( v20 ) /*0x85da28*/
    {
      if ( !InterlockedDecrement(v20 + 1) ) /*0x85da2e*/
        (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x85da44*/
      v21 = v28; /*0x85da46*/
    }
    *(_DWORD *)(v19 + 4) = v21; /*0x85da4c*/
    if ( v21 ) /*0x85da4f*/
      InterlockedIncrement(v21 + 1); /*0x85da55*/
  }
  if ( !(_BYTE)value ) /*0x85da60*/
  {
    ++v8->RefCount; /*0x85da67*/
    value = v8; /*0x85da6a*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85da82*/
    if ( v8->RefCount-- == 1 ) /*0x85da8a*/
      NiD3DPass_ReleaseToPool(v8); /*0x85da95*/
    ++*((_DWORD *)this + 0xE); /*0x85da9a*/
  }
}
