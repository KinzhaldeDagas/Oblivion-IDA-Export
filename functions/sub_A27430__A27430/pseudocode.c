void __cdecl sub_A27430()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B430F4; /*0xa27431*/
  if ( unk_B430F4 ) /*0xa27439*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B430F4 + 4)) ) /*0xa2743f*/
    {
      if ( v0 ) /*0xa2744b*/
        (**v0)(v0, 1); /*0xa27455*/
    }
  }
}
