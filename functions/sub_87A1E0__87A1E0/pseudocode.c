void __thiscall sub_87A1E0(NiTArray_NiD3DPass *this, NiD3DPass *Stage, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  NiD3DPass *v7; // ebx
  int (__thiscall *v8)(int, _DWORD); // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebp

  v6 = (NiD3DPass *)unk_B476F4; /*0x87a212*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, NiD3DPass *, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, Stage, 0, 0); /*0x87a21f*/
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x87a22c*/
  Stage = (NiD3DPass *)v6->Stages.data->Stage; /*0x87a234*/
  v7 = Stage; /*0x87a228*/
  v9 = v8(a5, 0); /*0x87a238*/
  v10 = *(_DWORD *)v7->Name; /*0x87a23a*/
  v11 = v9; /*0x87a23d*/
  if ( v10 != v9 ) /*0x87a241*/
  {
    if ( v10 ) /*0x87a245*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x87a24b*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x87a261*/
    }
    *(_DWORD *)Stage->Name = v11; /*0x87a269*/
    if ( v11 ) /*0x87a26c*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x87a272*/
  }
  ++v6->RefCount; /*0x87a27d*/
  Stage = v6; /*0x87a280*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x87a298*/
  if ( v6->RefCount-- == 1 ) /*0x87a2a0*/
    NiD3DPass_ReleaseToPool(v6); /*0x87a2ab*/
  ++*((_DWORD *)this + 0xE); /*0x87a2b0*/
}
