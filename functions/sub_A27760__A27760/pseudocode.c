void __cdecl sub_A27760()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B46014; /*0xa27761*/
  if ( unk_B46014 ) /*0xa27769*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B46014 + 4)) ) /*0xa2776f*/
    {
      if ( v0 ) /*0xa2777b*/
        (**v0)(v0, 1); /*0xa27785*/
    }
  }
}
