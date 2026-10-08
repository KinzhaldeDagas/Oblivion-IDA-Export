void __thiscall sub_83EBC0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x83ebe6*/
  v7 = (NiD3DPass *)unk_B45868; /*0x83ebed*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x83ebf4*/
  v8 = *(float **)&v6->Name[8]; /*0x83ebf9*/
  sub_848E50(v8); /*0x83ebff*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x83ec18*/
    this,
    a2,
    v8,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x83ec1d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83ec25*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83ec2f*/
  v10 = Stage; /*0x83ec21*/
  v12 = v11(a5, 0); /*0x83ec33*/
  v13 = *(_DWORD *)v10->Name; /*0x83ec35*/
  v18 = v12; /*0x83ec3a*/
  if ( v13 != v12 ) /*0x83ec3e*/
  {
    if ( v13 ) /*0x83ec42*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83ec48*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83ec5f*/
      v12 = v18; /*0x83ec61*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83ec6b*/
    if ( v12 ) /*0x83ec6e*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83ec74*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83ec82*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83ec92*/
  v14 = Stage; /*0x83ec8a*/
  v15 = sub_848FD0(v9, 0); /*0x83ec96*/
  v16 = *(_DWORD *)v14->Name; /*0x83ec9b*/
  v19 = v15; /*0x83eca0*/
  if ( v16 != v15 ) /*0x83eca4*/
  {
    if ( v16 ) /*0x83eca8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83ecae*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83ecc5*/
      v15 = v19; /*0x83ecc7*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83ecd1*/
    if ( v15 ) /*0x83ecd4*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83ecda*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83ece8*/
  ++v7->RefCount; /*0x83ecf2*/
  Stage = v7; /*0x83ecf5*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83ed0d*/
  if ( v7->RefCount-- == 1 ) /*0x83ed15*/
    NiD3DPass_ReleaseToPool(v7); /*0x83ed20*/
  ++*((_DWORD *)this + 0xE); /*0x83ed25*/
}
