void __cdecl sub_A278E0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B474AC; /*0xa278e1*/
  if ( unk_B474AC ) /*0xa278e9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B474AC + 4)) ) /*0xa278ef*/
    {
      if ( v0 ) /*0xa278fb*/
        (**v0)(v0, 1); /*0xa27905*/
    }
  }
}
