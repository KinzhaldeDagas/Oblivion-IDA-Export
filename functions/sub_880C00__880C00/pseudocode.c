void __thiscall sub_880C00(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x880c26*/
  v7 = (NiD3DPass *)unk_B4773C; /*0x880c2d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x880c34*/
  v8 = *(float **)&v6->Name[8]; /*0x880c39*/
  sub_848E50(v8); /*0x880c3f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x880c56*/
  v9 = a5; /*0x880c5b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x880c64*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x880c6e*/
  v10 = Stage; /*0x880c5f*/
  v12 = v11(a5, 0); /*0x880c72*/
  v13 = *(_DWORD *)v10->Name; /*0x880c74*/
  v25 = v12; /*0x880c79*/
  if ( v13 != v12 ) /*0x880c7d*/
  {
    if ( v13 ) /*0x880c81*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x880c87*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x880c9d*/
      v12 = v25; /*0x880c9f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x880ca9*/
    if ( v12 ) /*0x880cac*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x880cb2*/
  }
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x880cc3*/
  v14 = Stage; /*0x880cbb*/
  v15 = sub_848FD0(v9, 0); /*0x880cc7*/
  v16 = *(_DWORD *)v14->Name; /*0x880ccc*/
  v26 = v15; /*0x880cd1*/
  if ( v16 != v15 ) /*0x880cd5*/
  {
    if ( v16 ) /*0x880cd9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x880cdf*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x880cf5*/
      v15 = v26; /*0x880cf7*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x880d01*/
    if ( v15 ) /*0x880d04*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x880d0a*/
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88); /*0x880d19*/
  Stage = (NiD3DPass *)v7->Stages.data->Unk08; /*0x880d23*/
  v17 = Stage; /*0x880d13*/
  v19 = v18(v9, 1); /*0x880d27*/
  v20 = *(_DWORD *)v17->Name; /*0x880d29*/
  v27 = v19; /*0x880d2e*/
  if ( v20 != v19 ) /*0x880d32*/
  {
    if ( v20 ) /*0x880d36*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x880d3c*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x880d52*/
      v19 = v27; /*0x880d54*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x880d5e*/
    if ( v19 ) /*0x880d61*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x880d67*/
  }
  Stage = (NiD3DPass *)v7->Stages.data[1].Stage; /*0x880d78*/
  v21 = sub_848FD0(v9, 1); /*0x880d7c*/
  v22 = *(_DWORD *)Stage->Name; /*0x880d85*/
  v23 = v21; /*0x880d88*/
  if ( v22 != v21 ) /*0x880d8c*/
  {
    if ( v22 ) /*0x880d90*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x880d96*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x880dad*/
    }
    *(_DWORD *)Stage->Name = v23; /*0x880db5*/
    if ( v23 ) /*0x880db8*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x880dbe*/
  }
  ++v7->RefCount; /*0x880dc9*/
  Stage = v7; /*0x880dcc*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x880de4*/
  if ( v7->RefCount-- == 1 ) /*0x880dec*/
    NiD3DPass_ReleaseToPool(v7); /*0x880df7*/
  ++*((_DWORD *)this + 0xE); /*0x880dfc*/
}
