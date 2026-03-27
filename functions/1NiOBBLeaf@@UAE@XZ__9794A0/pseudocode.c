void __thiscall NiOBBLeaf::~NiOBBLeaf(NiOBBLeaf *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0x20);
  *(_DWORD *)this = &NiOBBNode::`vftable';
  if ( v2 )
  {
    (**v2)(v2, 1);
    v3 = *((void (__thiscall ****)(_DWORD, int))this + 0x21);
    if ( v3 )
      (**v3)(v3, 1);
  }
}
