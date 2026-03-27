int __thiscall sub_7FA890(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // edx
  int v10; // ebp
  int v11; // ebx
  _DWORD *v12; // edi

  (*((void (__thiscall **)(NiTArray_NiD3DPass *))this->_vtbl + 0x20))(this);
  v9 = *(_DWORD *)(*((_DWORD *)this + 0x1C) + 0x24);
  v10 = *((_DWORD *)this + *((_DWORD *)this + 0x32) + 0x1F);
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 4);
  v12 = (_DWORD *)(*(_DWORD *)v9 + 4);
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    *v12 = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)this + 0x1C);
  ++*((_DWORD *)this + 0xE);
  return 0;
}
