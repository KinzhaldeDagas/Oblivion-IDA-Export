void __thiscall ShadowLightShader_QueueSLS2024_SLS2032(
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

  v6 = Stage; /*0x842f16*/
  v7 = (NiD3DPass *)unk_B4573C; /*0x842f1d*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x842f24*/
  v8 = *(float **)&v6->Name[8]; /*0x842f29*/
  sub_848E50(v8); /*0x842f2f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x842f46*/
  v9 = a5; /*0x842f4b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x842f53*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x842f5d*/
  v10 = Stage; /*0x842f4f*/
  v12 = v11(a5, 0); /*0x842f61*/
  v13 = *(_DWORD *)v10->Name; /*0x842f63*/
  v22 = v12; /*0x842f68*/
  if ( v13 != v12 ) /*0x842f6c*/
  {
    if ( v13 ) /*0x842f70*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x842f76*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x842f8d*/
      v12 = v22; /*0x842f8f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x842f99*/
    if ( v12 ) /*0x842f9c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x842fa2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x842fb0*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x842fc0*/
  v14 = Stage; /*0x842fb8*/
  v15 = sub_848FD0(v9, 0); /*0x842fc4*/
  v16 = *(_DWORD *)v14->Name; /*0x842fc9*/
  v23 = v15; /*0x842fce*/
  if ( v16 != v15 ) /*0x842fd2*/
  {
    if ( v16 ) /*0x842fd6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x842fdc*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x842ff3*/
      v15 = v23; /*0x842ff5*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x842fff*/
    if ( v15 ) /*0x843002*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x843008*/
  }
  sub_848FA0(Stage, (int)v9); /*0x843016*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x843023*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Stage; /*0x84302d*/
  v17 = Stage; /*0x84301e*/
  v19 = v18(v9, 0); /*0x843031*/
  v20 = *(_DWORD *)v17->Name; /*0x843033*/
  v24 = v19; /*0x843038*/
  if ( v20 != v19 ) /*0x84303c*/
  {
    if ( v20 ) /*0x843040*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x843046*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x84305d*/
      v19 = v24; /*0x84305f*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x843069*/
    if ( v19 ) /*0x84306c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x843072*/
  }
  sub_848FA0(Stage, (int)v9); /*0x843080*/
  ++v7->RefCount; /*0x84308a*/
  Stage = v7; /*0x84308d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x8430a5*/
  if ( v7->RefCount-- == 1 ) /*0x8430ad*/
    NiD3DPass_ReleaseToPool(v7); /*0x8430b8*/
  ++*((_DWORD *)this + 0xE); /*0x8430bd*/
}
