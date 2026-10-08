void sub_891010()
{
  UInt32 v0; // esi

  v0 = unk_BA7A64; /*0x891011*/
  if ( unk_BA7A64 ) /*0x891011*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) ) /*0x89101f*/
    {
      if ( v0 ) /*0x89102b*/
        (**(void (__thiscall ***)(UInt32, int))v0)(v0, 1); /*0x891035*/
    }
    unk_BA7A64 = 0; /*0x891037*/
  }
}
