void __thiscall sub_877FF0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  NiD3DPass *v6; // edi
  float *v7; // ebp
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // ebp
  UInt32 Unk08; // ebx
  float v17; // eax
  int v18; // ebp
  float *v19; // ebx
  bool v20; // zf
  UInt32 v21; // ebx
  float v22; // eax
  int v23; // ebp
  float *v24; // ebx
  NiTexture *v25; // ebp
  volatile LONG *v26; // ebx
  float v27; // ecx
  UInt32 v28; // [esp+3Ch] [ebp+Ch]
  NiTexture *v29; // [esp+3Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B476B0; /*0x87801d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x878024*/
  v7 = *(float **)(a4 + 0xC); /*0x878029*/
  sub_848E50(v7); /*0x87802f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x878048*/
    this,
    a2,
    v7,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x878051*/
  v28 = Stage; /*0x87805d*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x878061*/
  v10 = *(_DWORD *)(Stage + 4); /*0x878063*/
  v11 = v9; /*0x878066*/
  if ( v10 != v9 ) /*0x87806a*/
  {
    if ( v10 ) /*0x87806e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x878074*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x87808a*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x878092*/
    if ( v11 ) /*0x878095*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x87809b*/
  }
  Texture = v6->Stages.data->Texture; /*0x8780a8*/
  v29 = Texture; /*0x8780b0*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x8780b4*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x8780b9*/
  v15 = v13; /*0x8780bc*/
  if ( m_uiRefCount != v13 ) /*0x8780c0*/
  {
    if ( m_uiRefCount ) /*0x8780c4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8780ca*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8780e0*/
    }
    v29->members.super.super.m_uiRefCount = v15; /*0x8780e8*/
    if ( v15 ) /*0x8780eb*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8780f1*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x8780fa*/
  v17 = flt_B43110[0]; /*0x8780fd*/
  v18 = *(_DWORD *)(Unk08 + 4); /*0x878102*/
  v19 = (float *)(Unk08 + 4); /*0x878105*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x878108*/
  value = flt_B43110[0]; /*0x87810a*/
  if ( !v20 ) /*0x87810e*/
  {
    if ( v18 ) /*0x878112*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x878118*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x87812f*/
      v17 = value; /*0x878131*/
    }
    *v19 = v17; /*0x878137*/
    if ( v17 != 0.0 ) /*0x878139*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87813f*/
  }
  v21 = v6->Stages.data[2].Stage; /*0x878148*/
  v22 = unk_B43108[0]; /*0x87814b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x878150*/
  v24 = (float *)(v21 + 4); /*0x878153*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x878156*/
  value = unk_B43108[0]; /*0x878158*/
  if ( !v20 ) /*0x87815c*/
  {
    if ( v23 ) /*0x878160*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x878166*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x87817d*/
      v22 = value; /*0x87817f*/
    }
    *v24 = v22; /*0x878185*/
    if ( v22 != 0.0 ) /*0x878187*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x87818d*/
  }
  v25 = v6->Stages.data[2].Texture; /*0x878196*/
  v26 = (volatile LONG *)v25->members.super.super.m_uiRefCount; /*0x87819e*/
  v20 = v26 == g_CanopyShadowMap; /*0x8781a1*/
  v27 = *(float *)&g_CanopyShadowMap; /*0x8781a3*/
  value = *(float *)&g_CanopyShadowMap; /*0x8781a5*/
  if ( !v20 ) /*0x8781a9*/
  {
    if ( v26 ) /*0x8781ad*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x8781b3*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x8781c9*/
      v27 = value; /*0x8781cb*/
    }
    *(float *)&v25->members.super.super.m_uiRefCount = v27; /*0x8781d1*/
    if ( v27 != 0.0 ) /*0x8781d4*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v27) + 4)); /*0x8781da*/
  }
  ++v6->RefCount; /*0x8781e5*/
  value = *(float *)&v6; /*0x8781e8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x878200*/
  v20 = v6->RefCount-- == 1; /*0x878208*/
  if ( v20 ) /*0x87820f*/
    NiD3DPass_ReleaseToPool(v6); /*0x878213*/
  ++*((_DWORD *)this + 0xE); /*0x878218*/
}
