void __thiscall BSTreeModel::~BSTreeModel(BSTreeModel *this)
{
  unsigned int v2; // edi
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi

  *(_DWORD *)this = &BSTreeModel::`vftable';
  sub_561520((int **)this);
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
  {
    sub_78C9B0(*((void (__stdcall *****)(signed int))this + 3));
    FormHeapFree(v2);
    *((_DWORD *)this + 3) = 0;
  }
  v3 = *((_DWORD *)this + 0x10);
  v4 = InterlockedDecrement;
  if ( v3 )
  {
    if ( !v4((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  v5 = *((_DWORD *)this + 0xF);
  if ( v5 )
  {
    if ( !v4((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  v6 = *((_DWORD *)this + 0xE);
  if ( v6 )
  {
    if ( !v4((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v7 = *((_DWORD *)this + 0xD);
  if ( v7 )
  {
    if ( !v4((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  v8 = *((_DWORD *)this + 8);
  if ( v8 )
  {
    if ( !v4((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = *((_DWORD *)this + 7);
  if ( v9 )
  {
    if ( !v4((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v10 = *((_DWORD *)this + 4);
  if ( v10 )
  {
    if ( !v4((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  v4(&NiRefObject_objcount);
}
