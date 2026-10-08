void __cdecl sub_A26800()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B3CAFC; /*0xa26801*/
  if ( unk_B3CAFC ) /*0xa26809*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B3CAFC + 4)) ) /*0xa2680f*/
    {
      if ( v0 ) /*0xa2681b*/
        (**v0)(v0, 1); /*0xa26825*/
    }
  }
}
