void __cdecl sub_A1C190()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B362F4; /*0xa1c191*/
  if ( unk_B362F4 ) /*0xa1c199*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B362F4 + 4)) ) /*0xa1c19f*/
    {
      if ( v0 ) /*0xa1c1ab*/
        (**v0)(v0, 1); /*0xa1c1b5*/
    }
  }
}
