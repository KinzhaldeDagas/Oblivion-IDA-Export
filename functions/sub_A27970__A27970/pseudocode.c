void __cdecl sub_A27970()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B47604; /*0xa27971*/
  if ( unk_B47604 ) /*0xa27979*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B47604 + 4)) ) /*0xa2797f*/
    {
      if ( v0 ) /*0xa2798b*/
        (**v0)(v0, 1); /*0xa27995*/
    }
  }
}
