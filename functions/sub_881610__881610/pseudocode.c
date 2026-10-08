void __thiscall SkinShader_QueueSKIN2005_SKIN2002(NiTArray_NiD3DPass *this, int a2, int a3, UInt32 Stage, _DWORD *a5)
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

  v6 = (NiD3DPass *)Stage; /*0x881636*/
  v7 = (NiD3DPass *)unk_B4774C; /*0x88163d*/
  sub_848C40(*(float **)(Stage + 0x10)); /*0x881644*/
  v8 = *(float **)&v6->Name[8]; /*0x881649*/
  sub_848E50(v8); /*0x88164f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x881666*/
  v9 = a5; /*0x88166b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x881674*/
  Stage = v7->Stages.data->Stage; /*0x88167e*/
  v10 = (NiD3DPass *)Stage; /*0x88166f*/
  v12 = v11(a5, 0); /*0x881682*/
  v13 = *(_DWORD *)v10->Name; /*0x881684*/
  v28 = v12; /*0x881689*/
  if ( v13 != v12 ) /*0x88168d*/
  {
    if ( v13 ) /*0x881691*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x881697*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x8816ad*/
      v12 = v28; /*0x8816af*/
    }
    *(_DWORD *)(Stage + 4) = v12; /*0x8816b9*/
    if ( v12 ) /*0x8816bc*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x8816c2*/
  }
  Stage = (UInt32)v7->Stages.data->Texture; /*0x8816d3*/
  v14 = (NiD3DPass *)Stage; /*0x8816cb*/
  v15 = sub_848FD0(v9, 0); /*0x8816d7*/
  v16 = *(_DWORD *)v14->Name; /*0x8816dc*/
  v29 = v15; /*0x8816e1*/
  if ( v16 != v15 ) /*0x8816e5*/
  {
    if ( v16 ) /*0x8816e9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x8816ef*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x881705*/
      v15 = v29; /*0x881707*/
    }
    *(_DWORD *)(Stage + 4) = v15; /*0x881711*/
    if ( v15 ) /*0x881714*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x88171a*/
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88); /*0x881729*/
  Stage = v7->Stages.data->Unk08; /*0x881733*/
  v17 = (NiD3DPass *)Stage; /*0x881723*/
  v19 = v18(v9, 1); /*0x881737*/
  v20 = *(_DWORD *)v17->Name; /*0x881739*/
  v30 = v19; /*0x88173e*/
  if ( v20 != v19 ) /*0x881742*/
  {
    if ( v20 ) /*0x881746*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x88174c*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x881762*/
      v19 = v30; /*0x881764*/
    }
    *(_DWORD *)(Stage + 4) = v19; /*0x88176e*/
    if ( v19 ) /*0x881771*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x881777*/
  }
  Stage = v7->Stages.data[1].Stage; /*0x881788*/
  v21 = sub_848FD0(v9, 1); /*0x88178c*/
  v22 = *(_DWORD *)(Stage + 4); /*0x881795*/
  v23 = v21; /*0x881798*/
  if ( v22 != v21 ) /*0x88179c*/
  {
    if ( v22 ) /*0x8817a0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x8817a6*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x8817bd*/
    }
    *(_DWORD *)(Stage + 4) = v23; /*0x8817c5*/
    if ( v23 ) /*0x8817c8*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x8817ce*/
  }
  Unk08 = v7->Stages.data[1].Unk08; /*0x8817d7*/
  v25 = *(_DWORD *)(Unk08 + 4); /*0x8817df*/
  v26 = v25 == LODWORD(flt_B43110[0]); /*0x8817e2*/
  v27 = flt_B43110[0]; /*0x8817e4*/
  Stage = LODWORD(flt_B43110[0]); /*0x8817e6*/
  if ( !v26 ) /*0x8817ea*/
  {
    if ( v25 ) /*0x8817ee*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x8817f4*/
        (**(void (__thiscall ***)(int, int))v25)(v25, 1); /*0x88180b*/
      v27 = *(float *)&Stage; /*0x88180d*/
    }
    *(float *)(Unk08 + 4) = v27; /*0x881813*/
    if ( v27 != 0.0 ) /*0x881816*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v27) + 4)); /*0x88181c*/
  }
  ++v7->RefCount; /*0x881827*/
  Stage = (UInt32)v7; /*0x88182a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x881842*/
  v26 = v7->RefCount-- == 1; /*0x88184a*/
  if ( v26 ) /*0x881851*/
    NiD3DPass_ReleaseToPool(v7); /*0x881855*/
  ++*((_DWORD *)this + 0xE); /*0x88185a*/
}
