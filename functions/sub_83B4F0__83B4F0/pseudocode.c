void __thiscall sub_83B4F0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
{
  NiD3DPass *v6; // ebx
  NiD3DPass *v7; // edi
  float *v8; // ebx
  _DWORD *v9; // ebx
  NiD3DPass *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebp
  NiD3DPass *v14; // ebp
  int v15; // eax
  int v16; // ebp
  int v18; // [esp+28h] [ebp+4h]
  int v19; // [esp+28h] [ebp+4h]

  v6 = Stage; /*0x83b516*/
  v7 = (NiD3DPass *)unk_B45794; /*0x83b51d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x83b524*/
  v8 = *(float **)&v6->Name[8]; /*0x83b529*/
  sub_848E50(v8); /*0x83b52f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x83b546*/
  v9 = a5; /*0x83b54b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83b553*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83b55d*/
  v10 = Stage; /*0x83b54f*/
  v12 = v11(a5, 0); /*0x83b561*/
  v13 = *(_DWORD *)v10->Name; /*0x83b563*/
  v18 = v12; /*0x83b568*/
  if ( v13 != v12 ) /*0x83b56c*/
  {
    if ( v13 ) /*0x83b570*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83b576*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83b58d*/
      v12 = v18; /*0x83b58f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83b599*/
    if ( v12 ) /*0x83b59c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83b5a2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83b5b0*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83b5c0*/
  v14 = Stage; /*0x83b5b8*/
  v15 = sub_848FD0(v9, 0); /*0x83b5c4*/
  v16 = *(_DWORD *)v14->Name; /*0x83b5c9*/
  v19 = v15; /*0x83b5ce*/
  if ( v16 != v15 ) /*0x83b5d2*/
  {
    if ( v16 ) /*0x83b5d6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83b5dc*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83b5f3*/
      v15 = v19; /*0x83b5f5*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83b5ff*/
    if ( v15 ) /*0x83b602*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83b608*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83b616*/
  ++v7->RefCount; /*0x83b620*/
  Stage = v7; /*0x83b623*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83b63b*/
  if ( v7->RefCount-- == 1 ) /*0x83b643*/
    NiD3DPass_ReleaseToPool(v7); /*0x83b64e*/
  ++*((_DWORD *)this + 0xE); /*0x83b653*/
}
