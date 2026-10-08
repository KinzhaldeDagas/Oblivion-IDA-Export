void __thiscall sub_881880(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, _DWORD *a5)
{
  float v6; // ebx
  NiD3DPass *v7; // esi
  float *v8; // ebx
  _DWORD *v9; // ebp
  float v10; // ebx
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebx
  float v14; // ebx
  int v15; // eax
  int v16; // ebx
  float v17; // ebx
  int (__thiscall *v18)(_DWORD *, int); // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebp
  int v23; // ebx
  UInt32 Unk08; // ebp
  float v25; // eax
  int v26; // ebx
  float *v27; // ebp
  bool v28; // zf
  UInt32 v29; // ebp
  float v30; // eax
  int v31; // ebx
  float *v32; // ebp
  NiTexture *Texture; // ebp
  volatile LONG *m_uiRefCount; // ebx
  float v35; // ecx
  int v36; // [esp+40h] [ebp+4h]
  int v37; // [esp+40h] [ebp+4h]
  int v38; // [esp+40h] [ebp+4h]

  v6 = *(float *)&Stage; /*0x8818a6*/
  v7 = dword_B47750; /*0x8818ad*/
  sub_848C40(*(float **)(Stage + 0x10)); /*0x8818b4*/
  v8 = *(float **)(LODWORD(v6) + 0xC); /*0x8818b9*/
  sub_848E50(v8); /*0x8818bf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x8818d6*/
  v9 = a5; /*0x8818db*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8818e4*/
  Stage = v7->Stages.data->Stage; /*0x8818ee*/
  v10 = *(float *)&Stage; /*0x8818df*/
  v12 = v11(a5, 0); /*0x8818f2*/
  v13 = *(_DWORD *)(LODWORD(v10) + 4); /*0x8818f4*/
  v36 = v12; /*0x8818f9*/
  if ( v13 != v12 ) /*0x8818fd*/
  {
    if ( v13 ) /*0x881901*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x881907*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x88191d*/
      v12 = v36; /*0x88191f*/
    }
    *(_DWORD *)(Stage + 4) = v12; /*0x881929*/
    if ( v12 ) /*0x88192c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x881932*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x881943*/
  v14 = *(float *)&Stage; /*0x88193b*/
  v15 = sub_848FD0(v9, 0); /*0x881947*/
  v16 = *(_DWORD *)(LODWORD(v14) + 4); /*0x88194c*/
  v37 = v15; /*0x881951*/
  if ( v16 != v15 ) /*0x881955*/
  {
    if ( v16 ) /*0x881959*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x88195f*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x881975*/
      v15 = v37; /*0x881977*/
    }
    *(_DWORD *)(Stage + 4) = v15; /*0x881981*/
    if ( v15 ) /*0x881984*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x88198a*/
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88); /*0x881999*/
  Stage = v7->Stages.data->Unk08; /*0x8819a3*/
  v17 = *(float *)&Stage; /*0x881993*/
  v19 = v18(v9, 1); /*0x8819a7*/
  v20 = *(_DWORD *)(LODWORD(v17) + 4); /*0x8819a9*/
  v38 = v19; /*0x8819ae*/
  if ( v20 != v19 ) /*0x8819b2*/
  {
    if ( v20 ) /*0x8819b6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x8819bc*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x8819d2*/
      v19 = v38; /*0x8819d4*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x8819de*/
    if ( v19 ) /*0x8819e1*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x8819e7*/
  }
  Stage = v7->Stages.data[1].Stage; /*0x8819f8*/
  v21 = sub_848FD0(v9, 1); /*0x8819fc*/
  v22 = *(_DWORD *)(Stage + 4); /*0x881a05*/
  v23 = v21; /*0x881a08*/
  if ( v22 != v21 ) /*0x881a0c*/
  {
    if ( v22 ) /*0x881a10*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x881a16*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x881a2d*/
    }
    *(_DWORD *)(Stage + 4) = v23; /*0x881a35*/
    if ( v23 ) /*0x881a38*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x881a3e*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x881a47*/
  v25 = flt_B43110[0]; /*0x881a4a*/
  v26 = *(_DWORD *)(Unk08 + 4); /*0x881a4f*/
  v27 = (float *)(Unk08 + 4); /*0x881a52*/
  v28 = v26 == LODWORD(flt_B43110[0]); /*0x881a55*/
  Stage = LODWORD(flt_B43110[0]); /*0x881a57*/
  if ( !v28 ) /*0x881a5b*/
  {
    if ( v26 ) /*0x881a5f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x881a65*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x881a7b*/
      v25 = *(float *)&Stage; /*0x881a7d*/
    }
    *v27 = v25; /*0x881a83*/
    if ( v25 != 0.0 ) /*0x881a86*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v25) + 4)); /*0x881a8c*/
  }
  v29 = v7->Stages.data[2].Stage; /*0x881a95*/
  v30 = unk_B43108[0]; /*0x881a98*/
  v31 = *(_DWORD *)(v29 + 4); /*0x881a9d*/
  v32 = (float *)(v29 + 4); /*0x881aa0*/
  v28 = v31 == LODWORD(unk_B43108[0]); /*0x881aa3*/
  Stage = LODWORD(unk_B43108[0]); /*0x881aa5*/
  if ( !v28 ) /*0x881aa9*/
  {
    if ( v31 ) /*0x881aad*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) ) /*0x881ab3*/
        (**(void (__thiscall ***)(int, int))v31)(v31, 1); /*0x881ac9*/
      v30 = *(float *)&Stage; /*0x881acb*/
    }
    *v32 = v30; /*0x881ad1*/
    if ( v30 != 0.0 ) /*0x881ad4*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v30) + 4)); /*0x881ada*/
  }
  Texture = v7->Stages.data[2].Texture; /*0x881ae3*/
  m_uiRefCount = (volatile LONG *)Texture->members.super.super.m_uiRefCount; /*0x881aeb*/
  v28 = m_uiRefCount == g_CanopyShadowMap; /*0x881aee*/
  v35 = *(float *)&g_CanopyShadowMap; /*0x881af0*/
  Stage = (UInt32)g_CanopyShadowMap; /*0x881af2*/
  if ( !v28 ) /*0x881af6*/
  {
    if ( m_uiRefCount ) /*0x881afa*/
    {
      if ( !InterlockedDecrement(m_uiRefCount + 1) ) /*0x881b00*/
        (**(void (__thiscall ***)(void *, int))m_uiRefCount)((void *)m_uiRefCount, 1); /*0x881b16*/
      v35 = *(float *)&Stage; /*0x881b18*/
    }
    *(float *)&Texture->members.super.super.m_uiRefCount = v35; /*0x881b1e*/
    if ( v35 != 0.0 ) /*0x881b21*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v35) + 4)); /*0x881b27*/
  }
  ++v7->RefCount; /*0x881b32*/
  Stage = (UInt32)v7; /*0x881b35*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x881b4d*/
  v28 = v7->RefCount-- == 1; /*0x881b55*/
  if ( v28 ) /*0x881b5c*/
    NiD3DPass_ReleaseToPool(v7); /*0x881b60*/
  ++*((_DWORD *)this + 0xE); /*0x881b65*/
}
