void __thiscall sub_83B0F0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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
  NiD3DPass *v17; // ebp
  int (__thiscall *v18)(_DWORD *, _DWORD); // eax
  int v19; // eax
  int v20; // ebp
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]

  v6 = Stage; /*0x83b116*/
  v7 = (NiD3DPass *)unk_B45780; /*0x83b11d*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x83b124*/
  v8 = *(float **)&v6->Name[8]; /*0x83b129*/
  sub_848E50(v8); /*0x83b12f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x83b146*/
  v9 = a5; /*0x83b14b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83b153*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83b15d*/
  v10 = Stage; /*0x83b14f*/
  v12 = v11(a5, 0); /*0x83b161*/
  v13 = *(_DWORD *)v10->Name; /*0x83b163*/
  v22 = v12; /*0x83b168*/
  if ( v13 != v12 ) /*0x83b16c*/
  {
    if ( v13 ) /*0x83b170*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83b176*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83b18d*/
      v12 = v22; /*0x83b18f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83b199*/
    if ( v12 ) /*0x83b19c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83b1a2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83b1b0*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83b1c0*/
  v14 = Stage; /*0x83b1b8*/
  v15 = sub_848FD0(v9, 0); /*0x83b1c4*/
  v16 = *(_DWORD *)v14->Name; /*0x83b1c9*/
  v23 = v15; /*0x83b1ce*/
  if ( v16 != v15 ) /*0x83b1d2*/
  {
    if ( v16 ) /*0x83b1d6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83b1dc*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83b1f3*/
      v15 = v23; /*0x83b1f5*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83b1ff*/
    if ( v15 ) /*0x83b202*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83b208*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83b216*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83b223*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x83b22d*/
  v17 = Stage; /*0x83b21e*/
  v19 = v18(v9, 0); /*0x83b231*/
  v20 = *(_DWORD *)v17->Name; /*0x83b233*/
  v24 = v19; /*0x83b238*/
  if ( v20 != v19 ) /*0x83b23c*/
  {
    if ( v20 ) /*0x83b240*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83b246*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x83b25d*/
      v19 = v24; /*0x83b25f*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x83b269*/
    if ( v19 ) /*0x83b26c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83b272*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83b280*/
  ++v7->RefCount; /*0x83b28a*/
  Stage = v7; /*0x83b28d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83b2a5*/
  if ( v7->RefCount-- == 1 ) /*0x83b2ad*/
    NiD3DPass_ReleaseToPool(v7); /*0x83b2b8*/
  ++*((_DWORD *)this + 0xE); /*0x83b2bd*/
}
