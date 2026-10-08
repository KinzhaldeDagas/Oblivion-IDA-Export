void __cdecl sub_A267D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3CA94; /*0xa267d1*/
  if ( unk_B3CA94 ) /*0xa267d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3CA94 + 4)) ) /*0xa267df*/
    {
      if ( v0 ) /*0xa267eb*/
        (**v0)(v0, 1); /*0xa267f5*/
    }
  }
}
