void __thiscall BSStream::~BSStream(BSStream *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // edi

  *(_DWORD *)this = &BSStream::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0x122);
  if ( v2 )
    (**v2)(v2, 1);
  *((_DWORD *)this + 0x122) = 0;
  v3 = *((_DWORD *)this + 0x123);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  NiStream::~NiStream(this);
}
