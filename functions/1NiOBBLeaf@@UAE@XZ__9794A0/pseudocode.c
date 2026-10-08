void __thiscall NiOBBLeaf::~NiOBBLeaf(NiOBBLeaf *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0x20); /*0x9794a3*/
  *(_DWORD *)this = &NiOBBNode::`vftable'; /*0x9794ab*/
  if ( v2 ) /*0x9794b1*/
  {
    (**v2)(v2, 1); /*0x9794b9*/
    v3 = *((void (__thiscall ****)(_DWORD, int))this + 0x21); /*0x9794bb*/
    if ( v3 ) /*0x9794c3*/
      (**v3)(v3, 1); /*0x9794cb*/
  }
}
