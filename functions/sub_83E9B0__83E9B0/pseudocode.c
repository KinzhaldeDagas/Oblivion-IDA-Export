void __thiscall sub_83E9B0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, float *a5)
{
  NiD3DPass *v6; // ebp
  float *v7; // esi
  NiD3DPass *v8; // ebx
  float *v9; // esi
  NiD3DPass *v10; // ebp
  int (__thiscall *v11)(float *, _DWORD); // eax
  int v12; // eax
  int v13; // ebp
  NiD3DPass *v14; // ebp
  int v15; // eax
  int v16; // ebp
  NiD3DPass *v17; // ebp
  int (__thiscall *v18)(float *, int); // eax
  int v19; // eax
  int v20; // ebp
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]

  v6 = Stage; /*0x83e9d6*/
  v7 = *(float **)&Stage->Name[8]; /*0x83e9da*/
  v8 = (NiD3DPass *)unk_B45858; /*0x83e9dd*/
  sub_848E50(v7); /*0x83e9e4*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x83e9fd*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x83e9ff*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83ea09*/
  flt_B464A0[0x63] = v9[0x2B]; /*0x83ea14*/
  flt_B464A0[0x64] = v9[0x2C]; /*0x83ea20*/
  flt_B464A0[0x65] = v9[0x2D]; /*0x83ea2c*/
  v11 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 0x88); /*0x83ea38*/
  Stage = (NiD3DPass *)v8->Stages.data->Stage; /*0x83ea42*/
  v10 = Stage; /*0x83ea34*/
  v12 = v11(v9, 0); /*0x83ea46*/
  v13 = *(_DWORD *)v10->Name; /*0x83ea48*/
  v22 = v12; /*0x83ea4d*/
  if ( v13 != v12 ) /*0x83ea51*/
  {
    if ( v13 ) /*0x83ea55*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83ea5b*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83ea72*/
      v12 = v22; /*0x83ea74*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83ea7e*/
    if ( v12 ) /*0x83ea81*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83ea87*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83ea95*/
  Stage = (NiD3DPass *)v8->Stages.data->Texture; /*0x83eaa5*/
  v14 = Stage; /*0x83ea9d*/
  v15 = sub_848FD0(v9, 0); /*0x83eaa9*/
  v16 = *(_DWORD *)v14->Name; /*0x83eaae*/
  v23 = v15; /*0x83eab3*/
  if ( v16 != v15 ) /*0x83eab7*/
  {
    if ( v16 ) /*0x83eabb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83eac1*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83ead8*/
      v15 = v23; /*0x83eada*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83eae4*/
    if ( v15 ) /*0x83eae7*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83eaed*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83eafb*/
  v18 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v9 + 0x88); /*0x83eb08*/
  Stage = (NiD3DPass *)v8->Stages.data[1].Texture; /*0x83eb12*/
  v17 = Stage; /*0x83eb03*/
  v19 = v18(v9, 1); /*0x83eb16*/
  v20 = *(_DWORD *)v17->Name; /*0x83eb18*/
  v24 = v19; /*0x83eb1d*/
  if ( v20 != v19 ) /*0x83eb21*/
  {
    if ( v20 ) /*0x83eb25*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83eb2b*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x83eb42*/
      v19 = v24; /*0x83eb44*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x83eb4e*/
    if ( v19 ) /*0x83eb51*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83eb57*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83eb65*/
  ++v8->RefCount; /*0x83eb6f*/
  Stage = v8; /*0x83eb72*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83eb8a*/
  if ( v8->RefCount-- == 1 ) /*0x83eb92*/
    NiD3DPass_ReleaseToPool(v8); /*0x83eb9d*/
  ++*((_DWORD *)this + 0xE); /*0x83eba2*/
}
