void __thiscall sub_85D500(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
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

  v7 = *(float **)(a4 + 0xC); /*0x85d52a*/
  v8 = (NiD3DPass *)unk_B477BC; /*0x85d52d*/
  sub_848E50(v7); /*0x85d534*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x85d54b*/
  Stage = v8->Stages.data->Stage; /*0x85d554*/
  v25 = Stage; /*0x85d562*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85d566*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85d568*/
  v23 = v10; /*0x85d56d*/
  if ( v11 != v10 ) /*0x85d571*/
  {
    if ( v11 ) /*0x85d575*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85d57b*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85d592*/
      v10 = v23; /*0x85d594*/
    }
    *(_DWORD *)(v25 + 4) = v10; /*0x85d59e*/
    if ( v10 ) /*0x85d5a1*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85d5a7*/
  }
  sub_848FA0((_DWORD **)v25, (int)a5); /*0x85d5b5*/
  Texture = v8->Stages.data->Texture; /*0x85d5bd*/
  v26 = Texture; /*0x85d5c5*/
  v13 = sub_848FD0(a5, 0); /*0x85d5c9*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85d5ce*/
  v24 = v13; /*0x85d5d3*/
  if ( m_uiRefCount != v13 ) /*0x85d5d7*/
  {
    if ( m_uiRefCount ) /*0x85d5db*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85d5e1*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85d5f8*/
      v13 = v24; /*0x85d5fa*/
    }
    v26->members.super.super.m_uiRefCount = v13; /*0x85d604*/
    if ( v13 ) /*0x85d607*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85d60d*/
  }
  sub_848FA0(v26, (int)a5); /*0x85d61b*/
  Unk08 = v8->Stages.data[1].Unk08; /*0x85d623*/
  v16 = unk_B43108[0]; /*0x85d626*/
  v17 = *(_DWORD *)(Unk08 + 4); /*0x85d62b*/
  v18 = (float *)(Unk08 + 4); /*0x85d62e*/
  v27 = unk_B43108[0]; /*0x85d633*/
  if ( v17 != LODWORD(unk_B43108[0]) ) /*0x85d637*/
  {
    if ( v17 ) /*0x85d63b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x85d641*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x85d658*/
      v16 = v27; /*0x85d65a*/
    }
    *v18 = v16; /*0x85d660*/
    if ( v16 != 0.0 ) /*0x85d662*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x85d668*/
  }
  v19 = v8->Stages.data[2].Stage; /*0x85d671*/
  v20 = *(volatile LONG **)(v19 + 4); /*0x85d679*/
  v21 = (volatile LONG *)g_CanopyShadowMap; /*0x85d67e*/
  v28 = (volatile LONG *)g_CanopyShadowMap; /*0x85d680*/
  if ( v20 != g_CanopyShadowMap ) /*0x85d684*/
  {
    if ( v20 ) /*0x85d688*/
    {
      if ( !InterlockedDecrement(v20 + 1) ) /*0x85d68e*/
        (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x85d6a4*/
      v21 = v28; /*0x85d6a6*/
    }
    *(_DWORD *)(v19 + 4) = v21; /*0x85d6ac*/
    if ( v21 ) /*0x85d6af*/
      InterlockedIncrement(v21 + 1); /*0x85d6b5*/
  }
  if ( !(_BYTE)value ) /*0x85d6c0*/
  {
    ++v8->RefCount; /*0x85d6c7*/
    value = v8; /*0x85d6ca*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85d6e2*/
    if ( v8->RefCount-- == 1 ) /*0x85d6ea*/
      NiD3DPass_ReleaseToPool(v8); /*0x85d6f5*/
    ++*((_DWORD *)this + 0xE); /*0x85d6fa*/
  }
}
