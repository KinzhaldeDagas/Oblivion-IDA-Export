void __thiscall sub_882270(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiD3DPass *)LODWORD(Stage); /*0x882296*/
  v7 = dword_B47764; /*0x88229d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x8822a4*/
  v8 = *(float **)&v6->Name[8]; /*0x8822a9*/
  sub_848E50(v8); /*0x8822af*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x8822c6*/
  Stage = *(float *)&v7->Stages.data->Stage; /*0x8822d6*/
  v9 = (NiD3DPass *)LODWORD(Stage); /*0x8822cf*/
  v10 = sub_848FD0(a5, 0); /*0x8822da*/
  v11 = *(_DWORD *)v9->Name; /*0x8822df*/
  v12 = v10; /*0x8822e2*/
  if ( v11 != v10 ) /*0x8822e6*/
  {
    if ( v11 ) /*0x8822ea*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8822f0*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x882306*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x88230e*/
    if ( v12 ) /*0x882311*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x882317*/
  }
  v13 = v7->Stages.data[1].Stage; /*0x882320*/
  v14 = *(_DWORD *)(v13 + 4); /*0x882328*/
  v15 = v14 == LODWORD(flt_B43110[0]); /*0x88232b*/
  v16 = flt_B43110[0]; /*0x88232d*/
  Stage = flt_B43110[0]; /*0x88232f*/
  if ( !v15 ) /*0x882333*/
  {
    if ( v14 ) /*0x882337*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x88233d*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x882353*/
      v16 = Stage; /*0x882355*/
    }
    *(float *)(v13 + 4) = v16; /*0x88235b*/
    if ( v16 != 0.0 ) /*0x88235e*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x882364*/
  }
  ++v7->RefCount; /*0x88236f*/
  Stage = *(float *)&v7; /*0x882372*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x88238a*/
  v15 = v7->RefCount-- == 1; /*0x882392*/
  if ( v15 ) /*0x882399*/
    NiD3DPass_ReleaseToPool(v7); /*0x88239d*/
  ++*((_DWORD *)this + 0xE); /*0x8823a2*/
}
