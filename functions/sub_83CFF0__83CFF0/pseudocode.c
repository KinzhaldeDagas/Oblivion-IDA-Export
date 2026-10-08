void __thiscall sub_83CFF0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, float *a5)
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

  v6 = *(float **)&Stage->Name[8]; /*0x83d01a*/
  v7 = (NiD3DPass *)unk_B457FC; /*0x83d01d*/
  sub_848E50(v6); /*0x83d024*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x83d03b*/
  v8 = a5; /*0x83d03d*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83d047*/
  flt_B464A0[0x63] = v8[0x2B]; /*0x83d052*/
  flt_B464A0[0x64] = v8[0x2C]; /*0x83d05e*/
  flt_B464A0[0x65] = v8[0x2D]; /*0x83d06a*/
  v10 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v8 + 0x88); /*0x83d076*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83d080*/
  v9 = Stage; /*0x83d072*/
  v11 = v10(v8, 0); /*0x83d084*/
  v12 = *(_DWORD *)v9->Name; /*0x83d086*/
  v21 = v11; /*0x83d08b*/
  if ( v12 != v11 ) /*0x83d08f*/
  {
    if ( v12 ) /*0x83d093*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x83d099*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x83d0b0*/
      v11 = v21; /*0x83d0b2*/
    }
    *(_DWORD *)Stage->Name = v11; /*0x83d0bc*/
    if ( v11 ) /*0x83d0bf*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x83d0c5*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83d0d3*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83d0e3*/
  v13 = Stage; /*0x83d0db*/
  v14 = sub_848FD0(v8, 0); /*0x83d0e7*/
  v15 = *(_DWORD *)v13->Name; /*0x83d0ec*/
  v22 = v14; /*0x83d0f1*/
  if ( v15 != v14 ) /*0x83d0f5*/
  {
    if ( v15 ) /*0x83d0f9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x83d0ff*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x83d116*/
      v14 = v22; /*0x83d118*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x83d122*/
    if ( v14 ) /*0x83d125*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x83d12b*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83d139*/
  v17 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v8 + 0x88); /*0x83d146*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x83d150*/
  v16 = Stage; /*0x83d141*/
  v18 = v17(v8, 1); /*0x83d154*/
  v19 = *(_DWORD *)v16->Name; /*0x83d156*/
  v23 = v18; /*0x83d15b*/
  if ( v19 != v18 ) /*0x83d15f*/
  {
    if ( v19 ) /*0x83d163*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83d169*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83d180*/
      v18 = v23; /*0x83d182*/
    }
    *(_DWORD *)Stage->Name = v18; /*0x83d18c*/
    if ( v18 ) /*0x83d18f*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x83d195*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83d1a3*/
  ++v7->RefCount; /*0x83d1ad*/
  Stage = v7; /*0x83d1b0*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83d1c8*/
  if ( v7->RefCount-- == 1 ) /*0x83d1d0*/
    NiD3DPass_ReleaseToPool(v7); /*0x83d1db*/
  ++*((_DWORD *)this + 0xE); /*0x83d1e0*/
}
