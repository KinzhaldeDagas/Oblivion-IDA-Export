void __thiscall sub_85DC50(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
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

  v7 = (NiD3DPass *)unk_B477E4; /*0x85dc7d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x85dc84*/
  v8 = *(float **)(a4 + 0xC); /*0x85dc89*/
  sub_848E50(v8); /*0x85dc8f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x85dca8*/
    this,
    a2,
    v8,
    *(_DWORD *)(a4 + 0x10));
  Stage = v7->Stages.data->Stage; /*0x85dcb1*/
  v25 = Stage; /*0x85dcbf*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85dcc3*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85dcc5*/
  v23 = v10; /*0x85dcca*/
  if ( v11 != v10 ) /*0x85dcce*/
  {
    if ( v11 ) /*0x85dcd2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85dcd8*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85dcef*/
      v10 = v23; /*0x85dcf1*/
    }
    *(_DWORD *)(v25 + 4) = v10; /*0x85dcfb*/
    if ( v10 ) /*0x85dcfe*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85dd04*/
  }
  sub_848FA0((_DWORD **)v25, (int)a5); /*0x85dd12*/
  Texture = v7->Stages.data->Texture; /*0x85dd1a*/
  v26 = Texture; /*0x85dd22*/
  v13 = sub_848FD0(a5, 0); /*0x85dd26*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85dd2b*/
  v24 = v13; /*0x85dd30*/
  if ( m_uiRefCount != v13 ) /*0x85dd34*/
  {
    if ( m_uiRefCount ) /*0x85dd38*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85dd3e*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85dd55*/
      v13 = v24; /*0x85dd57*/
    }
    v26->members.super.super.m_uiRefCount = v13; /*0x85dd61*/
    if ( v13 ) /*0x85dd64*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85dd6a*/
  }
  sub_848FA0(v26, (int)a5); /*0x85dd78*/
  v15 = v7->Stages.data[2].Stage; /*0x85dd80*/
  v16 = unk_B43108[0]; /*0x85dd83*/
  v17 = *(_DWORD *)(v15 + 4); /*0x85dd88*/
  v18 = (float *)(v15 + 4); /*0x85dd8b*/
  v27 = unk_B43108[0]; /*0x85dd90*/
  if ( v17 != LODWORD(unk_B43108[0]) ) /*0x85dd94*/
  {
    if ( v17 ) /*0x85dd98*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x85dd9e*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x85ddb5*/
      v16 = v27; /*0x85ddb7*/
    }
    *v18 = v16; /*0x85ddbd*/
    if ( v16 != 0.0 ) /*0x85ddbf*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x85ddc5*/
  }
  v19 = v7->Stages.data[2].Texture; /*0x85ddce*/
  v20 = (volatile LONG *)v19->members.super.super.m_uiRefCount; /*0x85ddd6*/
  v21 = (volatile LONG *)g_CanopyShadowMap; /*0x85dddb*/
  v28 = (volatile LONG *)g_CanopyShadowMap; /*0x85dddd*/
  if ( v20 != g_CanopyShadowMap ) /*0x85dde1*/
  {
    if ( v20 ) /*0x85dde5*/
    {
      if ( !InterlockedDecrement(v20 + 1) ) /*0x85ddeb*/
        (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x85de01*/
      v21 = v28; /*0x85de03*/
    }
    v19->members.super.super.m_uiRefCount = (UInt32)v21; /*0x85de09*/
    if ( v21 ) /*0x85de0c*/
      InterlockedIncrement(v21 + 1); /*0x85de12*/
  }
  if ( !(_BYTE)value ) /*0x85de1d*/
  {
    ++v7->RefCount; /*0x85de24*/
    value = v7; /*0x85de27*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85de3f*/
    if ( v7->RefCount-- == 1 ) /*0x85de47*/
      NiD3DPass_ReleaseToPool(v7); /*0x85de52*/
    ++*((_DWORD *)this + 0xE); /*0x85de57*/
  }
}
