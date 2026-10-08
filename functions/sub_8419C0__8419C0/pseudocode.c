void __thiscall sub_8419C0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x8419e6*/
  v7 = (NiD3DPass *)unk_B456C8; /*0x8419ed*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x8419f4*/
  v8 = *(float **)&v6->Name[8]; /*0x8419f9*/
  sub_848E50(v8); /*0x8419ff*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x841a16*/
  v9 = a5; /*0x841a1b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x841a23*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x841a2d*/
  v10 = Stage; /*0x841a1f*/
  v12 = v11(a5, 0); /*0x841a31*/
  v13 = *(_DWORD *)v10->Name; /*0x841a33*/
  v18 = v12; /*0x841a38*/
  if ( v13 != v12 ) /*0x841a3c*/
  {
    if ( v13 ) /*0x841a40*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x841a46*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x841a5d*/
      v12 = v18; /*0x841a5f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x841a69*/
    if ( v12 ) /*0x841a6c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x841a72*/
  }
  sub_848FA0(Stage, (int)v9); /*0x841a80*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x841a90*/
  v14 = Stage; /*0x841a88*/
  v15 = sub_848FD0(v9, 0); /*0x841a94*/
  v16 = *(_DWORD *)v14->Name; /*0x841a99*/
  v19 = v15; /*0x841a9e*/
  if ( v16 != v15 ) /*0x841aa2*/
  {
    if ( v16 ) /*0x841aa6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x841aac*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x841ac3*/
      v15 = v19; /*0x841ac5*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x841acf*/
    if ( v15 ) /*0x841ad2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x841ad8*/
  }
  sub_848FA0(Stage, (int)v9); /*0x841ae6*/
  ++v7->RefCount; /*0x841af0*/
  Stage = v7; /*0x841af3*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x841b0b*/
  if ( v7->RefCount-- == 1 ) /*0x841b13*/
    NiD3DPass_ReleaseToPool(v7); /*0x841b1e*/
  ++*((_DWORD *)this + 0xE); /*0x841b23*/
}
