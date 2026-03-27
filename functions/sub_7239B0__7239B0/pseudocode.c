void __thiscall sub_7239B0(char **this, _DWORD *a2, _DWORD **a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // esi

  sub_723EF0(this, (int)a2, a3);
  v4 = (int)*(this + 0x3F);
  if ( v4 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x54))(v4);
    sub_723750(a2, v5);
  }
  else
  {
    v6 = a2[0x3F];
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      a2[0x3F] = 0;
    }
  }
}
