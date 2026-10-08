void __thiscall sub_881E80(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiD3DPass *v6; // ebx
  NiD3DPass *v7; // edi
  float *v8; // ebx
  NiD3DPass *v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // ebp
  UInt32 v13; // ebp
  int v14; // ebx
  bool v15; // zf
  float v16; // ecx

  v6 = (NiD3DPass *)LODWORD(Stage); /*0x881ea6*/
  v7 = dword_B47758; /*0x881ead*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x881eb4*/
  v8 = *(float **)&v6->Name[8]; /*0x881eb9*/
  sub_848E50(v8); /*0x881ebf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x881ed6*/
  Stage = *(float *)&v7->Stages.data->Stage; /*0x881ee6*/
  v9 = (NiD3DPass *)LODWORD(Stage); /*0x881edf*/
  v10 = sub_848FD0(a5, 0); /*0x881eea*/
  v11 = *(_DWORD *)v9->Name; /*0x881eef*/
  v12 = v10; /*0x881ef2*/
  if ( v11 != v10 ) /*0x881ef6*/
  {
    if ( v11 ) /*0x881efa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x881f00*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x881f16*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x881f1e*/
    if ( v12 ) /*0x881f21*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x881f27*/
  }
  v13 = v7->Stages.data[1].Stage; /*0x881f30*/
  v14 = *(_DWORD *)(v13 + 4); /*0x881f38*/
  v15 = v14 == LODWORD(flt_B43110[0]); /*0x881f3b*/
  v16 = flt_B43110[0]; /*0x881f3d*/
  Stage = flt_B43110[0]; /*0x881f3f*/
  if ( !v15 ) /*0x881f43*/
  {
    if ( v14 ) /*0x881f47*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x881f4d*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x881f63*/
      v16 = Stage; /*0x881f65*/
    }
    *(float *)(v13 + 4) = v16; /*0x881f6b*/
    if ( v16 != 0.0 ) /*0x881f6e*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x881f74*/
  }
  ++v7->RefCount; /*0x881f7f*/
  Stage = *(float *)&v7; /*0x881f82*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x881f9a*/
  v15 = v7->RefCount-- == 1; /*0x881fa2*/
  if ( v15 ) /*0x881fa9*/
    NiD3DPass_ReleaseToPool(v7); /*0x881fad*/
  ++*((_DWORD *)this + 0xE); /*0x881fb2*/
}
