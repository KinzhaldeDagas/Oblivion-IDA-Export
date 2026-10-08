// Pass223: Clears default NiWireframeProperty global 0x00B3F984.
void sub_706AF0()
{
  int v0; // esi

  v0 = unk_B3F984; /*0x706af1*/
  if ( unk_B3F984 ) /*0x706af1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) ) /*0x706aff*/
    {
      if ( v0 ) /*0x706b0b*/
        (**(void (__thiscall ***)(int, int))v0)(v0, 1); /*0x706b15*/
    }
    unk_B3F984 = 0; /*0x706b17*/
  }
}
