// Pass223: Clears default NiTexturingProperty global 0x00B3F974.
void sub_7040C0()
{
  int v0; // esi

  v0 = unk_B3F974; /*0x7040c1*/
  if ( unk_B3F974 ) /*0x7040c1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) ) /*0x7040cf*/
    {
      if ( v0 ) /*0x7040db*/
        (**(void (__thiscall ***)(int, int))v0)(v0, 1); /*0x7040e5*/
    }
    unk_B3F974 = 0; /*0x7040e7*/
  }
}
