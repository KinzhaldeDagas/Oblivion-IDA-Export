_DWORD *__thiscall sub_556900(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi

  *this = 0;
  *((_WORD *)this + 2) = 0;
  *((_WORD *)this + 3) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  v2 = InterlockedDecrement;
  *(this + 2) = 0;
  v3 = *(this + 4);
  if ( v3 )
  {
    if ( !v2((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *(this + 4) = 0;
  }
  v4 = *(this + 3);
  if ( v4 )
  {
    if ( !v2((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 3) = 0;
  }
  v5 = *(this + 7);
  if ( v5 )
  {
    if ( !v2((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 7) = 0;
  }
  v6 = *(this + 8);
  if ( v6 )
  {
    if ( !v2((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(this + 8) = 0;
  }
  *(this + 5) = 0;
  *(this + 6) = 0;
  return this;
}
