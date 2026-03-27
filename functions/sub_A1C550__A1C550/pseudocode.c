void __cdecl sub_A1C550()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B3658C;
  if ( dword_B3658C )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B3658C + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
