void __thiscall sub_8747D0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B47640; /*0x8747fd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x874804*/
  v7 = *(float **)(a4 + 0xC); /*0x874809*/
  sub_848E50(v7); /*0x87480f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x874826*/
  Stage = v6->Stages.data->Stage; /*0x87482f*/
  v20 = Stage; /*0x87483b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87483f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x874841*/
  v11 = v9; /*0x874844*/
  if ( v10 != v9 ) /*0x874848*/
  {
    if ( v10 ) /*0x87484c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x874852*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x874868*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x874870*/
    if ( v11 ) /*0x874873*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x874879*/
  }
  Texture = v6->Stages.data->Texture; /*0x874886*/
  v21 = Texture; /*0x87488e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x874892*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x874897*/
  v15 = v13; /*0x87489a*/
  if ( m_uiRefCount != v13 ) /*0x87489e*/
  {
    if ( m_uiRefCount ) /*0x8748a2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8748a8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8748be*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x8748c6*/
    if ( v15 ) /*0x8748c9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8748cf*/
  }
  v16 = v6->Stages.data[1].Texture; /*0x8748d8*/
  v17 = v16->members.super.super.m_uiRefCount; /*0x8748e0*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x8748e3*/
  v19 = flt_B43110[0]; /*0x8748e5*/
  value = flt_B43110[0]; /*0x8748e7*/
  if ( !v18 ) /*0x8748eb*/
  {
    if ( v17 ) /*0x8748ef*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x8748f5*/
        (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1); /*0x87490b*/
      v19 = value; /*0x87490d*/
    }
    *(float *)&v16->members.super.super.m_uiRefCount = v19; /*0x874913*/
    if ( v19 != 0.0 ) /*0x874916*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x87491c*/
  }
  ++v6->RefCount; /*0x874927*/
  value = *(float *)&v6; /*0x87492a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x874942*/
  v18 = v6->RefCount-- == 1; /*0x87494a*/
  if ( v18 ) /*0x874951*/
    NiD3DPass_ReleaseToPool(v6); /*0x874955*/
  ++*((_DWORD *)this + 0xE); /*0x87495a*/
}
