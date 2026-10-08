void __thiscall sub_841D30(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x841d56*/
  v7 = (NiD3DPass *)unk_B456DC; /*0x841d5d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x841d64*/
  v8 = *(float **)&v6->Name[8]; /*0x841d69*/
  sub_848E50(v8); /*0x841d6f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x841d86*/
  v9 = a5; /*0x841d8b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x841d93*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x841d9d*/
  v10 = Stage; /*0x841d8f*/
  v12 = v11(a5, 0); /*0x841da1*/
  v13 = *(_DWORD *)v10->Name; /*0x841da3*/
  v18 = v12; /*0x841da8*/
  if ( v13 != v12 ) /*0x841dac*/
  {
    if ( v13 ) /*0x841db0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x841db6*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x841dcd*/
      v12 = v18; /*0x841dcf*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x841dd9*/
    if ( v12 ) /*0x841ddc*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x841de2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x841df0*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x841e00*/
  v14 = Stage; /*0x841df8*/
  v15 = sub_848FD0(v9, 0); /*0x841e04*/
  v16 = *(_DWORD *)v14->Name; /*0x841e09*/
  v19 = v15; /*0x841e0e*/
  if ( v16 != v15 ) /*0x841e12*/
  {
    if ( v16 ) /*0x841e16*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x841e1c*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x841e33*/
      v15 = v19; /*0x841e35*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x841e3f*/
    if ( v15 ) /*0x841e42*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x841e48*/
  }
  sub_848FA0(Stage, (int)v9); /*0x841e56*/
  ++v7->RefCount; /*0x841e60*/
  Stage = v7; /*0x841e63*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x841e7b*/
  if ( v7->RefCount-- == 1 ) /*0x841e83*/
    NiD3DPass_ReleaseToPool(v7); /*0x841e8e*/
  ++*((_DWORD *)this + 0xE); /*0x841e93*/
}
