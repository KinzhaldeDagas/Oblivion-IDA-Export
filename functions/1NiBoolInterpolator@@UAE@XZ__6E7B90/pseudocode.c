void __thiscall NiBoolInterpolator::~NiBoolInterpolator(NiBoolInterpolator *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  sub_6EC250(this);
}
