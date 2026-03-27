void __cdecl sub_A26B90()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B40158;
  if ( dword_B40158 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B40158 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
