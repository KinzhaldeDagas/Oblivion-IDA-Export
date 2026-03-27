Stars *__thiscall Stars::Stars(Stars *this)
{
  int v2; // edi

  SkyObject::SkyObject((SkyObject *)this);
  *(_DWORD *)this = &Stars::`vftable';
  *((_DWORD *)this + 2) = 0;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 2) = 0;
  }
  *((float *)this + 3) = 0.0;
  return this;
}
