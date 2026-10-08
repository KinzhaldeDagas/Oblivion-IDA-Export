void __thiscall sub_83BE10(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, _DWORD *a5)
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
  UInt32 v17; // ebp
  int v18; // ebx
  bool v19; // zf
  float v20; // ecx
  int v21; // [esp+2Ch] [ebp+4h]
  int v22; // [esp+2Ch] [ebp+4h]

  v6 = (NiD3DPass *)Stage; /*0x83be36*/
  v7 = (NiD3DPass *)unk_B457B4; /*0x83be3d*/
  sub_848C40(*(float **)(Stage + 0x10)); /*0x83be44*/
  v8 = *(float **)&v6->Name[8]; /*0x83be49*/
  sub_848E50(v8); /*0x83be4f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x83be66*/
  v9 = a5; /*0x83be6b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83be73*/
  Stage = v7->Stages.data->Stage; /*0x83be7d*/
  v10 = (NiD3DPass *)Stage; /*0x83be6f*/
  v12 = v11(a5, 0); /*0x83be81*/
  v13 = *(_DWORD *)v10->Name; /*0x83be83*/
  v21 = v12; /*0x83be88*/
  if ( v13 != v12 ) /*0x83be8c*/
  {
    if ( v13 ) /*0x83be90*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83be96*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83bead*/
      v12 = v21; /*0x83beaf*/
    }
    *(_DWORD *)(Stage + 4) = v12; /*0x83beb9*/
    if ( v12 ) /*0x83bebc*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83bec2*/
  }
  sub_848FA0((_DWORD **)Stage, (int)v9); /*0x83bed0*/
  Stage = (UInt32)v7->Stages.data->Texture; /*0x83bee0*/
  v14 = (NiD3DPass *)Stage; /*0x83bed8*/
  v15 = sub_848FD0(v9, 0); /*0x83bee4*/
  v16 = *(_DWORD *)v14->Name; /*0x83bee9*/
  v22 = v15; /*0x83beee*/
  if ( v16 != v15 ) /*0x83bef2*/
  {
    if ( v16 ) /*0x83bef6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83befc*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83bf13*/
      v15 = v22; /*0x83bf15*/
    }
    *(_DWORD *)(Stage + 4) = v15; /*0x83bf1f*/
    if ( v15 ) /*0x83bf22*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83bf28*/
  }
  sub_848FA0((_DWORD **)Stage, (int)v9); /*0x83bf36*/
  v17 = v7->Stages.data[2].Stage; /*0x83bf3e*/
  v18 = *(_DWORD *)(v17 + 4); /*0x83bf46*/
  v19 = v18 == LODWORD(flt_B430DC[3]); /*0x83bf49*/
  v20 = flt_B430DC[3]; /*0x83bf4b*/
  Stage = LODWORD(flt_B430DC[3]); /*0x83bf4d*/
  if ( !v19 ) /*0x83bf51*/
  {
    if ( v18 ) /*0x83bf55*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x83bf5b*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x83bf71*/
      v20 = *(float *)&Stage; /*0x83bf73*/
    }
    *(float *)(v17 + 4) = v20; /*0x83bf79*/
    if ( v20 != 0.0 ) /*0x83bf7c*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v20) + 4)); /*0x83bf82*/
  }
  ++v7->RefCount; /*0x83bf8d*/
  Stage = (UInt32)v7; /*0x83bf90*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83bfa8*/
  v19 = v7->RefCount-- == 1; /*0x83bfb0*/
  if ( v19 ) /*0x83bfb7*/
    NiD3DPass_ReleaseToPool(v7); /*0x83bfbb*/
  ++*((_DWORD *)this + 0xE); /*0x83bfc0*/
}
