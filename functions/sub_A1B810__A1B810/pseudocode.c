void __cdecl sub_A1B810()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B35BEC; /*0xa1b811*/
  if ( unk_B35BEC ) /*0xa1b819*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B35BEC + 4)) ) /*0xa1b81f*/
    {
      if ( v0 ) /*0xa1b82b*/
        (**v0)(v0, 1); /*0xa1b835*/
    }
  }
}
