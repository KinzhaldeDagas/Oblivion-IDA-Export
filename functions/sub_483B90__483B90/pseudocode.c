char __thiscall sub_483B90(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  LONG v6; // eax
  int v7; // edi

  v5 = *(this + 4) + 0x10 * (a3 + a2 * *(this + 3));
  LOBYTE(v6) = sub_483870(this, a4, a5, v5);
  v7 = *(_DWORD *)(v5 + 4);
  if ( v7 )
  {
    v6 = InterlockedDecrement((volatile LONG *)(v7 + 4));
    if ( !v6 )
      LOBYTE(v6) = (**(int (__thiscall ***)(int, int))v7)(v7, 1);
    *(_DWORD *)(v5 + 4) = 0;
  }
  return v6;
}
