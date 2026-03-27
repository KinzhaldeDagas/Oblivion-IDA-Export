void __cdecl sub_A27250()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B43100;
  if ( dword_B43100 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B43100 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
