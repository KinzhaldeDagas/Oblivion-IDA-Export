void __thiscall sub_8809E0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
{
  NiD3DPass *v6; // ebx
  NiD3DPass *v7; // edi
  float *v8; // ebx
  _DWORD *v9; // ebp
  NiD3DPass *v10; // ebx
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebx
  NiD3DPass *v14; // ebx
  int v15; // eax
  int v16; // ebx
  NiD3DPass *v17; // ebx
  int (__thiscall *v18)(_DWORD *, int); // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebp
  int v23; // ebx
  int v25; // [esp+34h] [ebp+4h]
  int v26; // [esp+34h] [ebp+4h]
  int v27; // [esp+34h] [ebp+4h]

  v6 = Stage; /*0x880a06*/
  v7 = (NiD3DPass *)unk_B47738; /*0x880a0d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x880a14*/
  v8 = *(float **)&v6->Name[8]; /*0x880a19*/
  sub_848E50(v8); /*0x880a1f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x880a36*/
  v9 = a5; /*0x880a3b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x880a44*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x880a4e*/
  v10 = Stage; /*0x880a3f*/
  v12 = v11(a5, 0); /*0x880a52*/
  v13 = *(_DWORD *)v10->Name; /*0x880a54*/
  v25 = v12; /*0x880a59*/
  if ( v13 != v12 ) /*0x880a5d*/
  {
    if ( v13 ) /*0x880a61*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x880a67*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x880a7d*/
      v12 = v25; /*0x880a7f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x880a89*/
    if ( v12 ) /*0x880a8c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x880a92*/
  }
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x880aa3*/
  v14 = Stage; /*0x880a9b*/
  v15 = sub_848FD0(v9, 0); /*0x880aa7*/
  v16 = *(_DWORD *)v14->Name; /*0x880aac*/
  v26 = v15; /*0x880ab1*/
  if ( v16 != v15 ) /*0x880ab5*/
  {
    if ( v16 ) /*0x880ab9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x880abf*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x880ad5*/
      v15 = v26; /*0x880ad7*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x880ae1*/
    if ( v15 ) /*0x880ae4*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x880aea*/
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88); /*0x880af9*/
  Stage = (NiD3DPass *)v7->Stages.data->Unk08; /*0x880b03*/
  v17 = Stage; /*0x880af3*/
  v19 = v18(v9, 1); /*0x880b07*/
  v20 = *(_DWORD *)v17->Name; /*0x880b09*/
  v27 = v19; /*0x880b0e*/
  if ( v20 != v19 ) /*0x880b12*/
  {
    if ( v20 ) /*0x880b16*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x880b1c*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x880b32*/
      v19 = v27; /*0x880b34*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x880b3e*/
    if ( v19 ) /*0x880b41*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x880b47*/
  }
  Stage = (NiD3DPass *)v7->Stages.data[1].Stage; /*0x880b58*/
  v21 = sub_848FD0(v9, 1); /*0x880b5c*/
  v22 = *(_DWORD *)Stage->Name; /*0x880b65*/
  v23 = v21; /*0x880b68*/
  if ( v22 != v21 ) /*0x880b6c*/
  {
    if ( v22 ) /*0x880b70*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x880b76*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x880b8d*/
    }
    *(_DWORD *)Stage->Name = v23; /*0x880b95*/
    if ( v23 ) /*0x880b98*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x880b9e*/
  }
  ++v7->RefCount; /*0x880ba9*/
  Stage = v7; /*0x880bac*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x880bc4*/
  if ( v7->RefCount-- == 1 ) /*0x880bcc*/
    NiD3DPass_ReleaseToPool(v7); /*0x880bd7*/
  ++*((_DWORD *)this + 0xE); /*0x880bdc*/
}
