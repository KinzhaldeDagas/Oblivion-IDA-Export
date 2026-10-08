void __thiscall sub_873C50(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
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

  v6 = *(float **)(Stage + 0xC); /*0x873c7a*/
  v7 = (NiD3DPass *)unk_B4762C; /*0x873c7d*/
  sub_848E50(v6); /*0x873c84*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x873c9b*/
  v8 = a5; /*0x873ca0*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x873ca9*/
  Stage = v7->Stages.data->Stage; /*0x873cb3*/
  v9 = (NiD3DPass *)Stage; /*0x873ca4*/
  v11 = v10(a5, 0); /*0x873cb7*/
  v12 = *(_DWORD *)v9->Name; /*0x873cb9*/
  v24 = v11; /*0x873cbe*/
  if ( v12 != v11 ) /*0x873cc2*/
  {
    if ( v12 ) /*0x873cc6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x873ccc*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x873ce2*/
      v11 = v24; /*0x873ce4*/
    }
    *(_DWORD *)(Stage + 4) = v11; /*0x873cee*/
    if ( v11 ) /*0x873cf1*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x873cf7*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x873d08*/
  v13 = (NiD3DPass *)Stage; /*0x873d00*/
  v14 = sub_848FD0(v8, 0); /*0x873d0c*/
  v15 = *(_DWORD *)v13->Name; /*0x873d11*/
  v25 = v14; /*0x873d16*/
  if ( v15 != v14 ) /*0x873d1a*/
  {
    if ( v15 ) /*0x873d1e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x873d24*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x873d3a*/
      v14 = v25; /*0x873d3c*/
    }
    *(_DWORD *)(Stage + 4) = v14; /*0x873d46*/
    if ( v14 ) /*0x873d49*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x873d4f*/
  }
  v16 = *v8; /*0x873d5b*/
  Stage = v7->Stages.data[1].Stage; /*0x873d5e*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x873d6c*/
  v18 = *(_DWORD *)(Stage + 4); /*0x873d72*/
  v19 = v17; /*0x873d75*/
  if ( v18 != v17 ) /*0x873d79*/
  {
    if ( v18 ) /*0x873d7d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x873d83*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x873d9a*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x873da2*/
    if ( v19 ) /*0x873da5*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x873dab*/
  }
  Texture = v7->Stages.data[1].Texture; /*0x873db4*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x873dbc*/
  v22 = m_uiRefCount == LODWORD(flt_B43110[0]); /*0x873dbf*/
  v23 = flt_B43110[0]; /*0x873dc1*/
  Stage = LODWORD(flt_B43110[0]); /*0x873dc3*/
  if ( !v22 ) /*0x873dc7*/
  {
    if ( m_uiRefCount ) /*0x873dcb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x873dd1*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x873de7*/
      v23 = *(float *)&Stage; /*0x873de9*/
    }
    *(float *)&Texture->members.super.super.m_uiRefCount = v23; /*0x873def*/
    if ( v23 != 0.0 ) /*0x873df2*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v23) + 4)); /*0x873df8*/
  }
  ++v7->RefCount; /*0x873e03*/
  Stage = (UInt32)v7; /*0x873e06*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x873e1e*/
  v22 = v7->RefCount-- == 1; /*0x873e26*/
  if ( v22 ) /*0x873e2d*/
    NiD3DPass_ReleaseToPool(v7); /*0x873e31*/
  ++*((_DWORD *)this + 0xE); /*0x873e36*/
}
