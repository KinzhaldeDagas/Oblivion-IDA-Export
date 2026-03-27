void __cdecl sub_A27760()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B46014;
  if ( dword_B46014 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B46014 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
