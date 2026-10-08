void __thiscall sub_8408F0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, float *a5)
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

  v6 = Stage; /*0x840916*/
  v7 = *(float **)&Stage->Name[8]; /*0x84091a*/
  v8 = (NiD3DPass *)unk_B458D8; /*0x84091d*/
  sub_848E50(v7); /*0x840924*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x84093d*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x84093f*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x840949*/
  flt_B464A0[0x63] = v9[0x2B]; /*0x840954*/
  flt_B464A0[0x64] = v9[0x2C]; /*0x840960*/
  flt_B464A0[0x65] = v9[0x2D]; /*0x84096c*/
  v11 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 0x88); /*0x840978*/
  Stage = (NiD3DPass *)v8->Stages.data->Stage; /*0x840982*/
  v10 = Stage; /*0x840974*/
  v12 = v11(v9, 0); /*0x840986*/
  v13 = *(_DWORD *)v10->Name; /*0x840988*/
  v22 = v12; /*0x84098d*/
  if ( v13 != v12 ) /*0x840991*/
  {
    if ( v13 ) /*0x840995*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x84099b*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x8409b2*/
      v12 = v22; /*0x8409b4*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x8409be*/
    if ( v12 ) /*0x8409c1*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x8409c7*/
  }
  sub_848FA0(Stage, (int)v9); /*0x8409d5*/
  Stage = (NiD3DPass *)v8->Stages.data->Texture; /*0x8409e5*/
  v14 = Stage; /*0x8409dd*/
  v15 = sub_848FD0(v9, 0); /*0x8409e9*/
  v16 = *(_DWORD *)v14->Name; /*0x8409ee*/
  v23 = v15; /*0x8409f3*/
  if ( v16 != v15 ) /*0x8409f7*/
  {
    if ( v16 ) /*0x8409fb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x840a01*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x840a18*/
      v15 = v23; /*0x840a1a*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x840a24*/
    if ( v15 ) /*0x840a27*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x840a2d*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840a3b*/
  v18 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v9 + 0x88); /*0x840a48*/
  Stage = (NiD3DPass *)v8->Stages.data[1].Texture; /*0x840a52*/
  v17 = Stage; /*0x840a43*/
  v19 = v18(v9, 1); /*0x840a56*/
  v20 = *(_DWORD *)v17->Name; /*0x840a58*/
  v24 = v19; /*0x840a5d*/
  if ( v20 != v19 ) /*0x840a61*/
  {
    if ( v20 ) /*0x840a65*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x840a6b*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x840a82*/
      v19 = v24; /*0x840a84*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x840a8e*/
    if ( v19 ) /*0x840a91*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x840a97*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840aa5*/
  ++v8->RefCount; /*0x840aaf*/
  Stage = v8; /*0x840ab2*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x840aca*/
  if ( v8->RefCount-- == 1 ) /*0x840ad2*/
    NiD3DPass_ReleaseToPool(v8); /*0x840add*/
  ++*((_DWORD *)this + 0xE); /*0x840ae2*/
}
