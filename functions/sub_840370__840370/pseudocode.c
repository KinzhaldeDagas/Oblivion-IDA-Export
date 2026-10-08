void __thiscall sub_840370(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, float *a5)
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

  v6 = Stage; /*0x840396*/
  v7 = *(float **)&Stage->Name[8]; /*0x84039a*/
  v8 = (NiD3DPass *)unk_B458C0; /*0x84039d*/
  sub_848E50(v7); /*0x8403a4*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x8403bd*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x8403bf*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x8403c9*/
  flt_B464A0[0x63] = v9[0x2B]; /*0x8403d4*/
  flt_B464A0[0x64] = v9[0x2C]; /*0x8403e0*/
  flt_B464A0[0x65] = v9[0x2D]; /*0x8403ec*/
  v11 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 0x88); /*0x8403f8*/
  Stage = (NiD3DPass *)v8->Stages.data->Stage; /*0x840402*/
  v10 = Stage; /*0x8403f4*/
  v12 = v11(v9, 0); /*0x840406*/
  v13 = *(_DWORD *)v10->Name; /*0x840408*/
  v22 = v12; /*0x84040d*/
  if ( v13 != v12 ) /*0x840411*/
  {
    if ( v13 ) /*0x840415*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x84041b*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x840432*/
      v12 = v22; /*0x840434*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x84043e*/
    if ( v12 ) /*0x840441*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x840447*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840455*/
  Stage = (NiD3DPass *)v8->Stages.data->Texture; /*0x840465*/
  v14 = Stage; /*0x84045d*/
  v15 = sub_848FD0(v9, 0); /*0x840469*/
  v16 = *(_DWORD *)v14->Name; /*0x84046e*/
  v23 = v15; /*0x840473*/
  if ( v16 != v15 ) /*0x840477*/
  {
    if ( v16 ) /*0x84047b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x840481*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x840498*/
      v15 = v23; /*0x84049a*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x8404a4*/
    if ( v15 ) /*0x8404a7*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8404ad*/
  }
  sub_848FA0(Stage, (int)v9); /*0x8404bb*/
  v18 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v9 + 0x88); /*0x8404c8*/
  Stage = (NiD3DPass *)v8->Stages.data[1].Texture; /*0x8404d2*/
  v17 = Stage; /*0x8404c3*/
  v19 = v18(v9, 1); /*0x8404d6*/
  v20 = *(_DWORD *)v17->Name; /*0x8404d8*/
  v24 = v19; /*0x8404dd*/
  if ( v20 != v19 ) /*0x8404e1*/
  {
    if ( v20 ) /*0x8404e5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x8404eb*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x840502*/
      v19 = v24; /*0x840504*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x84050e*/
    if ( v19 ) /*0x840511*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x840517*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840525*/
  ++v8->RefCount; /*0x84052f*/
  Stage = v8; /*0x840532*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x84054a*/
  if ( v8->RefCount-- == 1 ) /*0x840552*/
    NiD3DPass_ReleaseToPool(v8); /*0x84055d*/
  ++*((_DWORD *)this + 0xE); /*0x840562*/
}
