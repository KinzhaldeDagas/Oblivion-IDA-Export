void __cdecl sub_A25F60()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B3C094[3]; /*0xa25f61*/
  if ( dword_B3C094[3] ) /*0xa25f69*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B3C094[3] + 4)) ) /*0xa25f6f*/
    {
      if ( v0 ) /*0xa25f7b*/
        (**v0)(v0, 1); /*0xa25f85*/
    }
  }
}
