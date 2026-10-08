void __thiscall sub_841B40(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x841b66*/
  v7 = (NiD3DPass *)unk_B456CC; /*0x841b6d*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x841b74*/
  v8 = *(float **)&v6->Name[8]; /*0x841b79*/
  sub_848E50(v8); /*0x841b7f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x841b96*/
  v9 = a5; /*0x841b9b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x841ba3*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x841bad*/
  v10 = Stage; /*0x841b9f*/
  v12 = v11(a5, 0); /*0x841bb1*/
  v13 = *(_DWORD *)v10->Name; /*0x841bb3*/
  v22 = v12; /*0x841bb8*/
  if ( v13 != v12 ) /*0x841bbc*/
  {
    if ( v13 ) /*0x841bc0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x841bc6*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x841bdd*/
      v12 = v22; /*0x841bdf*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x841be9*/
    if ( v12 ) /*0x841bec*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x841bf2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x841c00*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x841c10*/
  v14 = Stage; /*0x841c08*/
  v15 = sub_848FD0(v9, 0); /*0x841c14*/
  v16 = *(_DWORD *)v14->Name; /*0x841c19*/
  v23 = v15; /*0x841c1e*/
  if ( v16 != v15 ) /*0x841c22*/
  {
    if ( v16 ) /*0x841c26*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x841c2c*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x841c43*/
      v15 = v23; /*0x841c45*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x841c4f*/
    if ( v15 ) /*0x841c52*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x841c58*/
  }
  sub_848FA0(Stage, (int)v9); /*0x841c66*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x841c73*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Stage; /*0x841c7d*/
  v17 = Stage; /*0x841c6e*/
  v19 = v18(v9, 0); /*0x841c81*/
  v20 = *(_DWORD *)v17->Name; /*0x841c83*/
  v24 = v19; /*0x841c88*/
  if ( v20 != v19 ) /*0x841c8c*/
  {
    if ( v20 ) /*0x841c90*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x841c96*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x841cad*/
      v19 = v24; /*0x841caf*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x841cb9*/
    if ( v19 ) /*0x841cbc*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x841cc2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x841cd0*/
  ++v7->RefCount; /*0x841cda*/
  Stage = v7; /*0x841cdd*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x841cf5*/
  if ( v7->RefCount-- == 1 ) /*0x841cfd*/
    NiD3DPass_ReleaseToPool(v7); /*0x841d08*/
  ++*((_DWORD *)this + 0xE); /*0x841d0d*/
}
