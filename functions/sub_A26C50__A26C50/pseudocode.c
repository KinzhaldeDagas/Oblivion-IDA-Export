void __cdecl sub_A26C50()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B401FC;
  if ( dword_B401FC )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B401FC + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
