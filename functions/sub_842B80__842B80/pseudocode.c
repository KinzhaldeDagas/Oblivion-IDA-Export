void __thiscall ShadowLightShader_QueueSLS2023_SLS2032(
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

  v6 = Stage; /*0x842ba6*/
  v7 = (NiD3DPass *)unk_B45724; /*0x842bad*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x842bb4*/
  v8 = *(float **)&v6->Name[8]; /*0x842bb9*/
  sub_848E50(v8); /*0x842bbf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x842bd6*/
  v9 = a5; /*0x842bdb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x842be3*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x842bed*/
  v10 = Stage; /*0x842bdf*/
  v12 = v11(a5, 0); /*0x842bf1*/
  v13 = *(_DWORD *)v10->Name; /*0x842bf3*/
  v22 = v12; /*0x842bf8*/
  if ( v13 != v12 ) /*0x842bfc*/
  {
    if ( v13 ) /*0x842c00*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x842c06*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x842c1d*/
      v12 = v22; /*0x842c1f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x842c29*/
    if ( v12 ) /*0x842c2c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x842c32*/
  }
  sub_848FA0(Stage, (int)v9); /*0x842c40*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x842c50*/
  v14 = Stage; /*0x842c48*/
  v15 = sub_848FD0(v9, 0); /*0x842c54*/
  v16 = *(_DWORD *)v14->Name; /*0x842c59*/
  v23 = v15; /*0x842c5e*/
  if ( v16 != v15 ) /*0x842c62*/
  {
    if ( v16 ) /*0x842c66*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x842c6c*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x842c83*/
      v15 = v23; /*0x842c85*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x842c8f*/
    if ( v15 ) /*0x842c92*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x842c98*/
  }
  sub_848FA0(Stage, (int)v9); /*0x842ca6*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x842cb3*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Stage; /*0x842cbd*/
  v17 = Stage; /*0x842cae*/
  v19 = v18(v9, 0); /*0x842cc1*/
  v20 = *(_DWORD *)v17->Name; /*0x842cc3*/
  v24 = v19; /*0x842cc8*/
  if ( v20 != v19 ) /*0x842ccc*/
  {
    if ( v20 ) /*0x842cd0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x842cd6*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x842ced*/
      v19 = v24; /*0x842cef*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x842cf9*/
    if ( v19 ) /*0x842cfc*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x842d02*/
  }
  sub_848FA0(Stage, (int)v9); /*0x842d10*/
  ++v7->RefCount; /*0x842d1a*/
  Stage = v7; /*0x842d1d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x842d35*/
  if ( v7->RefCount-- == 1 ) /*0x842d3d*/
    NiD3DPass_ReleaseToPool(v7); /*0x842d48*/
  ++*((_DWORD *)this + 0xE); /*0x842d4d*/
}
