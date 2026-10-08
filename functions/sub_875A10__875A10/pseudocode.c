void __thiscall sub_875A10(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, int *a5)
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

  v6 = *(float **)&Stage->Name[8]; /*0x875a3a*/
  v7 = (NiD3DPass *)unk_B47664; /*0x875a3d*/
  sub_848E50(v6); /*0x875a44*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x875a5b*/
  v8 = a5; /*0x875a60*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x875a69*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x875a73*/
  v9 = Stage; /*0x875a64*/
  v11 = v10(a5, 0); /*0x875a77*/
  v12 = *(_DWORD *)v9->Name; /*0x875a79*/
  v21 = v11; /*0x875a7e*/
  if ( v12 != v11 ) /*0x875a82*/
  {
    if ( v12 ) /*0x875a86*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x875a8c*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x875aa2*/
      v11 = v21; /*0x875aa4*/
    }
    *(_DWORD *)Stage->Name = v11; /*0x875aae*/
    if ( v11 ) /*0x875ab1*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x875ab7*/
  }
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x875ac8*/
  v13 = Stage; /*0x875ac0*/
  v14 = sub_848FD0(v8, 0); /*0x875acc*/
  v15 = *(_DWORD *)v13->Name; /*0x875ad1*/
  v22 = v14; /*0x875ad6*/
  if ( v15 != v14 ) /*0x875ada*/
  {
    if ( v15 ) /*0x875ade*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x875ae4*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x875afa*/
      v14 = v22; /*0x875afc*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x875b06*/
    if ( v14 ) /*0x875b09*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x875b0f*/
  }
  v16 = *v8; /*0x875b1b*/
  Stage = (NiD3DPass *)v7->Stages.data[1].Texture; /*0x875b1e*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x875b2c*/
  v18 = *(_DWORD *)Stage->Name; /*0x875b32*/
  v19 = v17; /*0x875b35*/
  if ( v18 != v17 ) /*0x875b39*/
  {
    if ( v18 ) /*0x875b3d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x875b43*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x875b5a*/
    }
    *(_DWORD *)Stage->Name = v19; /*0x875b62*/
    if ( v19 ) /*0x875b65*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x875b6b*/
  }
  ++v7->RefCount; /*0x875b76*/
  Stage = v7; /*0x875b79*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x875b91*/
  if ( v7->RefCount-- == 1 ) /*0x875b99*/
    NiD3DPass_ReleaseToPool(v7); /*0x875ba4*/
  ++*((_DWORD *)this + 0xE); /*0x875ba9*/
}
