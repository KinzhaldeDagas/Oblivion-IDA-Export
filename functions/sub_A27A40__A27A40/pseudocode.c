void __cdecl sub_A27A40()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_BA7A64;
  if ( dword_BA7A64 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_BA7A64 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
