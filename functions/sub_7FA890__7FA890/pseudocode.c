int __thiscall sub_7FA890(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // edx
  int v10; // ebp
  int v11; // ebx
  _DWORD *v12; // edi

  (*((void (__thiscall **)(NiTArray_NiD3DPass *))this->_vtbl + 0x20))(this); /*0x7fa89e*/
  v9 = *(_DWORD *)(*((_DWORD *)this + 0x1C) + 0x24); /*0x7fa8a3*/
  v10 = *((_DWORD *)this + *((_DWORD *)this + 0x32) + 0x1F); /*0x7fa8ae*/
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 4); /*0x7fa8b2*/
  v12 = (_DWORD *)(*(_DWORD *)v9 + 4); /*0x7fa8b5*/
  if ( v11 != v10 ) /*0x7fa8ba*/
  {
    if ( v11 ) /*0x7fa8be*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7fa8c4*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7fa8da*/
    }
    *v12 = v10; /*0x7fa8de*/
    if ( v10 ) /*0x7fa8e0*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x7fa8e6*/
  }
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)this + 0x1C); /*0x7fa8f7*/
  ++*((_DWORD *)this + 0xE); /*0x7fa8fc*/
  return 0; /*0x7fa900*/
}
