void __stdcall sub_7C3190(_DWORD *a1)
{
  int v1; // esi

  v1 = a1[2];
  if ( v1 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v1 + 4)) )
      (**(void (__thiscall ***)(int, int))v1)(v1, 1);
    a1[2] = 0;
  }
  sub_44D880(a1);
}
