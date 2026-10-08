void __cdecl sub_A269B0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3F980; /*0xa269b1*/
  if ( unk_B3F980 ) /*0xa269b9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3F980 + 4)) ) /*0xa269bf*/
    {
      if ( v0 ) /*0xa269cb*/
        (**v0)(v0, 1); /*0xa269d5*/
    }
  }
}
