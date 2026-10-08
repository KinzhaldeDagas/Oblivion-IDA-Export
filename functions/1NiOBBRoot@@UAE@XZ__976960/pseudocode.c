void __thiscall NiOBBRoot::~NiOBBRoot(NiOBBRoot *this)
{
  void (__thiscall ***v1)(_DWORD, int); // ecx

  *(_DWORD *)this = &NiOBBRoot::`vftable'; /*0x976960*/
  v1 = *((void (__thiscall ****)(_DWORD, int))this + 2); /*0x976966*/
  if ( v1 ) /*0x97696b*/
    (**v1)(v1, 1); /*0x976973*/
}
