void __cdecl sub_A27910()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B474EC;
  if ( dword_B474EC )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B474EC + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
