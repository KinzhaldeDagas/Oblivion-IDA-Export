void __thiscall sub_83AD30(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x83ad56*/
  v7 = (NiD3DPass *)unk_B45778; /*0x83ad5d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x83ad64*/
  v8 = *(float **)&v6->Name[8]; /*0x83ad69*/
  sub_848E50(v8); /*0x83ad6f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x83ad86*/
  v9 = a5; /*0x83ad8b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83ad93*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83ad9d*/
  v10 = Stage; /*0x83ad8f*/
  v12 = v11(a5, 0); /*0x83ada1*/
  v13 = *(_DWORD *)v10->Name; /*0x83ada3*/
  v18 = v12; /*0x83ada8*/
  if ( v13 != v12 ) /*0x83adac*/
  {
    if ( v13 ) /*0x83adb0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83adb6*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83adcd*/
      v12 = v18; /*0x83adcf*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83add9*/
    if ( v12 ) /*0x83addc*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83ade2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83adf0*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83ae00*/
  v14 = Stage; /*0x83adf8*/
  v15 = sub_848FD0(v9, 0); /*0x83ae04*/
  v16 = *(_DWORD *)v14->Name; /*0x83ae09*/
  v19 = v15; /*0x83ae0e*/
  if ( v16 != v15 ) /*0x83ae12*/
  {
    if ( v16 ) /*0x83ae16*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83ae1c*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83ae33*/
      v15 = v19; /*0x83ae35*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83ae3f*/
    if ( v15 ) /*0x83ae42*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83ae48*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83ae56*/
  ++v7->RefCount; /*0x83ae60*/
  Stage = v7; /*0x83ae63*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83ae7b*/
  if ( v7->RefCount-- == 1 ) /*0x83ae83*/
    NiD3DPass_ReleaseToPool(v7); /*0x83ae8e*/
  ++*((_DWORD *)this + 0xE); /*0x83ae93*/
}
