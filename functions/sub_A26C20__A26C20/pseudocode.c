void __cdecl sub_A26C20()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B401D8;
  if ( dword_B401D8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B401D8 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
