void sub_7E30F0()
{
  int v0; // esi

  v0 = unk_B46014; /*0x7e30f1*/
  if ( unk_B46014 ) /*0x7e30f1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) ) /*0x7e30ff*/
    {
      if ( v0 ) /*0x7e310b*/
        (**(void (__thiscall ***)(int, int))v0)(v0, 1); /*0x7e3115*/
    }
    unk_B46014 = 0; /*0x7e3117*/
  }
}
