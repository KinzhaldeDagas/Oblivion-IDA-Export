void __cdecl sub_A26B90()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B40158; /*0xa26b91*/
  if ( unk_B40158 ) /*0xa26b99*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B40158 + 4)) ) /*0xa26b9f*/
    {
      if ( v0 ) /*0xa26bab*/
        (**v0)(v0, 1); /*0xa26bb5*/
    }
  }
}
