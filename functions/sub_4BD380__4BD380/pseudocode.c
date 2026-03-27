void __thiscall sub_4BD380(void *this, __int16 a2, volatile LONG *a3)
{
  int v4; // eax
  volatile LONG *v5; // esi

  v4 = sub_4EF1D0(a2, (unsigned __int16)a3);
  a3 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(void *, int, volatile LONG **))(*(_DWORD *)this + 4))(this, v4, &a3) )
    sub_432130(a3);
  v5 = a3;
  if ( a3 )
  {
    if ( !InterlockedDecrement(a3 + 2) )
    {
      if ( v5 )
        (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
    }
  }
}
