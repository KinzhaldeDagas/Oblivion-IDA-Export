void __cdecl sub_A1A9D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B35418; /*0xa1a9d1*/
  if ( unk_B35418 ) /*0xa1a9d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B35418 + 4)) ) /*0xa1a9df*/
    {
      if ( v0 ) /*0xa1a9eb*/
        (**v0)(v0, 1); /*0xa1a9f5*/
    }
  }
}
