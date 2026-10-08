void sub_71B240()
{
  NiDevImageConverter *v0; // esi

  v0 = unk_B3FD28; /*0x71b241*/
  if ( unk_B3FD28 ) /*0x71b241*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v0 + 1) ) /*0x71b24f*/
    {
      if ( v0 ) /*0x71b25b*/
        (**(void (__thiscall ***)(NiDevImageConverter *, int))v0)(v0, 1); /*0x71b265*/
    }
    unk_B3FD28 = 0; /*0x71b267*/
  }
}
