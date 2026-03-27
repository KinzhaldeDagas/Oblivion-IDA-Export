void __cdecl sub_A27400()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B43114;
  if ( dword_B43114 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B43114 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
