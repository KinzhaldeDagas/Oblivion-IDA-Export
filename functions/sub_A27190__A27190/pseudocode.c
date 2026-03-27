void __cdecl sub_A27190()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B430EC;
  if ( dword_B430EC )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B430EC + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
