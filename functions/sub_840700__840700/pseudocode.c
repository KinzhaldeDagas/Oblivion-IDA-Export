void __thiscall sub_840700(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x840726*/
  v7 = (NiD3DPass *)unk_B458D4; /*0x84072d*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x840734*/
  v8 = *(float **)&v6->Name[8]; /*0x840739*/
  sub_848E50(v8); /*0x84073f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x840758*/
    this,
    a2,
    v8,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x84075d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x840765*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x84076f*/
  v10 = Stage; /*0x840761*/
  v12 = v11(a5, 0); /*0x840773*/
  v13 = *(_DWORD *)v10->Name; /*0x840775*/
  v22 = v12; /*0x84077a*/
  if ( v13 != v12 ) /*0x84077e*/
  {
    if ( v13 ) /*0x840782*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x840788*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x84079f*/
      v12 = v22; /*0x8407a1*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x8407ab*/
    if ( v12 ) /*0x8407ae*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x8407b4*/
  }
  sub_848FA0(Stage, (int)v9); /*0x8407c2*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x8407d2*/
  v14 = Stage; /*0x8407ca*/
  v15 = sub_848FD0(v9, 0); /*0x8407d6*/
  v16 = *(_DWORD *)v14->Name; /*0x8407db*/
  v23 = v15; /*0x8407e0*/
  if ( v16 != v15 ) /*0x8407e4*/
  {
    if ( v16 ) /*0x8407e8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x8407ee*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x840805*/
      v15 = v23; /*0x840807*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x840811*/
    if ( v15 ) /*0x840814*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x84081a*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840828*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x840835*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x84083f*/
  v17 = Stage; /*0x840830*/
  v19 = v18(v9, 0); /*0x840843*/
  v20 = *(_DWORD *)v17->Name; /*0x840845*/
  v24 = v19; /*0x84084a*/
  if ( v20 != v19 ) /*0x84084e*/
  {
    if ( v20 ) /*0x840852*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x840858*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x84086f*/
      v19 = v24; /*0x840871*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x84087b*/
    if ( v19 ) /*0x84087e*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x840884*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840892*/
  ++v7->RefCount; /*0x84089c*/
  Stage = v7; /*0x84089f*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x8408b7*/
  if ( v7->RefCount-- == 1 ) /*0x8408bf*/
    NiD3DPass_ReleaseToPool(v7); /*0x8408ca*/
  ++*((_DWORD *)this + 0xE); /*0x8408cf*/
}
