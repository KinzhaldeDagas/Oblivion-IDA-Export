void __cdecl sub_A27C10()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_BAAA90;
  if ( dword_BAAA90 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_BAAA90 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
