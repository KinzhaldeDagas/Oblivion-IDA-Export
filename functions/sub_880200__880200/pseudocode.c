void __thiscall SkinShader_QueueSKIN2012_SKIN2006(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  NiD3DPass *v6; // edi
  float *v7; // ebx
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // ebp
  NiTexture *v16; // ebp
  UInt32 v17; // ebx
  bool v18; // zf
  float v19; // ecx
  UInt32 v20; // [esp+34h] [ebp+Ch]
  NiTexture *v21; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B47728; /*0x88022d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x880234*/
  v7 = *(float **)(a4 + 0xC); /*0x880239*/
  sub_848E50(v7); /*0x88023f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x880256*/
  Stage = v6->Stages.data->Stage; /*0x88025f*/
  v20 = Stage; /*0x88026b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x88026f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x880271*/
  v11 = v9; /*0x880274*/
  if ( v10 != v9 ) /*0x880278*/
  {
    if ( v10 ) /*0x88027c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x880282*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x880298*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x8802a0*/
    if ( v11 ) /*0x8802a3*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8802a9*/
  }
  Texture = v6->Stages.data->Texture; /*0x8802b6*/
  v21 = Texture; /*0x8802be*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x8802c2*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x8802c7*/
  v15 = v13; /*0x8802ca*/
  if ( m_uiRefCount != v13 ) /*0x8802ce*/
  {
    if ( m_uiRefCount ) /*0x8802d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8802d8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8802ee*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x8802f6*/
    if ( v15 ) /*0x8802f9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8802ff*/
  }
  v16 = v6->Stages.data[1].Texture; /*0x880308*/
  v17 = v16->members.super.super.m_uiRefCount; /*0x880310*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x880313*/
  v19 = flt_B43110[0]; /*0x880315*/
  value = flt_B43110[0]; /*0x880317*/
  if ( !v18 ) /*0x88031b*/
  {
    if ( v17 ) /*0x88031f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x880325*/
        (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1); /*0x88033b*/
      v19 = value; /*0x88033d*/
    }
    *(float *)&v16->members.super.super.m_uiRefCount = v19; /*0x880343*/
    if ( v19 != 0.0 ) /*0x880346*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x88034c*/
  }
  ++v6->RefCount; /*0x880357*/
  value = *(float *)&v6; /*0x88035a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x880372*/
  v18 = v6->RefCount-- == 1; /*0x88037a*/
  if ( v18 ) /*0x880381*/
    NiD3DPass_ReleaseToPool(v6); /*0x880385*/
  ++*((_DWORD *)this + 0xE); /*0x88038a*/
}
