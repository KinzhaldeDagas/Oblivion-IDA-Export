BSTreeModel *__thiscall BSTreeModel::BSTreeModel(BSTreeModel *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &BSTreeModel::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  v2 = InterlockedDecrement;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  v3 = *((_DWORD *)this + 7);
  if ( v3 )
  {
    if ( !v2((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 7) = 0;
  }
  v4 = *((_DWORD *)this + 8);
  if ( v4 )
  {
    if ( !v2((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 8) = 0;
  }
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  v5 = *((_DWORD *)this + 0xD);
  if ( v5 )
  {
    if ( !v2((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0xD) = 0;
  }
  v6 = *((_DWORD *)this + 0xE);
  if ( v6 )
  {
    if ( !v2((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 0xE) = 0;
  }
  v7 = *((_DWORD *)this + 0xF);
  if ( v7 )
  {
    if ( !v2((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0xF) = 0;
  }
  *((_DWORD *)this + 0x12) = 1;
  *((float *)this + 0x11) = 0.0;
  *((_BYTE *)this + 0x4C) = 0;
  *((float *)this + 0x14) = 0.0;
  *((float *)this + 0x15) = 0.0;
  return this;
}
