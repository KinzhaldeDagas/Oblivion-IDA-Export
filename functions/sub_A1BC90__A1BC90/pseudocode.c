void __cdecl sub_A1BC90()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B35F88;
  if ( dword_B35F88 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B35F88 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
