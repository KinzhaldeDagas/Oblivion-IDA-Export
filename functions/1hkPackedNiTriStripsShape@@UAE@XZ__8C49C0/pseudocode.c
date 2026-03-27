void __thiscall hkPackedNiTriStripsShape::~hkPackedNiTriStripsShape(hkPackedNiTriStripsShape *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  *(_DWORD *)this = &hkPackedNiTriStripsShape::`vftable';
  v2 = *((_DWORD *)this + 4);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 4) = 0;
  }
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
