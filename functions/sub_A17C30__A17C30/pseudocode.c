void __cdecl sub_A17C30()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B33A24; /*0xa17c31*/
  if ( unk_B33A24 ) /*0xa17c39*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B33A24 + 8)) ) /*0xa17c3f*/
    {
      if ( v0 ) /*0xa17c4b*/
        (**v0)(v0, 1); /*0xa17c55*/
    }
  }
}
