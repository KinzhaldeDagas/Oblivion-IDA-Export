void __cdecl sub_A1A9A0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B35414;
  if ( dword_B35414 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B35414 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
