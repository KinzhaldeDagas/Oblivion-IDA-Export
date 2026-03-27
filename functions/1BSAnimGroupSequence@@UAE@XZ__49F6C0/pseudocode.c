void __thiscall BSAnimGroupSequence::~BSAnimGroupSequence(BSAnimGroupSequence *this)
{
  int v2; // esi

  *(_DWORD *)this = &BSAnimGroupSequence::`vftable';
  v2 = *((_DWORD *)this + 0x1A);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  NiControllerSequence::~NiControllerSequence(this);
}
