Precipitation *__thiscall Precipitation::Precipitation(Precipitation *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  *(_DWORD *)this = &Precipitation::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v2 = *((_DWORD *)this + 1);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 1) = 0;
  }
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 5) = 0;
  *((float *)this + 4) = 0.0;
  *((_DWORD *)this + 3) = 0;
  return this;
}
