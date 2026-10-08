void __thiscall sub_877A20(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
{
  NiD3DPass *v6; // ebp
  float *v7; // ebx
  NiD3DPass *v8; // edi
  int *v9; // ebp
  NiD3DPass *v10; // ebx
  int (__thiscall *v11)(int *, _DWORD); // eax
  int v12; // eax
  int v13; // ebx
  NiD3DPass *v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // edx
  int v18; // eax
  int v19; // ebp
  int v20; // ebx
  UInt32 Unk08; // ebp
  int v22; // ebx
  bool v23; // zf
  float v24; // ecx
  int v25; // [esp+34h] [ebp+4h]
  int v26; // [esp+34h] [ebp+4h]

  v6 = (NiD3DPass *)Stage; /*0x877a46*/
  v7 = *(float **)(Stage + 0xC); /*0x877a4a*/
  v8 = (NiD3DPass *)unk_B476A4; /*0x877a4d*/
  sub_848E50(v7); /*0x877a54*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x877a6d*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x877a72*/
  v11 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x877a7b*/
  Stage = v8->Stages.data->Stage; /*0x877a85*/
  v10 = (NiD3DPass *)Stage; /*0x877a76*/
  v12 = v11(a5, 0); /*0x877a89*/
  v13 = *(_DWORD *)v10->Name; /*0x877a8b*/
  v25 = v12; /*0x877a90*/
  if ( v13 != v12 ) /*0x877a94*/
  {
    if ( v13 ) /*0x877a98*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x877a9e*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x877ab4*/
      v12 = v25; /*0x877ab6*/
    }
    *(_DWORD *)(Stage + 4) = v12; /*0x877ac0*/
    if ( v12 ) /*0x877ac3*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x877ac9*/
  }
  Stage = (UInt32)v8->Stages.data->Texture; /*0x877ada*/
  v14 = (NiD3DPass *)Stage; /*0x877ad2*/
  v15 = sub_848FD0(v9, 0); /*0x877ade*/
  v16 = *(_DWORD *)v14->Name; /*0x877ae3*/
  v26 = v15; /*0x877ae8*/
  if ( v16 != v15 ) /*0x877aec*/
  {
    if ( v16 ) /*0x877af0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x877af6*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x877b0c*/
      v15 = v26; /*0x877b0e*/
    }
    *(_DWORD *)(Stage + 4) = v15; /*0x877b18*/
    if ( v15 ) /*0x877b1b*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x877b21*/
  }
  v17 = *v9; /*0x877b2d*/
  Stage = (UInt32)v8->Stages.data[1].Texture; /*0x877b30*/
  v18 = (*(int (__thiscall **)(int *, _DWORD))(v17 + 0x90))(v9, 0); /*0x877b3e*/
  v19 = *(_DWORD *)(Stage + 4); /*0x877b44*/
  v20 = v18; /*0x877b47*/
  if ( v19 != v18 ) /*0x877b4b*/
  {
    if ( v19 ) /*0x877b4f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x877b55*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x877b6c*/
    }
    *(_DWORD *)(Stage + 4) = v20; /*0x877b74*/
    if ( v20 ) /*0x877b77*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x877b7d*/
  }
  Unk08 = v8->Stages.data[1].Unk08; /*0x877b86*/
  v22 = *(_DWORD *)(Unk08 + 4); /*0x877b8e*/
  v23 = v22 == LODWORD(flt_B43110[0]); /*0x877b91*/
  v24 = flt_B43110[0]; /*0x877b93*/
  Stage = LODWORD(flt_B43110[0]); /*0x877b95*/
  if ( !v23 ) /*0x877b99*/
  {
    if ( v22 ) /*0x877b9d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x877ba3*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x877bb9*/
      v24 = *(float *)&Stage; /*0x877bbb*/
    }
    *(float *)(Unk08 + 4) = v24; /*0x877bc1*/
    if ( v24 != 0.0 ) /*0x877bc4*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v24) + 4)); /*0x877bca*/
  }
  ++v8->RefCount; /*0x877bd5*/
  Stage = (UInt32)v8; /*0x877bd8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x877bf0*/
  v23 = v8->RefCount-- == 1; /*0x877bf8*/
  if ( v23 ) /*0x877bff*/
    NiD3DPass_ReleaseToPool(v8); /*0x877c03*/
  ++*((_DWORD *)this + 0xE); /*0x877c08*/
}
