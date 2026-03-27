volatile LONG *__thiscall sub_4390B0(volatile LONG *this, const char *a2, char *a3, char a4)
{
  int v5; // edi

  *((_DWORD *)this + 2) = 0;
  v5 = *((_DWORD *)this + 2);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 2) = 0;
  }
  sub_436880(this, a2, a3, a4);
  return this;
}
