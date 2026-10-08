void __thiscall ShadowLightShader_QueueSLS2008_SLS2010(
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

  v6 = Stage; /*0x83d3a6*/
  v7 = (NiD3DPass *)unk_B45804; /*0x83d3ad*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x83d3b4*/
  v8 = *(float **)&v6->Name[8]; /*0x83d3b9*/
  sub_848E50(v8); /*0x83d3bf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x83d3d6*/
  v9 = a5; /*0x83d3db*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83d3e3*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83d3ed*/
  v10 = Stage; /*0x83d3df*/
  v12 = v11(a5, 0); /*0x83d3f1*/
  v13 = *(_DWORD *)v10->Name; /*0x83d3f3*/
  v22 = v12; /*0x83d3f8*/
  if ( v13 != v12 ) /*0x83d3fc*/
  {
    if ( v13 ) /*0x83d400*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83d406*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83d41d*/
      v12 = v22; /*0x83d41f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83d429*/
    if ( v12 ) /*0x83d42c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83d432*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83d440*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83d450*/
  v14 = Stage; /*0x83d448*/
  v15 = sub_848FD0(v9, 0); /*0x83d454*/
  v16 = *(_DWORD *)v14->Name; /*0x83d459*/
  v23 = v15; /*0x83d45e*/
  if ( v16 != v15 ) /*0x83d462*/
  {
    if ( v16 ) /*0x83d466*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83d46c*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83d483*/
      v15 = v23; /*0x83d485*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83d48f*/
    if ( v15 ) /*0x83d492*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83d498*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83d4a6*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83d4b3*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x83d4bd*/
  v17 = Stage; /*0x83d4ae*/
  v19 = v18(v9, 0); /*0x83d4c1*/
  v20 = *(_DWORD *)v17->Name; /*0x83d4c3*/
  v24 = v19; /*0x83d4c8*/
  if ( v20 != v19 ) /*0x83d4cc*/
  {
    if ( v20 ) /*0x83d4d0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83d4d6*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x83d4ed*/
      v19 = v24; /*0x83d4ef*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x83d4f9*/
    if ( v19 ) /*0x83d4fc*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83d502*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83d510*/
  ++v7->RefCount; /*0x83d51a*/
  Stage = v7; /*0x83d51d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83d535*/
  if ( v7->RefCount-- == 1 ) /*0x83d53d*/
    NiD3DPass_ReleaseToPool(v7); /*0x83d548*/
  ++*((_DWORD *)this + 0xE); /*0x83d54d*/
}
