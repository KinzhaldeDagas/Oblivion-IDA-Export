void __thiscall sub_87A570(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  NiD3DPass *v6; // esi
  UInt32 Stage; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  NiTexture *Texture; // edi
  int v12; // eax
  UInt32 m_uiRefCount; // edi
  int v14; // ebp
  NiTexture *v15; // ebp
  float v16; // eax
  UInt32 v17; // edi
  float *p_m_uiRefCount; // ebp
  bool v19; // zf
  UInt32 Unk08; // ebp
  volatile LONG *v21; // edi
  float v22; // ecx
  UInt32 v23; // [esp+38h] [ebp+Ch]
  NiTexture *v24; // [esp+38h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B47700; /*0x87a5a5*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x87a5b3*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x87a5bc*/
  v23 = Stage; /*0x87a5c3*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x87a5c7*/
  v9 = *(_DWORD *)(Stage + 4); /*0x87a5cc*/
  v10 = v8; /*0x87a5cf*/
  if ( v9 != v8 ) /*0x87a5d3*/
  {
    if ( v9 ) /*0x87a5d7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x87a5dd*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x87a5f3*/
    }
    *(_DWORD *)(v23 + 4) = v10; /*0x87a5fb*/
    if ( v10 ) /*0x87a5fe*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x87a604*/
  }
  Texture = v6->Stages.data->Texture; /*0x87a60d*/
  v24 = Texture; /*0x87a61e*/
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87a622*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x87a624*/
  v14 = v12; /*0x87a627*/
  if ( m_uiRefCount != v12 ) /*0x87a62b*/
  {
    if ( m_uiRefCount ) /*0x87a62f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87a635*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87a64b*/
    }
    v24->members.super.super.m_uiRefCount = v14; /*0x87a653*/
    if ( v14 ) /*0x87a656*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x87a65c*/
  }
  v15 = v6->Stages.data[1].Texture; /*0x87a665*/
  v16 = unk_B43108[0]; /*0x87a668*/
  v17 = v15->members.super.super.m_uiRefCount; /*0x87a66d*/
  p_m_uiRefCount = (float *)&v15->members.super.super.m_uiRefCount; /*0x87a670*/
  v19 = v17 == LODWORD(unk_B43108[0]); /*0x87a673*/
  value = unk_B43108[0]; /*0x87a675*/
  if ( !v19 ) /*0x87a679*/
  {
    if ( v17 ) /*0x87a67d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x87a683*/
        (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1); /*0x87a699*/
      v16 = value; /*0x87a69b*/
    }
    *p_m_uiRefCount = v16; /*0x87a6a1*/
    if ( v16 != 0.0 ) /*0x87a6a4*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x87a6aa*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x87a6b3*/
  v21 = *(volatile LONG **)(Unk08 + 4); /*0x87a6bb*/
  v19 = v21 == g_CanopyShadowMap; /*0x87a6be*/
  v22 = *(float *)&g_CanopyShadowMap; /*0x87a6c0*/
  value = *(float *)&g_CanopyShadowMap; /*0x87a6c2*/
  if ( !v19 ) /*0x87a6c6*/
  {
    if ( v21 ) /*0x87a6ca*/
    {
      if ( !InterlockedDecrement(v21 + 1) ) /*0x87a6d0*/
        (**(void (__thiscall ***)(void *, int))v21)((void *)v21, 1); /*0x87a6e6*/
      v22 = value; /*0x87a6e8*/
    }
    *(float *)(Unk08 + 4) = v22; /*0x87a6ee*/
    if ( v22 != 0.0 ) /*0x87a6f1*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x87a6f7*/
  }
  ++v6->RefCount; /*0x87a702*/
  value = *(float *)&v6; /*0x87a705*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87a71d*/
  v19 = v6->RefCount-- == 1; /*0x87a725*/
  if ( v19 ) /*0x87a72c*/
    NiD3DPass_ReleaseToPool(v6); /*0x87a730*/
  ++*((_DWORD *)this + 0xE); /*0x87a735*/
}
