void __cdecl sub_A27B10()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_BA7B94;
  if ( dword_BA7B94 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_BA7B94 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
