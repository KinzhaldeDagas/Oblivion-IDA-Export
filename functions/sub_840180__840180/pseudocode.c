void __thiscall sub_840180(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
{
  NiD3DPass *v6; // ebx
  NiD3DPass *v7; // edi
  float *v8; // ebp
  _DWORD *v9; // ebx
  NiD3DPass *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebp
  NiD3DPass *v14; // ebp
  int v15; // eax
  int v16; // ebp
  NiD3DPass *v17; // ebp
  int (__thiscall *v18)(_DWORD *, _DWORD); // eax
  int v19; // eax
  int v20; // ebp
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]

  v6 = Stage; /*0x8401a6*/
  v7 = (NiD3DPass *)unk_B458BC; /*0x8401ad*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x8401b4*/
  v8 = *(float **)&v6->Name[8]; /*0x8401b9*/
  sub_848E50(v8); /*0x8401bf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x8401d8*/
    this,
    a2,
    v8,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x8401dd*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8401e5*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x8401ef*/
  v10 = Stage; /*0x8401e1*/
  v12 = v11(a5, 0); /*0x8401f3*/
  v13 = *(_DWORD *)v10->Name; /*0x8401f5*/
  v22 = v12; /*0x8401fa*/
  if ( v13 != v12 ) /*0x8401fe*/
  {
    if ( v13 ) /*0x840202*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x840208*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x84021f*/
      v12 = v22; /*0x840221*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x84022b*/
    if ( v12 ) /*0x84022e*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x840234*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840242*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x840252*/
  v14 = Stage; /*0x84024a*/
  v15 = sub_848FD0(v9, 0); /*0x840256*/
  v16 = *(_DWORD *)v14->Name; /*0x84025b*/
  v23 = v15; /*0x840260*/
  if ( v16 != v15 ) /*0x840264*/
  {
    if ( v16 ) /*0x840268*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x84026e*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x840285*/
      v15 = v23; /*0x840287*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x840291*/
    if ( v15 ) /*0x840294*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x84029a*/
  }
  sub_848FA0(Stage, (int)v9); /*0x8402a8*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x8402b5*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x8402bf*/
  v17 = Stage; /*0x8402b0*/
  v19 = v18(v9, 0); /*0x8402c3*/
  v20 = *(_DWORD *)v17->Name; /*0x8402c5*/
  v24 = v19; /*0x8402ca*/
  if ( v20 != v19 ) /*0x8402ce*/
  {
    if ( v20 ) /*0x8402d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x8402d8*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x8402ef*/
      v19 = v24; /*0x8402f1*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x8402fb*/
    if ( v19 ) /*0x8402fe*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x840304*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840312*/
  ++v7->RefCount; /*0x84031c*/
  Stage = v7; /*0x84031f*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x840337*/
  if ( v7->RefCount-- == 1 ) /*0x84033f*/
    NiD3DPass_ReleaseToPool(v7); /*0x84034a*/
  ++*((_DWORD *)this + 0xE); /*0x84034f*/
}
