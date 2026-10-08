void __thiscall sub_882120(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiD3DPass *)LODWORD(Stage); /*0x882146*/
  v7 = dword_B47760; /*0x88214d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x882154*/
  v8 = *(float **)&v6->Name[8]; /*0x882159*/
  sub_848E50(v8); /*0x88215f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x882176*/
  Stage = *(float *)&v7->Stages.data->Stage; /*0x882186*/
  v9 = (NiD3DPass *)LODWORD(Stage); /*0x88217f*/
  v10 = sub_848FD0(a5, 0); /*0x88218a*/
  v11 = *(_DWORD *)v9->Name; /*0x88218f*/
  v12 = v10; /*0x882192*/
  if ( v11 != v10 ) /*0x882196*/
  {
    if ( v11 ) /*0x88219a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8821a0*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8821b6*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x8821be*/
    if ( v12 ) /*0x8821c1*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x8821c7*/
  }
  v13 = v7->Stages.data[1].Stage; /*0x8821d0*/
  v14 = *(_DWORD *)(v13 + 4); /*0x8821d8*/
  v15 = v14 == LODWORD(flt_B43110[0]); /*0x8821db*/
  v16 = flt_B43110[0]; /*0x8821dd*/
  Stage = flt_B43110[0]; /*0x8821df*/
  if ( !v15 ) /*0x8821e3*/
  {
    if ( v14 ) /*0x8821e7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x8821ed*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x882203*/
      v16 = Stage; /*0x882205*/
    }
    *(float *)(v13 + 4) = v16; /*0x88220b*/
    if ( v16 != 0.0 ) /*0x88220e*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x882214*/
  }
  ++v7->RefCount; /*0x88221f*/
  Stage = *(float *)&v7; /*0x882222*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x88223a*/
  v15 = v7->RefCount-- == 1; /*0x882242*/
  if ( v15 ) /*0x882249*/
    NiD3DPass_ReleaseToPool(v7); /*0x88224d*/
  ++*((_DWORD *)this + 0xE); /*0x882252*/
}
