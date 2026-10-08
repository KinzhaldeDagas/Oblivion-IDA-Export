void __thiscall ShadowLightShader_QueueSLS2024_SLS2031(
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

  v6 = Stage; /*0x842d96*/
  v7 = (NiD3DPass *)unk_B45734; /*0x842d9d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x842da4*/
  v8 = *(float **)&v6->Name[8]; /*0x842da9*/
  sub_848E50(v8); /*0x842daf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x842dc6*/
  v9 = a5; /*0x842dcb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x842dd3*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x842ddd*/
  v10 = Stage; /*0x842dcf*/
  v12 = v11(a5, 0); /*0x842de1*/
  v13 = *(_DWORD *)v10->Name; /*0x842de3*/
  v18 = v12; /*0x842de8*/
  if ( v13 != v12 ) /*0x842dec*/
  {
    if ( v13 ) /*0x842df0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x842df6*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x842e0d*/
      v12 = v18; /*0x842e0f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x842e19*/
    if ( v12 ) /*0x842e1c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x842e22*/
  }
  sub_848FA0(Stage, (int)v9); /*0x842e30*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x842e40*/
  v14 = Stage; /*0x842e38*/
  v15 = sub_848FD0(v9, 0); /*0x842e44*/
  v16 = *(_DWORD *)v14->Name; /*0x842e49*/
  v19 = v15; /*0x842e4e*/
  if ( v16 != v15 ) /*0x842e52*/
  {
    if ( v16 ) /*0x842e56*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x842e5c*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x842e73*/
      v15 = v19; /*0x842e75*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x842e7f*/
    if ( v15 ) /*0x842e82*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x842e88*/
  }
  sub_848FA0(Stage, (int)v9); /*0x842e96*/
  ++v7->RefCount; /*0x842ea0*/
  Stage = v7; /*0x842ea3*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x842ebb*/
  if ( v7->RefCount-- == 1 ) /*0x842ec3*/
    NiD3DPass_ReleaseToPool(v7); /*0x842ece*/
  ++*((_DWORD *)this + 0xE); /*0x842ed3*/
}
