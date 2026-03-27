void __cdecl sub_A270D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B42D44;
  if ( dword_B42D44 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B42D44 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
