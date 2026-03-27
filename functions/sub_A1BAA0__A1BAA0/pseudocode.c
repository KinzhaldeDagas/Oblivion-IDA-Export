void __cdecl sub_A1BAA0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))bhkWorldM;
  if ( bhkWorldM )
  {
    if ( !InterlockedDecrement((volatile LONG *)(bhkWorldM + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
