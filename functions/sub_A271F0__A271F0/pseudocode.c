void __cdecl sub_A271F0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B430F0; /*0xa271f1*/
  if ( unk_B430F0 ) /*0xa271f9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B430F0 + 4)) ) /*0xa271ff*/
    {
      if ( v0 ) /*0xa2720b*/
        (**v0)(v0, 1); /*0xa27215*/
    }
  }
}
