void __thiscall sub_83B2E0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, float *a5)
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

  v6 = *(float **)&Stage->Name[8]; /*0x83b30a*/
  v7 = (NiD3DPass *)unk_B45790; /*0x83b30d*/
  sub_848E50(v6); /*0x83b314*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x83b32b*/
  v8 = a5; /*0x83b32d*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83b337*/
  flt_B464A0[0x63] = v8[0x2B]; /*0x83b342*/
  flt_B464A0[0x64] = v8[0x2C]; /*0x83b34e*/
  flt_B464A0[0x65] = v8[0x2D]; /*0x83b35a*/
  v10 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v8 + 0x88); /*0x83b366*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83b370*/
  v9 = Stage; /*0x83b362*/
  v11 = v10(v8, 0); /*0x83b374*/
  v12 = *(_DWORD *)v9->Name; /*0x83b376*/
  v21 = v11; /*0x83b37b*/
  if ( v12 != v11 ) /*0x83b37f*/
  {
    if ( v12 ) /*0x83b383*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x83b389*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x83b3a0*/
      v11 = v21; /*0x83b3a2*/
    }
    *(_DWORD *)Stage->Name = v11; /*0x83b3ac*/
    if ( v11 ) /*0x83b3af*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x83b3b5*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83b3c3*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83b3d3*/
  v13 = Stage; /*0x83b3cb*/
  v14 = sub_848FD0(v8, 0); /*0x83b3d7*/
  v15 = *(_DWORD *)v13->Name; /*0x83b3dc*/
  v22 = v14; /*0x83b3e1*/
  if ( v15 != v14 ) /*0x83b3e5*/
  {
    if ( v15 ) /*0x83b3e9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x83b3ef*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x83b406*/
      v14 = v22; /*0x83b408*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x83b412*/
    if ( v14 ) /*0x83b415*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x83b41b*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83b429*/
  v17 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v8 + 0x88); /*0x83b436*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x83b440*/
  v16 = Stage; /*0x83b431*/
  v18 = v17(v8, 1); /*0x83b444*/
  v19 = *(_DWORD *)v16->Name; /*0x83b446*/
  v23 = v18; /*0x83b44b*/
  if ( v19 != v18 ) /*0x83b44f*/
  {
    if ( v19 ) /*0x83b453*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83b459*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83b470*/
      v18 = v23; /*0x83b472*/
    }
    *(_DWORD *)Stage->Name = v18; /*0x83b47c*/
    if ( v18 ) /*0x83b47f*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x83b485*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83b493*/
  ++v7->RefCount; /*0x83b49d*/
  Stage = v7; /*0x83b4a0*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83b4b8*/
  if ( v7->RefCount-- == 1 ) /*0x83b4c0*/
    NiD3DPass_ReleaseToPool(v7); /*0x83b4cb*/
  ++*((_DWORD *)this + 0xE); /*0x83b4d0*/
}
