void __thiscall sub_876940(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
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
  UInt32 Unk08; // ebp
  int v21; // ebx
  bool v22; // zf
  float v23; // ecx
  int v24; // [esp+34h] [ebp+4h]
  int v25; // [esp+34h] [ebp+4h]

  v6 = *(float **)(Stage + 0xC); /*0x87696a*/
  v7 = (NiD3DPass *)unk_B47684; /*0x87696d*/
  sub_848E50(v6); /*0x876974*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x87698b*/
  v8 = a5; /*0x876990*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x876999*/
  Stage = v7->Stages.data->Stage; /*0x8769a3*/
  v9 = (NiD3DPass *)Stage; /*0x876994*/
  v11 = v10(a5, 0); /*0x8769a7*/
  v12 = *(_DWORD *)v9->Name; /*0x8769a9*/
  v24 = v11; /*0x8769ae*/
  if ( v12 != v11 ) /*0x8769b2*/
  {
    if ( v12 ) /*0x8769b6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x8769bc*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x8769d2*/
      v11 = v24; /*0x8769d4*/
    }
    *(_DWORD *)(Stage + 4) = v11; /*0x8769de*/
    if ( v11 ) /*0x8769e1*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8769e7*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x8769f8*/
  v13 = (NiD3DPass *)Stage; /*0x8769f0*/
  v14 = sub_848FD0(v8, 0); /*0x8769fc*/
  v15 = *(_DWORD *)v13->Name; /*0x876a01*/
  v25 = v14; /*0x876a06*/
  if ( v15 != v14 ) /*0x876a0a*/
  {
    if ( v15 ) /*0x876a0e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x876a14*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x876a2a*/
      v14 = v25; /*0x876a2c*/
    }
    *(_DWORD *)(Stage + 4) = v14; /*0x876a36*/
    if ( v14 ) /*0x876a39*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x876a3f*/
  }
  v16 = *v8; /*0x876a4b*/
  Stage = (UInt32)v7->Stages.data[1].Texture; /*0x876a4e*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x876a5c*/
  v18 = *(_DWORD *)(Stage + 4); /*0x876a62*/
  v19 = v17; /*0x876a65*/
  if ( v18 != v17 ) /*0x876a69*/
  {
    if ( v18 ) /*0x876a6d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x876a73*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x876a8a*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x876a92*/
    if ( v19 ) /*0x876a95*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x876a9b*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x876aa4*/
  v21 = *(_DWORD *)(Unk08 + 4); /*0x876aac*/
  v22 = v21 == LODWORD(flt_B43110[0]); /*0x876aaf*/
  v23 = flt_B43110[0]; /*0x876ab1*/
  Stage = LODWORD(flt_B43110[0]); /*0x876ab3*/
  if ( !v22 ) /*0x876ab7*/
  {
    if ( v21 ) /*0x876abb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x876ac1*/
        (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x876ad7*/
      v23 = *(float *)&Stage; /*0x876ad9*/
    }
    *(float *)(Unk08 + 4) = v23; /*0x876adf*/
    if ( v23 != 0.0 ) /*0x876ae2*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v23) + 4)); /*0x876ae8*/
  }
  ++v7->RefCount; /*0x876af3*/
  Stage = (UInt32)v7; /*0x876af6*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x876b0e*/
  v22 = v7->RefCount-- == 1; /*0x876b16*/
  if ( v22 ) /*0x876b1d*/
    NiD3DPass_ReleaseToPool(v7); /*0x876b21*/
  ++*((_DWORD *)this + 0xE); /*0x876b26*/
}
