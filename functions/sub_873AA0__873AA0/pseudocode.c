void __thiscall sub_873AA0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B47628; /*0x873acd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x873ad4*/
  v7 = *(float **)(a4 + 0xC); /*0x873ad9*/
  sub_848E50(v7); /*0x873adf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x873af6*/
  Stage = v6->Stages.data->Stage; /*0x873aff*/
  v20 = Stage; /*0x873b0b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x873b0f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x873b11*/
  v11 = v9; /*0x873b14*/
  if ( v10 != v9 ) /*0x873b18*/
  {
    if ( v10 ) /*0x873b1c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x873b22*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x873b38*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x873b40*/
    if ( v11 ) /*0x873b43*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x873b49*/
  }
  Texture = v6->Stages.data->Texture; /*0x873b56*/
  v21 = Texture; /*0x873b5e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x873b62*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x873b67*/
  v15 = v13; /*0x873b6a*/
  if ( m_uiRefCount != v13 ) /*0x873b6e*/
  {
    if ( m_uiRefCount ) /*0x873b72*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x873b78*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x873b8e*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x873b96*/
    if ( v15 ) /*0x873b99*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x873b9f*/
  }
  v16 = v6->Stages.data[1].Texture; /*0x873ba8*/
  v17 = v16->members.super.super.m_uiRefCount; /*0x873bb0*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x873bb3*/
  v19 = flt_B43110[0]; /*0x873bb5*/
  value = flt_B43110[0]; /*0x873bb7*/
  if ( !v18 ) /*0x873bbb*/
  {
    if ( v17 ) /*0x873bbf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x873bc5*/
        (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1); /*0x873bdb*/
      v19 = value; /*0x873bdd*/
    }
    *(float *)&v16->members.super.super.m_uiRefCount = v19; /*0x873be3*/
    if ( v19 != 0.0 ) /*0x873be6*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x873bec*/
  }
  ++v6->RefCount; /*0x873bf7*/
  value = *(float *)&v6; /*0x873bfa*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x873c12*/
  v18 = v6->RefCount-- == 1; /*0x873c1a*/
  if ( v18 ) /*0x873c21*/
    NiD3DPass_ReleaseToPool(v6); /*0x873c25*/
  ++*((_DWORD *)this + 0xE); /*0x873c2a*/
}
