void __thiscall NiPoint3Interpolator::~NiPoint3Interpolator(NiPoint3Interpolator *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  sub_6EC250(this);
}
