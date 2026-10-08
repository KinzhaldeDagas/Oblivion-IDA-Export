void __cdecl sub_A269E0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3F984; /*0xa269e1*/
  if ( unk_B3F984 ) /*0xa269e9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3F984 + 4)) ) /*0xa269ef*/
    {
      if ( v0 ) /*0xa269fb*/
        (**v0)(v0, 1); /*0xa26a05*/
    }
  }
}
