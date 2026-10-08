void __thiscall sub_874980(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
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

  v6 = *(float **)(Stage + 0xC); /*0x8749aa*/
  v7 = (NiD3DPass *)unk_B47644; /*0x8749ad*/
  sub_848E50(v6); /*0x8749b4*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x8749cb*/
  v8 = a5; /*0x8749d0*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x8749d9*/
  Stage = v7->Stages.data->Stage; /*0x8749e3*/
  v9 = (NiD3DPass *)Stage; /*0x8749d4*/
  v11 = v10(a5, 0); /*0x8749e7*/
  v12 = *(_DWORD *)v9->Name; /*0x8749e9*/
  v24 = v11; /*0x8749ee*/
  if ( v12 != v11 ) /*0x8749f2*/
  {
    if ( v12 ) /*0x8749f6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x8749fc*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x874a12*/
      v11 = v24; /*0x874a14*/
    }
    *(_DWORD *)(Stage + 4) = v11; /*0x874a1e*/
    if ( v11 ) /*0x874a21*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x874a27*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x874a38*/
  v13 = (NiD3DPass *)Stage; /*0x874a30*/
  v14 = sub_848FD0(v8, 0); /*0x874a3c*/
  v15 = *(_DWORD *)v13->Name; /*0x874a41*/
  v25 = v14; /*0x874a46*/
  if ( v15 != v14 ) /*0x874a4a*/
  {
    if ( v15 ) /*0x874a4e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x874a54*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x874a6a*/
      v14 = v25; /*0x874a6c*/
    }
    *(_DWORD *)(Stage + 4) = v14; /*0x874a76*/
    if ( v14 ) /*0x874a79*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x874a7f*/
  }
  v16 = *v8; /*0x874a8b*/
  Stage = v7->Stages.data[1].Stage; /*0x874a8e*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x874a9c*/
  v18 = *(_DWORD *)(Stage + 4); /*0x874aa2*/
  v19 = v17; /*0x874aa5*/
  if ( v18 != v17 ) /*0x874aa9*/
  {
    if ( v18 ) /*0x874aad*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x874ab3*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x874aca*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x874ad2*/
    if ( v19 ) /*0x874ad5*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x874adb*/
  }
  Texture = v7->Stages.data[1].Texture; /*0x874ae4*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x874aec*/
  v22 = m_uiRefCount == LODWORD(flt_B43110[0]); /*0x874aef*/
  v23 = flt_B43110[0]; /*0x874af1*/
  Stage = LODWORD(flt_B43110[0]); /*0x874af3*/
  if ( !v22 ) /*0x874af7*/
  {
    if ( m_uiRefCount ) /*0x874afb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x874b01*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x874b17*/
      v23 = *(float *)&Stage; /*0x874b19*/
    }
    *(float *)&Texture->members.super.super.m_uiRefCount = v23; /*0x874b1f*/
    if ( v23 != 0.0 ) /*0x874b22*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v23) + 4)); /*0x874b28*/
  }
  ++v7->RefCount; /*0x874b33*/
  Stage = (UInt32)v7; /*0x874b36*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x874b4e*/
  v22 = v7->RefCount-- == 1; /*0x874b56*/
  if ( v22 ) /*0x874b5d*/
    NiD3DPass_ReleaseToPool(v7); /*0x874b61*/
  ++*((_DWORD *)this + 0xE); /*0x874b66*/
}
