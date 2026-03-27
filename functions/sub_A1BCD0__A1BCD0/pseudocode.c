void __cdecl sub_A1BCD0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B35F8C;
  if ( dword_B35F8C )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B35F8C + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
