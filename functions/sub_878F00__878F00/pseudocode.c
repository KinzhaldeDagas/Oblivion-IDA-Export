void __thiscall sub_878F00(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, int *a5)
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

  v6 = (NiD3DPass *)Stage; /*0x878f26*/
  v7 = *(float **)(Stage + 0xC); /*0x878f2a*/
  v8 = (NiD3DPass *)unk_B476CC; /*0x878f2d*/
  sub_848E50(v7); /*0x878f34*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x878f4d*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x878f52*/
  v11 = *(int (__thiscall **)(int *, _DWORD))(*a5 + 0x88); /*0x878f5b*/
  Stage = v8->Stages.data->Stage; /*0x878f65*/
  v10 = (NiD3DPass *)Stage; /*0x878f56*/
  v12 = v11(a5, 0); /*0x878f69*/
  v13 = *(_DWORD *)v10->Name; /*0x878f6b*/
  v25 = v12; /*0x878f70*/
  if ( v13 != v12 ) /*0x878f74*/
  {
    if ( v13 ) /*0x878f78*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x878f7e*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x878f94*/
      v12 = v25; /*0x878f96*/
    }
    *(_DWORD *)(Stage + 4) = v12; /*0x878fa0*/
    if ( v12 ) /*0x878fa3*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x878fa9*/
  }
  Stage = (UInt32)v8->Stages.data->Texture; /*0x878fba*/
  v14 = (NiD3DPass *)Stage; /*0x878fb2*/
  v15 = sub_848FD0(v9, 0); /*0x878fbe*/
  v16 = *(_DWORD *)v14->Name; /*0x878fc3*/
  v26 = v15; /*0x878fc8*/
  if ( v16 != v15 ) /*0x878fcc*/
  {
    if ( v16 ) /*0x878fd0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x878fd6*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x878fec*/
      v15 = v26; /*0x878fee*/
    }
    *(_DWORD *)(Stage + 4) = v15; /*0x878ff8*/
    if ( v15 ) /*0x878ffb*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x879001*/
  }
  v17 = *v9; /*0x87900d*/
  Stage = (UInt32)v8->Stages.data[1].Texture; /*0x879010*/
  v18 = (*(int (__thiscall **)(int *, _DWORD))(v17 + 0x90))(v9, 0); /*0x87901e*/
  v19 = *(_DWORD *)(Stage + 4); /*0x879024*/
  v20 = v18; /*0x879027*/
  if ( v19 != v18 ) /*0x87902b*/
  {
    if ( v19 ) /*0x87902f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x879035*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x87904c*/
    }
    *(_DWORD *)(Stage + 4) = v20; /*0x879054*/
    if ( v20 ) /*0x879057*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x87905d*/
  }
  Unk08 = v8->Stages.data[1].Unk08; /*0x879066*/
  v22 = *(_DWORD *)(Unk08 + 4); /*0x87906e*/
  v23 = v22 == LODWORD(flt_B43110[0]); /*0x879071*/
  v24 = flt_B43110[0]; /*0x879073*/
  Stage = LODWORD(flt_B43110[0]); /*0x879075*/
  if ( !v23 ) /*0x879079*/
  {
    if ( v22 ) /*0x87907d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x879083*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x879099*/
      v24 = *(float *)&Stage; /*0x87909b*/
    }
    *(float *)(Unk08 + 4) = v24; /*0x8790a1*/
    if ( v24 != 0.0 ) /*0x8790a4*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v24) + 4)); /*0x8790aa*/
  }
  ++v8->RefCount; /*0x8790b5*/
  Stage = (UInt32)v8; /*0x8790b8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x8790d0*/
  v23 = v8->RefCount-- == 1; /*0x8790d8*/
  if ( v23 ) /*0x8790df*/
    NiD3DPass_ReleaseToPool(v8); /*0x8790e3*/
  ++*((_DWORD *)this + 0xE); /*0x8790e8*/
}
