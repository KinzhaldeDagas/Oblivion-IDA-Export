void __thiscall sub_878B40(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
{
  NiD3DPass *v6; // ebp
  float *v7; // ebx
  NiD3DPass *v8; // edi
  int *v9; // ebp
  NiD3DPass *v10; // ebx
  int (__thiscall *v11)(int *, _DWORD); // eax
  int v12; // eax
  int v13; // ebx
  NiD3DPass *v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // edx
  int v18; // eax
  int v19; // ebp
  int v20; // ebx
  UInt32 Unk08; // ebp
  int v22; // ebx
  bool v23; // zf
  float v24; // ecx
  int v25; // [esp+34h] [ebp+4h]
  int v26; // [esp+34h] [ebp+4h]

  v6 = (NiD3DPass *)Stage; /*0x878b66*/
  v7 = *(float **)(Stage + 0xC); /*0x878b6a*/
  v8 = (NiD3DPass *)unk_B476C4; /*0x878b6d*/
  sub_848E50(v7); /*0x878b74*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x878b8d*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x878b92*/
  v11 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x878b9b*/
  Stage = v8->Stages.data->Stage; /*0x878ba5*/
  v10 = (NiD3DPass *)Stage; /*0x878b96*/
  v12 = v11(a5, 0); /*0x878ba9*/
  v13 = *(_DWORD *)v10->Name; /*0x878bab*/
  v25 = v12; /*0x878bb0*/
  if ( v13 != v12 ) /*0x878bb4*/
  {
    if ( v13 ) /*0x878bb8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x878bbe*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x878bd4*/
      v12 = v25; /*0x878bd6*/
    }
    *(_DWORD *)(Stage + 4) = v12; /*0x878be0*/
    if ( v12 ) /*0x878be3*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x878be9*/
  }
  Stage = (UInt32)v8->Stages.data->Texture; /*0x878bfa*/
  v14 = (NiD3DPass *)Stage; /*0x878bf2*/
  v15 = sub_848FD0(v9, 0); /*0x878bfe*/
  v16 = *(_DWORD *)v14->Name; /*0x878c03*/
  v26 = v15; /*0x878c08*/
  if ( v16 != v15 ) /*0x878c0c*/
  {
    if ( v16 ) /*0x878c10*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x878c16*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x878c2c*/
      v15 = v26; /*0x878c2e*/
    }
    *(_DWORD *)(Stage + 4) = v15; /*0x878c38*/
    if ( v15 ) /*0x878c3b*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x878c41*/
  }
  v17 = *v9; /*0x878c4d*/
  Stage = (UInt32)v8->Stages.data[1].Texture; /*0x878c50*/
  v18 = (*(int (__thiscall **)(int *, _DWORD))(v17 + 0x90))(v9, 0); /*0x878c5e*/
  v19 = *(_DWORD *)(Stage + 4); /*0x878c64*/
  v20 = v18; /*0x878c67*/
  if ( v19 != v18 ) /*0x878c6b*/
  {
    if ( v19 ) /*0x878c6f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x878c75*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x878c8c*/
    }
    *(_DWORD *)(Stage + 4) = v20; /*0x878c94*/
    if ( v20 ) /*0x878c97*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x878c9d*/
  }
  Unk08 = v8->Stages.data[1].Unk08; /*0x878ca6*/
  v22 = *(_DWORD *)(Unk08 + 4); /*0x878cae*/
  v23 = v22 == LODWORD(flt_B43110[0]); /*0x878cb1*/
  v24 = flt_B43110[0]; /*0x878cb3*/
  Stage = LODWORD(flt_B43110[0]); /*0x878cb5*/
  if ( !v23 ) /*0x878cb9*/
  {
    if ( v22 ) /*0x878cbd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x878cc3*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x878cd9*/
      v24 = *(float *)&Stage; /*0x878cdb*/
    }
    *(float *)(Unk08 + 4) = v24; /*0x878ce1*/
    if ( v24 != 0.0 ) /*0x878ce4*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v24) + 4)); /*0x878cea*/
  }
  ++v8->RefCount; /*0x878cf5*/
  Stage = (UInt32)v8; /*0x878cf8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x878d10*/
  v23 = v8->RefCount-- == 1; /*0x878d18*/
  if ( v23 ) /*0x878d1f*/
    NiD3DPass_ReleaseToPool(v8); /*0x878d23*/
  ++*((_DWORD *)this + 0xE); /*0x878d28*/
}
