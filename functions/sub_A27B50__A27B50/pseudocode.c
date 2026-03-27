void __cdecl sub_A27B50()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_BA8138;
  if ( dword_BA8138 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_BA8138 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
