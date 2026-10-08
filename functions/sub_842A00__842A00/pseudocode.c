void __thiscall ShadowLightShader_QueueSLS2023_SLS2031(
        NiTArray_NiD3DPass *this,
        int a2,
        int a3,
        NiD3DPass *Stage,
        _DWORD *a5)
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

  v6 = Stage; /*0x842a26*/
  v7 = (NiD3DPass *)unk_B45720; /*0x842a2d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x842a34*/
  v8 = *(float **)&v6->Name[8]; /*0x842a39*/
  sub_848E50(v8); /*0x842a3f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x842a56*/
  v9 = a5; /*0x842a5b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x842a63*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x842a6d*/
  v10 = Stage; /*0x842a5f*/
  v12 = v11(a5, 0); /*0x842a71*/
  v13 = *(_DWORD *)v10->Name; /*0x842a73*/
  v18 = v12; /*0x842a78*/
  if ( v13 != v12 ) /*0x842a7c*/
  {
    if ( v13 ) /*0x842a80*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x842a86*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x842a9d*/
      v12 = v18; /*0x842a9f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x842aa9*/
    if ( v12 ) /*0x842aac*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x842ab2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x842ac0*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x842ad0*/
  v14 = Stage; /*0x842ac8*/
  v15 = sub_848FD0(v9, 0); /*0x842ad4*/
  v16 = *(_DWORD *)v14->Name; /*0x842ad9*/
  v19 = v15; /*0x842ade*/
  if ( v16 != v15 ) /*0x842ae2*/
  {
    if ( v16 ) /*0x842ae6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x842aec*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x842b03*/
      v15 = v19; /*0x842b05*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x842b0f*/
    if ( v15 ) /*0x842b12*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x842b18*/
  }
  sub_848FA0(Stage, (int)v9); /*0x842b26*/
  ++v7->RefCount; /*0x842b30*/
  Stage = v7; /*0x842b33*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x842b4b*/
  if ( v7->RefCount-- == 1 ) /*0x842b53*/
    NiD3DPass_ReleaseToPool(v7); /*0x842b5e*/
  ++*((_DWORD *)this + 0xE); /*0x842b63*/
}
