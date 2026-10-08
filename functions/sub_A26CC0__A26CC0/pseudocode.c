void __cdecl sub_A26CC0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B4088C; /*0xa26cc1*/
  if ( unk_B4088C ) /*0xa26cc9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B4088C + 4)) ) /*0xa26ccf*/
    {
      if ( v0 ) /*0xa26cdb*/
        (**v0)(v0, 1); /*0xa26ce5*/
    }
  }
}
