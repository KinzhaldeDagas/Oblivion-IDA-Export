void __thiscall sub_840000(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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
  int v18; // [esp+28h] [ebp+4h]
  int v19; // [esp+28h] [ebp+4h]

  v6 = Stage; /*0x840026*/
  v7 = (NiD3DPass *)unk_B458B8; /*0x84002d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x840034*/
  v8 = *(float **)&v6->Name[8]; /*0x840039*/
  sub_848E50(v8); /*0x84003f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x840058*/
    this,
    a2,
    v8,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x84005d*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x840065*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x84006f*/
  v10 = Stage; /*0x840061*/
  v12 = v11(a5, 0); /*0x840073*/
  v13 = *(_DWORD *)v10->Name; /*0x840075*/
  v18 = v12; /*0x84007a*/
  if ( v13 != v12 ) /*0x84007e*/
  {
    if ( v13 ) /*0x840082*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x840088*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x84009f*/
      v12 = v18; /*0x8400a1*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x8400ab*/
    if ( v12 ) /*0x8400ae*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x8400b4*/
  }
  sub_848FA0(Stage, (int)v9); /*0x8400c2*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x8400d2*/
  v14 = Stage; /*0x8400ca*/
  v15 = sub_848FD0(v9, 0); /*0x8400d6*/
  v16 = *(_DWORD *)v14->Name; /*0x8400db*/
  v19 = v15; /*0x8400e0*/
  if ( v16 != v15 ) /*0x8400e4*/
  {
    if ( v16 ) /*0x8400e8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x8400ee*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x840105*/
      v15 = v19; /*0x840107*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x840111*/
    if ( v15 ) /*0x840114*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x84011a*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840128*/
  ++v7->RefCount; /*0x840132*/
  Stage = v7; /*0x840135*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x84014d*/
  if ( v7->RefCount-- == 1 ) /*0x840155*/
    NiD3DPass_ReleaseToPool(v7); /*0x840160*/
  ++*((_DWORD *)this + 0xE); /*0x840165*/
}
