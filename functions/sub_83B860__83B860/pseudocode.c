void __thiscall sub_83B860(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, float *a5)
{
  float *v6; // esi
  NiD3DPass *v7; // ebx
  float *v8; // esi
  NiD3DPass *v9; // ebp
  int (__thiscall *v10)(float *, _DWORD); // eax
  int v11; // eax
  int v12; // ebp
  NiD3DPass *v13; // ebp
  int v14; // eax
  int v15; // ebp
  NiD3DPass *v16; // ebp
  int (__thiscall *v17)(float *, int); // eax
  int v18; // eax
  int v19; // ebp
  int v21; // [esp+30h] [ebp+4h]
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+30h] [ebp+4h]

  v6 = *(float **)&Stage->Name[8]; /*0x83b88a*/
  v7 = (NiD3DPass *)unk_B457AC; /*0x83b88d*/
  sub_848E50(v6); /*0x83b894*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x83b8ab*/
  v8 = a5; /*0x83b8ad*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83b8b7*/
  flt_B464A0[0x63] = v8[0x2B]; /*0x83b8c2*/
  flt_B464A0[0x64] = v8[0x2C]; /*0x83b8ce*/
  flt_B464A0[0x65] = v8[0x2D]; /*0x83b8da*/
  v10 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v8 + 0x88); /*0x83b8e6*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83b8f0*/
  v9 = Stage; /*0x83b8e2*/
  v11 = v10(v8, 0); /*0x83b8f4*/
  v12 = *(_DWORD *)v9->Name; /*0x83b8f6*/
  v21 = v11; /*0x83b8fb*/
  if ( v12 != v11 ) /*0x83b8ff*/
  {
    if ( v12 ) /*0x83b903*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x83b909*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x83b920*/
      v11 = v21; /*0x83b922*/
    }
    *(_DWORD *)Stage->Name = v11; /*0x83b92c*/
    if ( v11 ) /*0x83b92f*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x83b935*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83b943*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83b953*/
  v13 = Stage; /*0x83b94b*/
  v14 = sub_848FD0(v8, 0); /*0x83b957*/
  v15 = *(_DWORD *)v13->Name; /*0x83b95c*/
  v22 = v14; /*0x83b961*/
  if ( v15 != v14 ) /*0x83b965*/
  {
    if ( v15 ) /*0x83b969*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x83b96f*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x83b986*/
      v14 = v22; /*0x83b988*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x83b992*/
    if ( v14 ) /*0x83b995*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x83b99b*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83b9a9*/
  v17 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v8 + 0x88); /*0x83b9b6*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x83b9c0*/
  v16 = Stage; /*0x83b9b1*/
  v18 = v17(v8, 1); /*0x83b9c4*/
  v19 = *(_DWORD *)v16->Name; /*0x83b9c6*/
  v23 = v18; /*0x83b9cb*/
  if ( v19 != v18 ) /*0x83b9cf*/
  {
    if ( v19 ) /*0x83b9d3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83b9d9*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83b9f0*/
      v18 = v23; /*0x83b9f2*/
    }
    *(_DWORD *)Stage->Name = v18; /*0x83b9fc*/
    if ( v18 ) /*0x83b9ff*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x83ba05*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83ba13*/
  ++v7->RefCount; /*0x83ba1d*/
  Stage = v7; /*0x83ba20*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83ba38*/
  if ( v7->RefCount-- == 1 ) /*0x83ba40*/
    NiD3DPass_ReleaseToPool(v7); /*0x83ba4b*/
  ++*((_DWORD *)this + 0xE); /*0x83ba50*/
}
