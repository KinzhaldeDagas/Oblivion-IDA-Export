void __cdecl sub_A1C190()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B362F4;
  if ( dword_B362F4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B362F4 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
