void __thiscall sub_83CC80(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x83cca6*/
  v7 = (NiD3DPass *)unk_B457E8; /*0x83ccad*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x83ccb4*/
  v8 = *(float **)&v6->Name[8]; /*0x83ccb9*/
  sub_848E50(v8); /*0x83ccbf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x83ccd6*/
  v9 = a5; /*0x83ccdb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83cce3*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83cced*/
  v10 = Stage; /*0x83ccdf*/
  v12 = v11(a5, 0); /*0x83ccf1*/
  v13 = *(_DWORD *)v10->Name; /*0x83ccf3*/
  v18 = v12; /*0x83ccf8*/
  if ( v13 != v12 ) /*0x83ccfc*/
  {
    if ( v13 ) /*0x83cd00*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83cd06*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83cd1d*/
      v12 = v18; /*0x83cd1f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83cd29*/
    if ( v12 ) /*0x83cd2c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83cd32*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83cd40*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83cd50*/
  v14 = Stage; /*0x83cd48*/
  v15 = sub_848FD0(v9, 0); /*0x83cd54*/
  v16 = *(_DWORD *)v14->Name; /*0x83cd59*/
  v19 = v15; /*0x83cd5e*/
  if ( v16 != v15 ) /*0x83cd62*/
  {
    if ( v16 ) /*0x83cd66*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83cd6c*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83cd83*/
      v15 = v19; /*0x83cd85*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83cd8f*/
    if ( v15 ) /*0x83cd92*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83cd98*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83cda6*/
  ++v7->RefCount; /*0x83cdb0*/
  Stage = v7; /*0x83cdb3*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83cdcb*/
  if ( v7->RefCount-- == 1 ) /*0x83cdd3*/
    NiD3DPass_ReleaseToPool(v7); /*0x83cdde*/
  ++*((_DWORD *)this + 0xE); /*0x83cde3*/
}
