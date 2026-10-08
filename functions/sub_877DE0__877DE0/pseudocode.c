void __thiscall sub_877DE0(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
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

  v6 = (NiD3DPass *)Stage; /*0x877e06*/
  v7 = *(float **)(Stage + 0xC); /*0x877e0a*/
  v8 = (NiD3DPass *)unk_B476AC; /*0x877e0d*/
  sub_848E50(v7); /*0x877e14*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x877e2d*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x877e32*/
  v11 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x877e3b*/
  Stage = v8->Stages.data->Stage; /*0x877e45*/
  v10 = (NiD3DPass *)Stage; /*0x877e36*/
  v12 = v11(a5, 0); /*0x877e49*/
  v13 = *(_DWORD *)v10->Name; /*0x877e4b*/
  v25 = v12; /*0x877e50*/
  if ( v13 != v12 ) /*0x877e54*/
  {
    if ( v13 ) /*0x877e58*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x877e5e*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x877e74*/
      v12 = v25; /*0x877e76*/
    }
    *(_DWORD *)(Stage + 4) = v12; /*0x877e80*/
    if ( v12 ) /*0x877e83*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x877e89*/
  }
  Stage = (UInt32)v8->Stages.data->Texture; /*0x877e9a*/
  v14 = (NiD3DPass *)Stage; /*0x877e92*/
  v15 = sub_848FD0(v9, 0); /*0x877e9e*/
  v16 = *(_DWORD *)v14->Name; /*0x877ea3*/
  v26 = v15; /*0x877ea8*/
  if ( v16 != v15 ) /*0x877eac*/
  {
    if ( v16 ) /*0x877eb0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x877eb6*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x877ecc*/
      v15 = v26; /*0x877ece*/
    }
    *(_DWORD *)(Stage + 4) = v15; /*0x877ed8*/
    if ( v15 ) /*0x877edb*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x877ee1*/
  }
  v17 = *v9; /*0x877eed*/
  Stage = (UInt32)v8->Stages.data[1].Texture; /*0x877ef0*/
  v18 = (*(int (__thiscall **)(int *, _DWORD))(v17 + 0x90))(v9, 0); /*0x877efe*/
  v19 = *(_DWORD *)(Stage + 4); /*0x877f04*/
  v20 = v18; /*0x877f07*/
  if ( v19 != v18 ) /*0x877f0b*/
  {
    if ( v19 ) /*0x877f0f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x877f15*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x877f2c*/
    }
    *(_DWORD *)(Stage + 4) = v20; /*0x877f34*/
    if ( v20 ) /*0x877f37*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x877f3d*/
  }
  Unk08 = v8->Stages.data[1].Unk08; /*0x877f46*/
  v22 = *(_DWORD *)(Unk08 + 4); /*0x877f4e*/
  v23 = v22 == LODWORD(flt_B43110[0]); /*0x877f51*/
  v24 = flt_B43110[0]; /*0x877f53*/
  Stage = LODWORD(flt_B43110[0]); /*0x877f55*/
  if ( !v23 ) /*0x877f59*/
  {
    if ( v22 ) /*0x877f5d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x877f63*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x877f79*/
      v24 = *(float *)&Stage; /*0x877f7b*/
    }
    *(float *)(Unk08 + 4) = v24; /*0x877f81*/
    if ( v24 != 0.0 ) /*0x877f84*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v24) + 4)); /*0x877f8a*/
  }
  ++v8->RefCount; /*0x877f95*/
  Stage = (UInt32)v8; /*0x877f98*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x877fb0*/
  v23 = v8->RefCount-- == 1; /*0x877fb8*/
  if ( v23 ) /*0x877fbf*/
    NiD3DPass_ReleaseToPool(v8); /*0x877fc3*/
  ++*((_DWORD *)this + 0xE); /*0x877fc8*/
}
