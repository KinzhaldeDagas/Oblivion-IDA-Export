void __thiscall ShadowLightShader_QueueSLS2007_SLS2010(
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
  NiD3DPass *v17; // ebp
  int (__thiscall *v18)(_DWORD *, _DWORD); // eax
  int v19; // eax
  int v20; // ebp
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]

  v6 = Stage; /*0x83ce26*/
  v7 = (NiD3DPass *)unk_B457EC; /*0x83ce2d*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x83ce34*/
  v8 = *(float **)&v6->Name[8]; /*0x83ce39*/
  sub_848E50(v8); /*0x83ce3f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x83ce56*/
  v9 = a5; /*0x83ce5b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83ce63*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83ce6d*/
  v10 = Stage; /*0x83ce5f*/
  v12 = v11(a5, 0); /*0x83ce71*/
  v13 = *(_DWORD *)v10->Name; /*0x83ce73*/
  v22 = v12; /*0x83ce78*/
  if ( v13 != v12 ) /*0x83ce7c*/
  {
    if ( v13 ) /*0x83ce80*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83ce86*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83ce9d*/
      v12 = v22; /*0x83ce9f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83cea9*/
    if ( v12 ) /*0x83ceac*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83ceb2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83cec0*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83ced0*/
  v14 = Stage; /*0x83cec8*/
  v15 = sub_848FD0(v9, 0); /*0x83ced4*/
  v16 = *(_DWORD *)v14->Name; /*0x83ced9*/
  v23 = v15; /*0x83cede*/
  if ( v16 != v15 ) /*0x83cee2*/
  {
    if ( v16 ) /*0x83cee6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83ceec*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83cf03*/
      v15 = v23; /*0x83cf05*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83cf0f*/
    if ( v15 ) /*0x83cf12*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83cf18*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83cf26*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83cf33*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x83cf3d*/
  v17 = Stage; /*0x83cf2e*/
  v19 = v18(v9, 0); /*0x83cf41*/
  v20 = *(_DWORD *)v17->Name; /*0x83cf43*/
  v24 = v19; /*0x83cf48*/
  if ( v20 != v19 ) /*0x83cf4c*/
  {
    if ( v20 ) /*0x83cf50*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83cf56*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x83cf6d*/
      v19 = v24; /*0x83cf6f*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x83cf79*/
    if ( v19 ) /*0x83cf7c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83cf82*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83cf90*/
  ++v7->RefCount; /*0x83cf9a*/
  Stage = v7; /*0x83cf9d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83cfb5*/
  if ( v7->RefCount-- == 1 ) /*0x83cfbd*/
    NiD3DPass_ReleaseToPool(v7); /*0x83cfc8*/
  ++*((_DWORD *)this + 0xE); /*0x83cfcd*/
}
