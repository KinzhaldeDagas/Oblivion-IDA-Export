void __cdecl sub_A27310()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))unk_B430F8; /*0xa27311*/
  if ( unk_B430F8 ) /*0xa27319*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B430F8 + 4)) ) /*0xa2731f*/
    {
      if ( v0 ) /*0xa2732b*/
        (**v0)(v0, 1); /*0xa27335*/
    }
  }
}
