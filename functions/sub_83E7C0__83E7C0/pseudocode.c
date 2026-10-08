void __thiscall sub_83E7C0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x83e7e6*/
  v7 = (NiD3DPass *)unk_B45854; /*0x83e7ed*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x83e7f4*/
  v8 = *(float **)&v6->Name[8]; /*0x83e7f9*/
  sub_848E50(v8); /*0x83e7ff*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x83e818*/
    this,
    a2,
    v8,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x83e81d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83e825*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83e82f*/
  v10 = Stage; /*0x83e821*/
  v12 = v11(a5, 0); /*0x83e833*/
  v13 = *(_DWORD *)v10->Name; /*0x83e835*/
  v22 = v12; /*0x83e83a*/
  if ( v13 != v12 ) /*0x83e83e*/
  {
    if ( v13 ) /*0x83e842*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83e848*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83e85f*/
      v12 = v22; /*0x83e861*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83e86b*/
    if ( v12 ) /*0x83e86e*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83e874*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83e882*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83e892*/
  v14 = Stage; /*0x83e88a*/
  v15 = sub_848FD0(v9, 0); /*0x83e896*/
  v16 = *(_DWORD *)v14->Name; /*0x83e89b*/
  v23 = v15; /*0x83e8a0*/
  if ( v16 != v15 ) /*0x83e8a4*/
  {
    if ( v16 ) /*0x83e8a8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83e8ae*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83e8c5*/
      v15 = v23; /*0x83e8c7*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83e8d1*/
    if ( v15 ) /*0x83e8d4*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83e8da*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83e8e8*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83e8f5*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x83e8ff*/
  v17 = Stage; /*0x83e8f0*/
  v19 = v18(v9, 0); /*0x83e903*/
  v20 = *(_DWORD *)v17->Name; /*0x83e905*/
  v24 = v19; /*0x83e90a*/
  if ( v20 != v19 ) /*0x83e90e*/
  {
    if ( v20 ) /*0x83e912*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83e918*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x83e92f*/
      v19 = v24; /*0x83e931*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x83e93b*/
    if ( v19 ) /*0x83e93e*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83e944*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83e952*/
  ++v7->RefCount; /*0x83e95c*/
  Stage = v7; /*0x83e95f*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83e977*/
  if ( v7->RefCount-- == 1 ) /*0x83e97f*/
    NiD3DPass_ReleaseToPool(v7); /*0x83e98a*/
  ++*((_DWORD *)this + 0xE); /*0x83e98f*/
}
