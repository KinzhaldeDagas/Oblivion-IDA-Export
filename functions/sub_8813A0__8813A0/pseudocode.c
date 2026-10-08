void __thiscall SkinShader_QueueSKIN2004_SKIN2002(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, _DWORD *a5)
{
  NiD3DPass *v6; // ebx
  NiD3DPass *v7; // edi
  float *v8; // ebx
  _DWORD *v9; // ebp
  NiD3DPass *v10; // ebx
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebx
  NiD3DPass *v14; // ebx
  int v15; // eax
  int v16; // ebx
  NiD3DPass *v17; // ebx
  int (__thiscall *v18)(_DWORD *, int); // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebp
  int v23; // ebx
  UInt32 Unk08; // ebx
  int v25; // ebp
  bool v26; // zf
  float v27; // ecx
  int v28; // [esp+38h] [ebp+4h]
  int v29; // [esp+38h] [ebp+4h]
  int v30; // [esp+38h] [ebp+4h]

  v6 = (NiD3DPass *)Stage; /*0x8813c6*/
  v7 = (NiD3DPass *)unk_B47748; /*0x8813cd*/
  sub_848C40(*(float **)(Stage + 0x10)); /*0x8813d4*/
  v8 = *(float **)&v6->Name[8]; /*0x8813d9*/
  sub_848E50(v8); /*0x8813df*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x8813f6*/
  v9 = a5; /*0x8813fb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x881404*/
  Stage = v7->Stages.data->Stage; /*0x88140e*/
  v10 = (NiD3DPass *)Stage; /*0x8813ff*/
  v12 = v11(a5, 0); /*0x881412*/
  v13 = *(_DWORD *)v10->Name; /*0x881414*/
  v28 = v12; /*0x881419*/
  if ( v13 != v12 ) /*0x88141d*/
  {
    if ( v13 ) /*0x881421*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x881427*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x88143d*/
      v12 = v28; /*0x88143f*/
    }
    *(_DWORD *)(Stage + 4) = v12; /*0x881449*/
    if ( v12 ) /*0x88144c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x881452*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x881463*/
  v14 = (NiD3DPass *)Stage; /*0x88145b*/
  v15 = sub_848FD0(v9, 0); /*0x881467*/
  v16 = *(_DWORD *)v14->Name; /*0x88146c*/
  v29 = v15; /*0x881471*/
  if ( v16 != v15 ) /*0x881475*/
  {
    if ( v16 ) /*0x881479*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x88147f*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x881495*/
      v15 = v29; /*0x881497*/
    }
    *(_DWORD *)(Stage + 4) = v15; /*0x8814a1*/
    if ( v15 ) /*0x8814a4*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8814aa*/
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88); /*0x8814b9*/
  Stage = v7->Stages.data->Unk08; /*0x8814c3*/
  v17 = (NiD3DPass *)Stage; /*0x8814b3*/
  v19 = v18(v9, 1); /*0x8814c7*/
  v20 = *(_DWORD *)v17->Name; /*0x8814c9*/
  v30 = v19; /*0x8814ce*/
  if ( v20 != v19 ) /*0x8814d2*/
  {
    if ( v20 ) /*0x8814d6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x8814dc*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x8814f2*/
      v19 = v30; /*0x8814f4*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x8814fe*/
    if ( v19 ) /*0x881501*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x881507*/
  }
  Stage = v7->Stages.data[1].Stage; /*0x881518*/
  v21 = sub_848FD0(v9, 1); /*0x88151c*/
  v22 = *(_DWORD *)(Stage + 4); /*0x881525*/
  v23 = v21; /*0x881528*/
  if ( v22 != v21 ) /*0x88152c*/
  {
    if ( v22 ) /*0x881530*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x881536*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x88154d*/
    }
    *(_DWORD *)(Stage + 4) = v23; /*0x881555*/
    if ( v23 ) /*0x881558*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x88155e*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x881567*/
  v25 = *(_DWORD *)(Unk08 + 4); /*0x88156f*/
  v26 = v25 == LODWORD(flt_B43110[0]); /*0x881572*/
  v27 = flt_B43110[0]; /*0x881574*/
  Stage = LODWORD(flt_B43110[0]); /*0x881576*/
  if ( !v26 ) /*0x88157a*/
  {
    if ( v25 ) /*0x88157e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x881584*/
        (**(void (__thiscall ***)(int, int))v25)(v25, 1); /*0x88159b*/
      v27 = *(float *)&Stage; /*0x88159d*/
    }
    *(float *)(Unk08 + 4) = v27; /*0x8815a3*/
    if ( v27 != 0.0 ) /*0x8815a6*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v27) + 4)); /*0x8815ac*/
  }
  ++v7->RefCount; /*0x8815b7*/
  Stage = (UInt32)v7; /*0x8815ba*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x8815d2*/
  v26 = v7->RefCount-- == 1; /*0x8815da*/
  if ( v26 ) /*0x8815e1*/
    NiD3DPass_ReleaseToPool(v7); /*0x8815e5*/
  ++*((_DWORD *)this + 0xE); /*0x8815ea*/
}
