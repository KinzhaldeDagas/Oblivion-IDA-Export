void __thiscall sub_875D30(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, int *a5)
{
  float *v6; // ebx
  NiD3DPass *v7; // edi
  int *v8; // ebp
  NiD3DPass *v9; // ebx
  int (__thiscall *v10)(int *, _DWORD); // eax
  int v11; // eax
  int v12; // ebx
  NiD3DPass *v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // ebp
  int v19; // ebx
  int v21; // [esp+30h] [ebp+4h]
  int v22; // [esp+30h] [ebp+4h]

  v6 = *(float **)&Stage->Name[8]; /*0x875d5a*/
  v7 = (NiD3DPass *)unk_B4766C; /*0x875d5d*/
  sub_848E50(v6); /*0x875d64*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x875d7b*/
  v8 = a5; /*0x875d80*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x875d89*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x875d93*/
  v9 = Stage; /*0x875d84*/
  v11 = v10(a5, 0); /*0x875d97*/
  v12 = *(_DWORD *)v9->Name; /*0x875d99*/
  v21 = v11; /*0x875d9e*/
  if ( v12 != v11 ) /*0x875da2*/
  {
    if ( v12 ) /*0x875da6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x875dac*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x875dc2*/
      v11 = v21; /*0x875dc4*/
    }
    *(_DWORD *)Stage->Name = v11; /*0x875dce*/
    if ( v11 ) /*0x875dd1*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x875dd7*/
  }
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x875de8*/
  v13 = Stage; /*0x875de0*/
  v14 = sub_848FD0(v8, 0); /*0x875dec*/
  v15 = *(_DWORD *)v13->Name; /*0x875df1*/
  v22 = v14; /*0x875df6*/
  if ( v15 != v14 ) /*0x875dfa*/
  {
    if ( v15 ) /*0x875dfe*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x875e04*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x875e1a*/
      v14 = v22; /*0x875e1c*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x875e26*/
    if ( v14 ) /*0x875e29*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x875e2f*/
  }
  v16 = *v8; /*0x875e3b*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x875e3e*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x875e4c*/
  v18 = *(_DWORD *)Stage->Name; /*0x875e52*/
  v19 = v17; /*0x875e55*/
  if ( v18 != v17 ) /*0x875e59*/
  {
    if ( v18 ) /*0x875e5d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x875e63*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x875e7a*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x875e82*/
    if ( v19 ) /*0x875e85*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x875e8b*/
  }
  ++v7->RefCount; /*0x875e96*/
  Stage = v7; /*0x875e99*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x875eb1*/
  if ( v7->RefCount-- == 1 ) /*0x875eb9*/
    NiD3DPass_ReleaseToPool(v7); /*0x875ec4*/
  ++*((_DWORD *)this + 0xE); /*0x875ec9*/
}
