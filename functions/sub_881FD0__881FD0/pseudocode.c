void __thiscall sub_881FD0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiD3DPass *)LODWORD(Stage); /*0x881ff6*/
  v7 = dword_B4775C; /*0x881ffd*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x882004*/
  v8 = *(float **)&v6->Name[8]; /*0x882009*/
  sub_848E50(v8); /*0x88200f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x882026*/
  Stage = *(float *)&v7->Stages.data->Stage; /*0x882036*/
  v9 = (NiD3DPass *)LODWORD(Stage); /*0x88202f*/
  v10 = sub_848FD0(a5, 0); /*0x88203a*/
  v11 = *(_DWORD *)v9->Name; /*0x88203f*/
  v12 = v10; /*0x882042*/
  if ( v11 != v10 ) /*0x882046*/
  {
    if ( v11 ) /*0x88204a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x882050*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x882066*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x88206e*/
    if ( v12 ) /*0x882071*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x882077*/
  }
  v13 = v7->Stages.data[1].Stage; /*0x882080*/
  v14 = *(_DWORD *)(v13 + 4); /*0x882088*/
  v15 = v14 == LODWORD(flt_B43110[0]); /*0x88208b*/
  v16 = flt_B43110[0]; /*0x88208d*/
  Stage = flt_B43110[0]; /*0x88208f*/
  if ( !v15 ) /*0x882093*/
  {
    if ( v14 ) /*0x882097*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x88209d*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x8820b3*/
      v16 = Stage; /*0x8820b5*/
    }
    *(float *)(v13 + 4) = v16; /*0x8820bb*/
    if ( v16 != 0.0 ) /*0x8820be*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x8820c4*/
  }
  ++v7->RefCount; /*0x8820cf*/
  Stage = *(float *)&v7; /*0x8820d2*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x8820ea*/
  v15 = v7->RefCount-- == 1; /*0x8820f2*/
  if ( v15 ) /*0x8820f9*/
    NiD3DPass_ReleaseToPool(v7); /*0x8820fd*/
  ++*((_DWORD *)this + 0xE); /*0x882102*/
}
