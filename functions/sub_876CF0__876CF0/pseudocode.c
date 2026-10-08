void __thiscall sub_876CF0(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
{
  float *v6; // ebx
  NiD3DPass *v7; // esi
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
  UInt32 Unk08; // ebp
  int v21; // ebx
  bool v22; // zf
  float v23; // ecx
  int v24; // [esp+34h] [ebp+4h]
  int v25; // [esp+34h] [ebp+4h]

  v6 = *(float **)(Stage + 0xC); /*0x876d1a*/
  v7 = (NiD3DPass *)unk_B4768C; /*0x876d1d*/
  sub_848E50(v6); /*0x876d24*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v6, 0); /*0x876d3b*/
  v8 = a5; /*0x876d40*/
  v10 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x876d49*/
  Stage = v7->Stages.data->Stage; /*0x876d53*/
  v9 = (NiD3DPass *)Stage; /*0x876d44*/
  v11 = v10(a5, 0); /*0x876d57*/
  v12 = *(_DWORD *)v9->Name; /*0x876d59*/
  v24 = v11; /*0x876d5e*/
  if ( v12 != v11 ) /*0x876d62*/
  {
    if ( v12 ) /*0x876d66*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x876d6c*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x876d82*/
      v11 = v24; /*0x876d84*/
    }
    *(_DWORD *)(Stage + 4) = v11; /*0x876d8e*/
    if ( v11 ) /*0x876d91*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x876d97*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x876da8*/
  v13 = (NiD3DPass *)Stage; /*0x876da0*/
  v14 = sub_848FD0(v8, 0); /*0x876dac*/
  v15 = *(_DWORD *)v13->Name; /*0x876db1*/
  v25 = v14; /*0x876db6*/
  if ( v15 != v14 ) /*0x876dba*/
  {
    if ( v15 ) /*0x876dbe*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x876dc4*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x876dda*/
      v14 = v25; /*0x876ddc*/
    }
    *(_DWORD *)(Stage + 4) = v14; /*0x876de6*/
    if ( v14 ) /*0x876de9*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x876def*/
  }
  v16 = *v8; /*0x876dfb*/
  Stage = (UInt32)v7->Stages.data[1].Texture; /*0x876dfe*/
  v17 = (*(int (__thiscall **)(int *, _DWORD))(v16 + 0x90))(v8, 0); /*0x876e0c*/
  v18 = *(_DWORD *)(Stage + 4); /*0x876e12*/
  v19 = v17; /*0x876e15*/
  if ( v18 != v17 ) /*0x876e19*/
  {
    if ( v18 ) /*0x876e1d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x876e23*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x876e3a*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x876e42*/
    if ( v19 ) /*0x876e45*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x876e4b*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x876e54*/
  v21 = *(_DWORD *)(Unk08 + 4); /*0x876e5c*/
  v22 = v21 == LODWORD(flt_B43110[0]); /*0x876e5f*/
  v23 = flt_B43110[0]; /*0x876e61*/
  Stage = LODWORD(flt_B43110[0]); /*0x876e63*/
  if ( !v22 ) /*0x876e67*/
  {
    if ( v21 ) /*0x876e6b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x876e71*/
        (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x876e87*/
      v23 = *(float *)&Stage; /*0x876e89*/
    }
    *(float *)(Unk08 + 4) = v23; /*0x876e8f*/
    if ( v23 != 0.0 ) /*0x876e92*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v23) + 4)); /*0x876e98*/
  }
  ++v7->RefCount; /*0x876ea3*/
  Stage = (UInt32)v7; /*0x876ea6*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x876ebe*/
  v22 = v7->RefCount-- == 1; /*0x876ec6*/
  if ( v22 ) /*0x876ecd*/
    NiD3DPass_ReleaseToPool(v7); /*0x876ed1*/
  ++*((_DWORD *)this + 0xE); /*0x876ed6*/
}
