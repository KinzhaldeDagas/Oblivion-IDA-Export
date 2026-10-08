void __cdecl sub_A27250()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B43100; /*0xa27251*/
  if ( unk_B43100 ) /*0xa27259*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B43100 + 4)) ) /*0xa2725f*/
    {
      if ( v0 ) /*0xa2726b*/
        (**v0)(v0, 1); /*0xa27275*/
    }
  }
}
