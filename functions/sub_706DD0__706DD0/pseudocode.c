// Pass223: Clears default NiZBufferProperty global 0x00B3F998.
void sub_706DD0()
{
  int v0; // esi

  v0 = unk_B3F998; /*0x706dd1*/
  if ( unk_B3F998 ) /*0x706dd1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) ) /*0x706ddf*/
    {
      if ( v0 ) /*0x706deb*/
        (**(void (__thiscall ***)(int, int))v0)(v0, 1); /*0x706df5*/
    }
    unk_B3F998 = 0; /*0x706df7*/
  }
}
