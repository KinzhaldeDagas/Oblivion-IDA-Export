void __cdecl sub_A27940()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B474F0;
  if ( dword_B474F0 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B474F0 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
