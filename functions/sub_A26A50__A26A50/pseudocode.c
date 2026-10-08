void __cdecl sub_A26A50()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3FAA4; /*0xa26a51*/
  if ( unk_B3FAA4 ) /*0xa26a59*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3FAA4 + 4)) ) /*0xa26a5f*/
    {
      if ( v0 ) /*0xa26a6b*/
        (**v0)(v0, 1); /*0xa26a75*/
    }
  }
}
