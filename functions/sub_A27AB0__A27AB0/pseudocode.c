void __cdecl sub_A27AB0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_BA7B8C;
  if ( dword_BA7B8C )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_BA7B8C + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
