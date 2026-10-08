void __thiscall sub_83D200(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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
  int v18; // [esp+28h] [ebp+4h]
  int v19; // [esp+28h] [ebp+4h]

  v6 = Stage; /*0x83d226*/
  v7 = (NiD3DPass *)unk_B45800; /*0x83d22d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x83d234*/
  v8 = *(float **)&v6->Name[8]; /*0x83d239*/
  sub_848E50(v8); /*0x83d23f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x83d256*/
  v9 = a5; /*0x83d25b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83d263*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83d26d*/
  v10 = Stage; /*0x83d25f*/
  v12 = v11(a5, 0); /*0x83d271*/
  v13 = *(_DWORD *)v10->Name; /*0x83d273*/
  v18 = v12; /*0x83d278*/
  if ( v13 != v12 ) /*0x83d27c*/
  {
    if ( v13 ) /*0x83d280*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83d286*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83d29d*/
      v12 = v18; /*0x83d29f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83d2a9*/
    if ( v12 ) /*0x83d2ac*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83d2b2*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83d2c0*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83d2d0*/
  v14 = Stage; /*0x83d2c8*/
  v15 = sub_848FD0(v9, 0); /*0x83d2d4*/
  v16 = *(_DWORD *)v14->Name; /*0x83d2d9*/
  v19 = v15; /*0x83d2de*/
  if ( v16 != v15 ) /*0x83d2e2*/
  {
    if ( v16 ) /*0x83d2e6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83d2ec*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83d303*/
      v15 = v19; /*0x83d305*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83d30f*/
    if ( v15 ) /*0x83d312*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83d318*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83d326*/
  ++v7->RefCount; /*0x83d330*/
  Stage = v7; /*0x83d333*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83d34b*/
  if ( v7->RefCount-- == 1 ) /*0x83d353*/
    NiD3DPass_ReleaseToPool(v7); /*0x83d35e*/
  ++*((_DWORD *)this + 0xE); /*0x83d363*/
}
