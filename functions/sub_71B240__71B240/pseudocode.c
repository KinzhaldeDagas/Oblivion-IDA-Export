void sub_71B240()
{
  NiDevImageConverter *v0; // esi

  v0 = dword_B3FD28;
  if ( dword_B3FD28 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v0 + 1) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(NiDevImageConverter *, int))v0)(v0, 1);
    }
    dword_B3FD28 = 0;
  }
}
