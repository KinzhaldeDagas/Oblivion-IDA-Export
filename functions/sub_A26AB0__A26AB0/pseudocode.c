void __cdecl sub_A26AB0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3FCE4; /*0xa26ab1*/
  if ( unk_B3FCE4 ) /*0xa26ab9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3FCE4 + 4)) ) /*0xa26abf*/
    {
      if ( v0 ) /*0xa26acb*/
        (**v0)(v0, 1); /*0xa26ad5*/
    }
  }
}
