void __thiscall BSFaceGenModelMap::Entry::~Entry(BSFaceGenModelMap::Entry *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx

  v2 = *((_DWORD *)this + 2);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  v3(&NiRefObject_objcount);
}
