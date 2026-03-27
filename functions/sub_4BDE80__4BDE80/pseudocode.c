char __thiscall sub_4BDE80(void *this, __int16 a2, int a3)
{
  int v4; // eax
  char v5; // bl
  void (__thiscall ***v6)(_DWORD, int); // esi

  v4 = sub_4EF1D0(a2, a3);
  a3 = 0;
  v5 = (*(int (__thiscall **)(void *, int, int *))(*(_DWORD *)this + 4))(this, v4, &a3);
  if ( a3 )
  {
    v6 = (void (__thiscall ***)(_DWORD, int))a3;
    if ( !InterlockedDecrement((volatile LONG *)(a3 + 8)) )
      (**v6)(v6, 1);
  }
  return v5;
}
