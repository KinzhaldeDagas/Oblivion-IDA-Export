void __cdecl sub_A1A180()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))value;
  if ( value )
  {
    if ( !InterlockedDecrement((volatile LONG *)(value + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
