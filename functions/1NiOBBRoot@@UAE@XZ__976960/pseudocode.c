void __thiscall NiOBBRoot::~NiOBBRoot(NiOBBRoot *this)
{
  void (__thiscall ***v1)(_DWORD, int); // ecx

  *(_DWORD *)this = &NiOBBRoot::`vftable';
  v1 = *((void (__thiscall ****)(_DWORD, int))this + 2);
  if ( v1 )
    (**v1)(v1, 1);
}
