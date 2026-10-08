void __thiscall sub_83EF30(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, float *a5)
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

  v6 = Stage; /*0x83ef56*/
  v7 = *(float **)&Stage->Name[8]; /*0x83ef5a*/
  v8 = (NiD3DPass *)unk_B45870; /*0x83ef5d*/
  sub_848E50(v7); /*0x83ef64*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x83ef7d*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x83ef7f*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83ef89*/
  flt_B464A0[0x63] = v9[0x2B]; /*0x83ef94*/
  flt_B464A0[0x64] = v9[0x2C]; /*0x83efa0*/
  flt_B464A0[0x65] = v9[0x2D]; /*0x83efac*/
  v11 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 0x88); /*0x83efb8*/
  Stage = (NiD3DPass *)v8->Stages.data->Stage; /*0x83efc2*/
  v10 = Stage; /*0x83efb4*/
  v12 = v11(v9, 0); /*0x83efc6*/
  v13 = *(_DWORD *)v10->Name; /*0x83efc8*/
  v22 = v12; /*0x83efcd*/
  if ( v13 != v12 ) /*0x83efd1*/
  {
    if ( v13 ) /*0x83efd5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83efdb*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83eff2*/
      v12 = v22; /*0x83eff4*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83effe*/
    if ( v12 ) /*0x83f001*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83f007*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83f015*/
  Stage = (NiD3DPass *)v8->Stages.data->Texture; /*0x83f025*/
  v14 = Stage; /*0x83f01d*/
  v15 = sub_848FD0(v9, 0); /*0x83f029*/
  v16 = *(_DWORD *)v14->Name; /*0x83f02e*/
  v23 = v15; /*0x83f033*/
  if ( v16 != v15 ) /*0x83f037*/
  {
    if ( v16 ) /*0x83f03b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83f041*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83f058*/
      v15 = v23; /*0x83f05a*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83f064*/
    if ( v15 ) /*0x83f067*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83f06d*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83f07b*/
  v18 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v9 + 0x88); /*0x83f088*/
  Stage = (NiD3DPass *)v8->Stages.data[1].Texture; /*0x83f092*/
  v17 = Stage; /*0x83f083*/
  v19 = v18(v9, 1); /*0x83f096*/
  v20 = *(_DWORD *)v17->Name; /*0x83f098*/
  v24 = v19; /*0x83f09d*/
  if ( v20 != v19 ) /*0x83f0a1*/
  {
    if ( v20 ) /*0x83f0a5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83f0ab*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x83f0c2*/
      v19 = v24; /*0x83f0c4*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x83f0ce*/
    if ( v19 ) /*0x83f0d1*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83f0d7*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83f0e5*/
  ++v8->RefCount; /*0x83f0ef*/
  Stage = v8; /*0x83f0f2*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83f10a*/
  if ( v8->RefCount-- == 1 ) /*0x83f112*/
    NiD3DPass_ReleaseToPool(v8); /*0x83f11d*/
  ++*((_DWORD *)this + 0xE); /*0x83f122*/
}
