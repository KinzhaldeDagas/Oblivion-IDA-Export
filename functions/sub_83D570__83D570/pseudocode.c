void __thiscall sub_83D570(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, float *a5)
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

  v6 = *(float **)&Stage->Name[8]; /*0x83d59a*/
  v7 = (NiD3DPass *)unk_B45818; /*0x83d59d*/
  sub_848E50(v6); /*0x83d5a4*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x83d5bb*/
  v8 = a5; /*0x83d5bd*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83d5c7*/
  flt_B464A0[0x63] = v8[0x2B]; /*0x83d5d2*/
  flt_B464A0[0x64] = v8[0x2C]; /*0x83d5de*/
  flt_B464A0[0x65] = v8[0x2D]; /*0x83d5ea*/
  v10 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v8 + 0x88); /*0x83d5f6*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83d600*/
  v9 = Stage; /*0x83d5f2*/
  v11 = v10(v8, 0); /*0x83d604*/
  v12 = *(_DWORD *)v9->Name; /*0x83d606*/
  v21 = v11; /*0x83d60b*/
  if ( v12 != v11 ) /*0x83d60f*/
  {
    if ( v12 ) /*0x83d613*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x83d619*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x83d630*/
      v11 = v21; /*0x83d632*/
    }
    *(_DWORD *)Stage->Name = v11; /*0x83d63c*/
    if ( v11 ) /*0x83d63f*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x83d645*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83d653*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83d663*/
  v13 = Stage; /*0x83d65b*/
  v14 = sub_848FD0(v8, 0); /*0x83d667*/
  v15 = *(_DWORD *)v13->Name; /*0x83d66c*/
  v22 = v14; /*0x83d671*/
  if ( v15 != v14 ) /*0x83d675*/
  {
    if ( v15 ) /*0x83d679*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x83d67f*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x83d696*/
      v14 = v22; /*0x83d698*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x83d6a2*/
    if ( v14 ) /*0x83d6a5*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x83d6ab*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83d6b9*/
  v17 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v8 + 0x88); /*0x83d6c6*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x83d6d0*/
  v16 = Stage; /*0x83d6c1*/
  v18 = v17(v8, 1); /*0x83d6d4*/
  v19 = *(_DWORD *)v16->Name; /*0x83d6d6*/
  v23 = v18; /*0x83d6db*/
  if ( v19 != v18 ) /*0x83d6df*/
  {
    if ( v19 ) /*0x83d6e3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x83d6e9*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x83d700*/
      v18 = v23; /*0x83d702*/
    }
    *(_DWORD *)Stage->Name = v18; /*0x83d70c*/
    if ( v18 ) /*0x83d70f*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x83d715*/
  }
  sub_848FA0(Stage, (int)v8); /*0x83d723*/
  ++v7->RefCount; /*0x83d72d*/
  Stage = v7; /*0x83d730*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83d748*/
  if ( v7->RefCount-- == 1 ) /*0x83d750*/
    NiD3DPass_ReleaseToPool(v7); /*0x83d75b*/
  ++*((_DWORD *)this + 0xE); /*0x83d760*/
}
