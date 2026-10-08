void __thiscall sub_841EB0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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
  NiD3DPass *v17; // ebp
  int (__thiscall *v18)(_DWORD *, _DWORD); // eax
  int v19; // eax
  int v20; // ebp
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+30h] [ebp+4h]
  int v24; // [esp+30h] [ebp+4h]

  v6 = Stage; /*0x841ed6*/
  v7 = (NiD3DPass *)unk_B456E4; /*0x841edd*/
  sub_848DA0(*(float **)&Stage->Name[0xC]); /*0x841ee4*/
  v8 = *(float **)&v6->Name[8]; /*0x841ee9*/
  sub_848E50(v8); /*0x841eef*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x841f06*/
  v9 = a5; /*0x841f0b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x841f13*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x841f1d*/
  v10 = Stage; /*0x841f0f*/
  v12 = v11(a5, 0); /*0x841f21*/
  v13 = *(_DWORD *)v10->Name; /*0x841f23*/
  v22 = v12; /*0x841f28*/
  if ( v13 != v12 ) /*0x841f2c*/
  {
    if ( v13 ) /*0x841f30*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x841f36*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x841f4d*/
      v12 = v22; /*0x841f4f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x841f59*/
    if ( v12 ) /*0x841f5c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x841f62*/
  }
  sub_848FA0(Stage, (int)v9); /*0x841f70*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x841f80*/
  v14 = Stage; /*0x841f78*/
  v15 = sub_848FD0(v9, 0); /*0x841f84*/
  v16 = *(_DWORD *)v14->Name; /*0x841f89*/
  v23 = v15; /*0x841f8e*/
  if ( v16 != v15 ) /*0x841f92*/
  {
    if ( v16 ) /*0x841f96*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x841f9c*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x841fb3*/
      v15 = v23; /*0x841fb5*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x841fbf*/
    if ( v15 ) /*0x841fc2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x841fc8*/
  }
  sub_848FA0(Stage, (int)v9); /*0x841fd6*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x841fe3*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Stage; /*0x841fed*/
  v17 = Stage; /*0x841fde*/
  v19 = v18(v9, 0); /*0x841ff1*/
  v20 = *(_DWORD *)v17->Name; /*0x841ff3*/
  v24 = v19; /*0x841ff8*/
  if ( v20 != v19 ) /*0x841ffc*/
  {
    if ( v20 ) /*0x842000*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x842006*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x84201d*/
      v19 = v24; /*0x84201f*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x842029*/
    if ( v19 ) /*0x84202c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x842032*/
  }
  sub_848FA0(Stage, (int)v9); /*0x842040*/
  ++v7->RefCount; /*0x84204a*/
  Stage = v7; /*0x84204d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x842065*/
  if ( v7->RefCount-- == 1 ) /*0x84206d*/
    NiD3DPass_ReleaseToPool(v7); /*0x842078*/
  ++*((_DWORD *)this + 0xE); /*0x84207d*/
}
