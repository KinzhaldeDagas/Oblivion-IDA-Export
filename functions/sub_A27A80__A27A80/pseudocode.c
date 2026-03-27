void __cdecl sub_A27A80()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_BA7B88;
  if ( dword_BA7B88 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_BA7B88 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
