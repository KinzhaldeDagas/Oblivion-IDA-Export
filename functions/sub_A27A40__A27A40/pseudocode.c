void __cdecl sub_A27A40()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_BA7A64; /*0xa27a41*/
  if ( unk_BA7A64 ) /*0xa27a49*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_BA7A64 + 4)) ) /*0xa27a4f*/
    {
      if ( v0 ) /*0xa27a5b*/
        (**v0)(v0, 1); /*0xa27a65*/
    }
  }
}
