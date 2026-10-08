void __cdecl sub_A26B60()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B40160; /*0xa26b61*/
  if ( unk_B40160 ) /*0xa26b69*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B40160 + 4)) ) /*0xa26b6f*/
    {
      if ( v0 ) /*0xa26b7b*/
        (**v0)(v0, 1); /*0xa26b85*/
    }
  }
}
