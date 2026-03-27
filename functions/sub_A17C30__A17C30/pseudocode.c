void __cdecl sub_A17C30()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B33A24;
  if ( dword_B33A24 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B33A24 + 8)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
