void __cdecl sub_A27730()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B45FB4;
  if ( dword_B45FB4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B45FB4 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
