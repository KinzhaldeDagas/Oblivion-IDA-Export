void __thiscall sub_83E640(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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
  int v18; // [esp+28h] [ebp+4h]
  int v19; // [esp+28h] [ebp+4h]

  v6 = Stage; /*0x83e666*/
  v7 = (NiD3DPass *)unk_B45850; /*0x83e66d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x83e674*/
  v8 = *(float **)&v6->Name[8]; /*0x83e679*/
  sub_848E50(v8); /*0x83e67f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x83e698*/
    this,
    a2,
    v8,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x83e69d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83e6a5*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83e6af*/
  v10 = Stage; /*0x83e6a1*/
  v12 = v11(a5, 0); /*0x83e6b3*/
  v13 = *(_DWORD *)v10->Name; /*0x83e6b5*/
  v18 = v12; /*0x83e6ba*/
  if ( v13 != v12 ) /*0x83e6be*/
  {
    if ( v13 ) /*0x83e6c2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83e6c8*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83e6df*/
      v12 = v18; /*0x83e6e1*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83e6eb*/
    if ( v12 ) /*0x83e6ee*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83e6f4*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83e702*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83e712*/
  v14 = Stage; /*0x83e70a*/
  v15 = sub_848FD0(v9, 0); /*0x83e716*/
  v16 = *(_DWORD *)v14->Name; /*0x83e71b*/
  v19 = v15; /*0x83e720*/
  if ( v16 != v15 ) /*0x83e724*/
  {
    if ( v16 ) /*0x83e728*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83e72e*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83e745*/
      v15 = v19; /*0x83e747*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83e751*/
    if ( v15 ) /*0x83e754*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83e75a*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83e768*/
  ++v7->RefCount; /*0x83e772*/
  Stage = v7; /*0x83e775*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83e78d*/
  if ( v7->RefCount-- == 1 ) /*0x83e795*/
    NiD3DPass_ReleaseToPool(v7); /*0x83e7a0*/
  ++*((_DWORD *)this + 0xE); /*0x83e7a5*/
}
