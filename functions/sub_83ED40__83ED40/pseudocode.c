void __thiscall sub_83ED40(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
{
  NiD3DPass *v6; // ebx
  NiD3DPass *v7; // edi
  float *v8; // ebp
  _DWORD *v9; // ebx
  NiD3DPass *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebp
  NiD3DPass *v14; // ebp
  int v15; // eax
  int v16; // ebp
  NiD3DPass *v17; // ebp
  int (__thiscall *v18)(_DWORD *, _DWORD); // eax
  int v19; // eax
  int v20; // ebp
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]

  v6 = Stage; /*0x83ed66*/
  v7 = (NiD3DPass *)unk_B4586C; /*0x83ed6d*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x83ed74*/
  v8 = *(float **)&v6->Name[8]; /*0x83ed79*/
  sub_848E50(v8); /*0x83ed7f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x83ed98*/
    this,
    a2,
    v8,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x83ed9d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83eda5*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83edaf*/
  v10 = Stage; /*0x83eda1*/
  v12 = v11(a5, 0); /*0x83edb3*/
  v13 = *(_DWORD *)v10->Name; /*0x83edb5*/
  v22 = v12; /*0x83edba*/
  if ( v13 != v12 ) /*0x83edbe*/
  {
    if ( v13 ) /*0x83edc2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83edc8*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83eddf*/
      v12 = v22; /*0x83ede1*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83edeb*/
    if ( v12 ) /*0x83edee*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83edf4*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83ee02*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83ee12*/
  v14 = Stage; /*0x83ee0a*/
  v15 = sub_848FD0(v9, 0); /*0x83ee16*/
  v16 = *(_DWORD *)v14->Name; /*0x83ee1b*/
  v23 = v15; /*0x83ee20*/
  if ( v16 != v15 ) /*0x83ee24*/
  {
    if ( v16 ) /*0x83ee28*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83ee2e*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83ee45*/
      v15 = v23; /*0x83ee47*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83ee51*/
    if ( v15 ) /*0x83ee54*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83ee5a*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83ee68*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83ee75*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x83ee7f*/
  v17 = Stage; /*0x83ee70*/
  v19 = v18(v9, 0); /*0x83ee83*/
  v20 = *(_DWORD *)v17->Name; /*0x83ee85*/
  v24 = v19; /*0x83ee8a*/
  if ( v20 != v19 ) /*0x83ee8e*/
  {
    if ( v20 ) /*0x83ee92*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83ee98*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x83eeaf*/
      v19 = v24; /*0x83eeb1*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x83eebb*/
    if ( v19 ) /*0x83eebe*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83eec4*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83eed2*/
  ++v7->RefCount; /*0x83eedc*/
  Stage = v7; /*0x83eedf*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83eef7*/
  if ( v7->RefCount-- == 1 ) /*0x83eeff*/
    NiD3DPass_ReleaseToPool(v7); /*0x83ef0a*/
  ++*((_DWORD *)this + 0xE); /*0x83ef0f*/
}
