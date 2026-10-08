void __thiscall sub_877130(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
{
  float *v6; // edi
  NiD3DPass *v7; // esi
  _DWORD *v8; // ebx
  NiD3DPass *v9; // edi
  int (__thiscall *v10)(_DWORD *, _DWORD); // eax
  int v11; // eax
  int v12; // edi
  int v13; // ebp
  NiD3DPass *v14; // edi
  int v15; // eax
  int v16; // edi
  int v17; // ebp
  NiTexture *Texture; // ebp
  int v19; // eax
  UInt32 m_uiRefCount; // edi
  int v21; // ebx
  UInt32 Unk08; // edi
  int v23; // ebx
  float *v24; // edi
  float v25; // ebp
  UInt32 v26; // edi
  int v27; // ebx
  float *v28; // edi
  float v29; // ebp
  NiTexture *v30; // ebx
  volatile LONG *v31; // edi
  volatile LONG *v32; // ebp

  v6 = *(float **)&Stage->Name[8]; /*0x87715f*/
  v7 = (NiD3DPass *)unk_B47694; /*0x877162*/
  sub_848E50(v6); /*0x877169*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x877180*/
  v8 = a5; /*0x877185*/
  v10 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x87718d*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x877197*/
  v9 = Stage; /*0x877189*/
  v11 = v10(a5, 0); /*0x87719b*/
  v12 = *(_DWORD *)v9->Name; /*0x87719d*/
  v13 = v11; /*0x8771a0*/
  if ( v12 != v11 ) /*0x8771a4*/
  {
    if ( v12 ) /*0x8771a8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x8771ae*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x8771c4*/
    }
    *(_DWORD *)Stage->Name = v13; /*0x8771cc*/
    if ( v13 ) /*0x8771cf*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x8771d5*/
  }
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x8771e8*/
  v14 = Stage; /*0x8771de*/
  v15 = sub_848FD0(v8, 0); /*0x8771ec*/
  v16 = *(_DWORD *)v14->Name; /*0x8771f1*/
  v17 = v15; /*0x8771f4*/
  if ( v16 != v15 ) /*0x8771f8*/
  {
    if ( v16 ) /*0x8771fc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x877202*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x877218*/
    }
    *(_DWORD *)Stage->Name = v17; /*0x877220*/
    if ( v17 ) /*0x877223*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x877229*/
  }
  Texture = v7->Stages.data[1].Texture; /*0x877234*/
  v19 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x90))(v8, 0); /*0x877241*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x877243*/
  v21 = v19; /*0x877246*/
  if ( m_uiRefCount != v19 ) /*0x87724a*/
  {
    if ( m_uiRefCount ) /*0x87724e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x877254*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87726a*/
    }
    Texture->members.super.super.m_uiRefCount = v21; /*0x87726e*/
    if ( v21 ) /*0x877271*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x877277*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x877280*/
  v23 = *(_DWORD *)(Unk08 + 4); /*0x877288*/
  v24 = (float *)(Unk08 + 4); /*0x87728b*/
  v25 = flt_B43110[0]; /*0x877290*/
  if ( v23 != LODWORD(flt_B43110[0]) ) /*0x877292*/
  {
    if ( v23 ) /*0x877296*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x87729c*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x8772b2*/
    }
    *v24 = v25; /*0x8772b6*/
    if ( v25 != 0.0 ) /*0x8772b8*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v25) + 4)); /*0x8772be*/
  }
  v26 = v7->Stages.data[2].Stage; /*0x8772c7*/
  v27 = *(_DWORD *)(v26 + 4); /*0x8772cf*/
  v28 = (float *)(v26 + 4); /*0x8772d2*/
  v29 = unk_B43108[0]; /*0x8772d7*/
  if ( v27 != LODWORD(unk_B43108[0]) ) /*0x8772d9*/
  {
    if ( v27 ) /*0x8772dd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x8772e3*/
        (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x8772f9*/
    }
    *v28 = v29; /*0x8772fd*/
    if ( v29 != 0.0 ) /*0x8772ff*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v29) + 4)); /*0x877305*/
  }
  v30 = v7->Stages.data[2].Texture; /*0x87730e*/
  v31 = (volatile LONG *)v30->members.super.super.m_uiRefCount; /*0x877316*/
  v32 = (volatile LONG *)g_CanopyShadowMap; /*0x87731b*/
  if ( v31 != g_CanopyShadowMap ) /*0x87731d*/
  {
    if ( v31 ) /*0x877321*/
    {
      if ( !InterlockedDecrement(v31 + 1) ) /*0x877327*/
        (**(void (__thiscall ***)(void *, int))v31)((void *)v31, 1); /*0x87733d*/
    }
    v30->members.super.super.m_uiRefCount = (UInt32)v32; /*0x877341*/
    if ( v32 ) /*0x877344*/
      InterlockedIncrement(v32 + 1); /*0x87734a*/
  }
  ++v7->RefCount; /*0x877355*/
  Stage = v7; /*0x877358*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x877374*/
  if ( v7->RefCount-- == 1 ) /*0x87737c*/
    NiD3DPass_ReleaseToPool(v7); /*0x877387*/
  ++*((_DWORD *)this + 0xE); /*0x87738c*/
}
