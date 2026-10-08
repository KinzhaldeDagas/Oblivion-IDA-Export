void __thiscall sub_8738A0(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
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

  v6 = *(float **)(Stage + 0xC); /*0x8738ca*/
  v7 = (NiD3DPass *)unk_B47624; /*0x8738cd*/
  sub_848E50(v6); /*0x8738d4*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x8738eb*/
  v8 = a5; /*0x8738f0*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x8738f9*/
  Stage = v7->Stages.data->Stage; /*0x873903*/
  v9 = (NiD3DPass *)Stage; /*0x8738f4*/
  v11 = v10(a5, 0); /*0x873907*/
  v12 = *(_DWORD *)v9->Name; /*0x873909*/
  v24 = v11; /*0x87390e*/
  if ( v12 != v11 ) /*0x873912*/
  {
    if ( v12 ) /*0x873916*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x87391c*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x873932*/
      v11 = v24; /*0x873934*/
    }
    *(_DWORD *)(Stage + 4) = v11; /*0x87393e*/
    if ( v11 ) /*0x873941*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x873947*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x873958*/
  v13 = (NiD3DPass *)Stage; /*0x873950*/
  v14 = sub_848FD0(v8, 0); /*0x87395c*/
  v15 = *(_DWORD *)v13->Name; /*0x873961*/
  v25 = v14; /*0x873966*/
  if ( v15 != v14 ) /*0x87396a*/
  {
    if ( v15 ) /*0x87396e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x873974*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x87398a*/
      v14 = v25; /*0x87398c*/
    }
    *(_DWORD *)(Stage + 4) = v14; /*0x873996*/
    if ( v14 ) /*0x873999*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x87399f*/
  }
  v16 = *v8; /*0x8739ab*/
  Stage = v7->Stages.data[1].Stage; /*0x8739ae*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x8739bc*/
  v18 = *(_DWORD *)(Stage + 4); /*0x8739c2*/
  v19 = v17; /*0x8739c5*/
  if ( v18 != v17 ) /*0x8739c9*/
  {
    if ( v18 ) /*0x8739cd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x8739d3*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x8739ea*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x8739f2*/
    if ( v19 ) /*0x8739f5*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x8739fb*/
  }
  Texture = v7->Stages.data[1].Texture; /*0x873a04*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x873a0c*/
  v22 = m_uiRefCount == LODWORD(flt_B43110[0]); /*0x873a0f*/
  v23 = flt_B43110[0]; /*0x873a11*/
  Stage = LODWORD(flt_B43110[0]); /*0x873a13*/
  if ( !v22 ) /*0x873a17*/
  {
    if ( m_uiRefCount ) /*0x873a1b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x873a21*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x873a37*/
      v23 = *(float *)&Stage; /*0x873a39*/
    }
    *(float *)&Texture->members.super.super.m_uiRefCount = v23; /*0x873a3f*/
    if ( v23 != 0.0 ) /*0x873a42*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v23) + 4)); /*0x873a48*/
  }
  ++v7->RefCount; /*0x873a53*/
  Stage = (UInt32)v7; /*0x873a56*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x873a6e*/
  v22 = v7->RefCount-- == 1; /*0x873a76*/
  if ( v22 ) /*0x873a7d*/
    NiD3DPass_ReleaseToPool(v7); /*0x873a81*/
  ++*((_DWORD *)this + 0xE); /*0x873a86*/
}
