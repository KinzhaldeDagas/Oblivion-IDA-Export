void __cdecl sub_A272B0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B4311C; /*0xa272b1*/
  if ( unk_B4311C ) /*0xa272b9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B4311C + 4)) ) /*0xa272bf*/
    {
      if ( v0 ) /*0xa272cb*/
        (**v0)(v0, 1); /*0xa272d5*/
    }
  }
}
