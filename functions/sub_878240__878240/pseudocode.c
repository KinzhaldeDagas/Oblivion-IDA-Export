void __thiscall sub_878240(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
{
  NiD3DPass *v6; // ebp
  float *v7; // edi
  NiD3DPass *v8; // esi
  _DWORD *v9; // ebx
  NiD3DPass *v10; // edi
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  NiD3DPass *v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  NiTexture *Texture; // ebp
  int v20; // eax
  UInt32 m_uiRefCount; // edi
  int v22; // ebx
  UInt32 Unk08; // edi
  int v24; // ebx
  float *v25; // edi
  float v26; // ebp
  UInt32 v27; // edi
  int v28; // ebx
  float *v29; // edi
  float v30; // ebp
  NiTexture *v31; // ebx
  volatile LONG *v32; // edi
  volatile LONG *v33; // ebp

  v6 = Stage; /*0x87826b*/
  v7 = *(float **)&Stage->Name[8]; /*0x87826f*/
  v8 = (NiD3DPass *)unk_B476B4; /*0x878272*/
  sub_848E50(v7); /*0x878279*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x878292*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x878297*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x87829f*/
  Stage = (NiD3DPass *)v8->Stages.data->Stage; /*0x8782a9*/
  v10 = Stage; /*0x87829b*/
  v12 = v11(a5, 0); /*0x8782ad*/
  v13 = *(_DWORD *)v10->Name; /*0x8782af*/
  v14 = v12; /*0x8782b2*/
  if ( v13 != v12 ) /*0x8782b6*/
  {
    if ( v13 ) /*0x8782ba*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x8782c0*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x8782d6*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x8782de*/
    if ( v14 ) /*0x8782e1*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x8782e7*/
  }
  Stage = (NiD3DPass *)v8->Stages.data->Texture; /*0x8782fa*/
  v15 = Stage; /*0x8782f0*/
  v16 = sub_848FD0(v9, 0); /*0x8782fe*/
  v17 = *(_DWORD *)v15->Name; /*0x878303*/
  v18 = v16; /*0x878306*/
  if ( v17 != v16 ) /*0x87830a*/
  {
    if ( v17 ) /*0x87830e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x878314*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x87832a*/
    }
    *(_DWORD *)Stage->Name = v18; /*0x878332*/
    if ( v18 ) /*0x878335*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x87833b*/
  }
  Texture = v8->Stages.data[1].Texture; /*0x878346*/
  v20 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90))(v9, 0); /*0x878353*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x878355*/
  v22 = v20; /*0x878358*/
  if ( m_uiRefCount != v20 ) /*0x87835c*/
  {
    if ( m_uiRefCount ) /*0x878360*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x878366*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87837c*/
    }
    Texture->members.super.super.m_uiRefCount = v22; /*0x878380*/
    if ( v22 ) /*0x878383*/
      InterlockedIncrement((volatile LONG *)(v22 + 4)); /*0x878389*/
  }
  Unk08 = v8->Stages.data[1].Unk08; /*0x878392*/
  v24 = *(_DWORD *)(Unk08 + 4); /*0x87839a*/
  v25 = (float *)(Unk08 + 4); /*0x87839d*/
  v26 = flt_B43110[0]; /*0x8783a2*/
  if ( v24 != LODWORD(flt_B43110[0]) ) /*0x8783a4*/
  {
    if ( v24 ) /*0x8783a8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x8783ae*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x8783c4*/
    }
    *v25 = v26; /*0x8783c8*/
    if ( v26 != 0.0 ) /*0x8783ca*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v26) + 4)); /*0x8783d0*/
  }
  v27 = v8->Stages.data[2].Stage; /*0x8783d9*/
  v28 = *(_DWORD *)(v27 + 4); /*0x8783e1*/
  v29 = (float *)(v27 + 4); /*0x8783e4*/
  v30 = unk_B43108[0]; /*0x8783e9*/
  if ( v28 != LODWORD(unk_B43108[0]) ) /*0x8783eb*/
  {
    if ( v28 ) /*0x8783ef*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v28 + 4)) ) /*0x8783f5*/
        (**(void (__thiscall ***)(int, int))v28)(v28, 1); /*0x87840b*/
    }
    *v29 = v30; /*0x87840f*/
    if ( v30 != 0.0 ) /*0x878411*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v30) + 4)); /*0x878417*/
  }
  v31 = v8->Stages.data[2].Texture; /*0x878420*/
  v32 = (volatile LONG *)v31->members.super.super.m_uiRefCount; /*0x878428*/
  v33 = (volatile LONG *)g_CanopyShadowMap; /*0x87842d*/
  if ( v32 != g_CanopyShadowMap ) /*0x87842f*/
  {
    if ( v32 ) /*0x878433*/
    {
      if ( !InterlockedDecrement(v32 + 1) ) /*0x878439*/
        (**(void (__thiscall ***)(void *, int))v32)((void *)v32, 1); /*0x87844f*/
    }
    v31->members.super.super.m_uiRefCount = (UInt32)v33; /*0x878453*/
    if ( v33 ) /*0x878456*/
      InterlockedIncrement(v33 + 1); /*0x87845c*/
  }
  ++v8->RefCount; /*0x878467*/
  Stage = v8; /*0x87846a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x878486*/
  if ( v8->RefCount-- == 1 ) /*0x87848e*/
    NiD3DPass_ReleaseToPool(v8); /*0x878499*/
  ++*((_DWORD *)this + 0xE); /*0x87849e*/
}
