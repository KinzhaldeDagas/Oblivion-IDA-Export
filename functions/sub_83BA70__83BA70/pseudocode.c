void __thiscall sub_83BA70(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x83ba96*/
  v7 = (NiD3DPass *)unk_B45B8C; /*0x83ba9d*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x83baa4*/
  v8 = *(float **)&v6->Name[8]; /*0x83baa9*/
  sub_848E50(v8); /*0x83baaf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x83bac6*/
  v9 = a5; /*0x83bacb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83bad3*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x83badd*/
  v10 = Stage; /*0x83bacf*/
  v12 = v11(a5, 0); /*0x83bae1*/
  v13 = *(_DWORD *)v10->Name; /*0x83bae3*/
  v18 = v12; /*0x83bae8*/
  if ( v13 != v12 ) /*0x83baec*/
  {
    if ( v13 ) /*0x83baf0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83baf6*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83bb0d*/
      v12 = v18; /*0x83bb0f*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x83bb19*/
    if ( v12 ) /*0x83bb1c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83bb22*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83bb30*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x83bb40*/
  v14 = Stage; /*0x83bb38*/
  v15 = sub_848FD0(v9, 0); /*0x83bb44*/
  v16 = *(_DWORD *)v14->Name; /*0x83bb49*/
  v19 = v15; /*0x83bb4e*/
  if ( v16 != v15 ) /*0x83bb52*/
  {
    if ( v16 ) /*0x83bb56*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83bb5c*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83bb73*/
      v15 = v19; /*0x83bb75*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x83bb7f*/
    if ( v15 ) /*0x83bb82*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83bb88*/
  }
  sub_848FA0(Stage, (int)v9); /*0x83bb96*/
  ++v7->RefCount; /*0x83bba0*/
  Stage = v7; /*0x83bba3*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x83bbbb*/
  if ( v7->RefCount-- == 1 ) /*0x83bbc3*/
    NiD3DPass_ReleaseToPool(v7); /*0x83bbce*/
  ++*((_DWORD *)this + 0xE); /*0x83bbd3*/
}
