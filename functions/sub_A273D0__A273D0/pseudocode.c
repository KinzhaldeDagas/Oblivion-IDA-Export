void __cdecl sub_A273D0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B43128; /*0xa273d1*/
  if ( unk_B43128 ) /*0xa273d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B43128 + 4)) ) /*0xa273df*/
    {
      if ( v0 ) /*0xa273eb*/
        (**v0)(v0, 1); /*0xa273f5*/
    }
  }
}
