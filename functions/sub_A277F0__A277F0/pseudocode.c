void __cdecl sub_A277F0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B4690C; /*0xa277f1*/
  if ( unk_B4690C ) /*0xa277f9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B4690C + 4)) ) /*0xa277ff*/
    {
      if ( v0 ) /*0xa2780b*/
        (**v0)(v0, 1); /*0xa27815*/
    }
  }
}
