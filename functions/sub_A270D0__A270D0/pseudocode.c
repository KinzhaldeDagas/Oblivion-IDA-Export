void __cdecl sub_A270D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B42D44; /*0xa270d1*/
  if ( unk_B42D44 ) /*0xa270d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B42D44 + 4)) ) /*0xa270df*/
    {
      if ( v0 ) /*0xa270eb*/
        (**v0)(v0, 1); /*0xa270f5*/
    }
  }
}
