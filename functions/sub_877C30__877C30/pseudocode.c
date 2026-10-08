void __thiscall sub_877C30(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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
  UInt32 Unk08; // ebp
  int v17; // ebx
  bool v18; // zf
  float v19; // ecx
  UInt32 v20; // [esp+34h] [ebp+Ch]
  NiTexture *v21; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B476A8; /*0x877c5d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x877c64*/
  v7 = *(float **)(a4 + 0xC); /*0x877c69*/
  sub_848E50(v7); /*0x877c6f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x877c88*/
    this,
    a2,
    v7,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x877c91*/
  v20 = Stage; /*0x877c9d*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x877ca1*/
  v10 = *(_DWORD *)(Stage + 4); /*0x877ca3*/
  v11 = v9; /*0x877ca6*/
  if ( v10 != v9 ) /*0x877caa*/
  {
    if ( v10 ) /*0x877cae*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x877cb4*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x877cca*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x877cd2*/
    if ( v11 ) /*0x877cd5*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x877cdb*/
  }
  Texture = v6->Stages.data->Texture; /*0x877ce8*/
  v21 = Texture; /*0x877cf0*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x877cf4*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x877cf9*/
  v15 = v13; /*0x877cfc*/
  if ( m_uiRefCount != v13 ) /*0x877d00*/
  {
    if ( m_uiRefCount ) /*0x877d04*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x877d0a*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x877d20*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x877d28*/
    if ( v15 ) /*0x877d2b*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x877d31*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x877d3a*/
  v17 = *(_DWORD *)(Unk08 + 4); /*0x877d42*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x877d45*/
  v19 = flt_B43110[0]; /*0x877d47*/
  value = flt_B43110[0]; /*0x877d49*/
  if ( !v18 ) /*0x877d4d*/
  {
    if ( v17 ) /*0x877d51*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x877d57*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x877d6d*/
      v19 = value; /*0x877d6f*/
    }
    *(float *)(Unk08 + 4) = v19; /*0x877d75*/
    if ( v19 != 0.0 ) /*0x877d78*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x877d7e*/
  }
  ++v6->RefCount; /*0x877d89*/
  value = *(float *)&v6; /*0x877d8c*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x877da4*/
  v18 = v6->RefCount-- == 1; /*0x877dac*/
  if ( v18 ) /*0x877db3*/
    NiD3DPass_ReleaseToPool(v6); /*0x877db7*/
  ++*((_DWORD *)this + 0xE); /*0x877dbc*/
}
