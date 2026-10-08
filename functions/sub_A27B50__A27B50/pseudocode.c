void __cdecl sub_A27B50()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_BA8138; /*0xa27b51*/
  if ( unk_BA8138 ) /*0xa27b59*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_BA8138 + 4)) ) /*0xa27b5f*/
    {
      if ( v0 ) /*0xa27b6b*/
        (**v0)(v0, 1); /*0xa27b75*/
    }
  }
}
