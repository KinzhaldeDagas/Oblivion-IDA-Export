void __thiscall sub_874D30(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
{
  float *v6; // ebx
  NiD3DPass *v7; // esi
  int *v8; // ebp
  NiD3DPass *v9; // ebx
  int (__thiscall *v10)(int *, _DWORD); // eax
  int v11; // eax
  int v12; // ebx
  NiD3DPass *v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // ebp
  int v19; // ebx
  NiTexture *Texture; // ebp
  UInt32 m_uiRefCount; // ebx
  bool v22; // zf
  float v23; // ecx
  int v24; // [esp+34h] [ebp+4h]
  int v25; // [esp+34h] [ebp+4h]

  v6 = *(float **)(Stage + 0xC); /*0x874d5a*/
  v7 = (NiD3DPass *)unk_B4764C; /*0x874d5d*/
  sub_848E50(v6); /*0x874d64*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x874d7b*/
  v8 = a5; /*0x874d80*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x874d89*/
  Stage = v7->Stages.data->Stage; /*0x874d93*/
  v9 = (NiD3DPass *)Stage; /*0x874d84*/
  v11 = v10(a5, 0); /*0x874d97*/
  v12 = *(_DWORD *)v9->Name; /*0x874d99*/
  v24 = v11; /*0x874d9e*/
  if ( v12 != v11 ) /*0x874da2*/
  {
    if ( v12 ) /*0x874da6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x874dac*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x874dc2*/
      v11 = v24; /*0x874dc4*/
    }
    *(_DWORD *)(Stage + 4) = v11; /*0x874dce*/
    if ( v11 ) /*0x874dd1*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x874dd7*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x874de8*/
  v13 = (NiD3DPass *)Stage; /*0x874de0*/
  v14 = sub_848FD0(v8, 0); /*0x874dec*/
  v15 = *(_DWORD *)v13->Name; /*0x874df1*/
  v25 = v14; /*0x874df6*/
  if ( v15 != v14 ) /*0x874dfa*/
  {
    if ( v15 ) /*0x874dfe*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x874e04*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x874e1a*/
      v14 = v25; /*0x874e1c*/
    }
    *(_DWORD *)(Stage + 4) = v14; /*0x874e26*/
    if ( v14 ) /*0x874e29*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x874e2f*/
  }
  v16 = *v8; /*0x874e3b*/
  Stage = v7->Stages.data[1].Stage; /*0x874e3e*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x874e4c*/
  v18 = *(_DWORD *)(Stage + 4); /*0x874e52*/
  v19 = v17; /*0x874e55*/
  if ( v18 != v17 ) /*0x874e59*/
  {
    if ( v18 ) /*0x874e5d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x874e63*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x874e7a*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x874e82*/
    if ( v19 ) /*0x874e85*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x874e8b*/
  }
  Texture = v7->Stages.data[1].Texture; /*0x874e94*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x874e9c*/
  v22 = m_uiRefCount == LODWORD(flt_B43110[0]); /*0x874e9f*/
  v23 = flt_B43110[0]; /*0x874ea1*/
  Stage = LODWORD(flt_B43110[0]); /*0x874ea3*/
  if ( !v22 ) /*0x874ea7*/
  {
    if ( m_uiRefCount ) /*0x874eab*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x874eb1*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x874ec7*/
      v23 = *(float *)&Stage; /*0x874ec9*/
    }
    *(float *)&Texture->members.super.super.m_uiRefCount = v23; /*0x874ecf*/
    if ( v23 != 0.0 ) /*0x874ed2*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v23) + 4)); /*0x874ed8*/
  }
  ++v7->RefCount; /*0x874ee3*/
  Stage = (UInt32)v7; /*0x874ee6*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x874efe*/
  v22 = v7->RefCount-- == 1; /*0x874f06*/
  if ( v22 ) /*0x874f0d*/
    NiD3DPass_ReleaseToPool(v7); /*0x874f11*/
  ++*((_DWORD *)this + 0xE); /*0x874f16*/
}
