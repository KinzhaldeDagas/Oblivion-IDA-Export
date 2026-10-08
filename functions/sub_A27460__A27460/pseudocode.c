void __cdecl sub_A27460()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B43124; /*0xa27461*/
  if ( unk_B43124 ) /*0xa27469*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B43124 + 4)) ) /*0xa2746f*/
    {
      if ( v0 ) /*0xa2747b*/
        (**v0)(v0, 1); /*0xa27485*/
    }
  }
}
