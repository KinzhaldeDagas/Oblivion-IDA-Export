// Pass223: Clears default NiVertexColorProperty global 0x00B3F980.
void sub_706650()
{
  int v0; // esi

  v0 = unk_B3F980; /*0x706651*/
  if ( unk_B3F980 ) /*0x706651*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v0 + 4)) ) /*0x70665f*/
    {
      if ( v0 ) /*0x70666b*/
        (**(void (__thiscall ***)(int, int))v0)(v0, 1); /*0x706675*/
    }
    unk_B3F980 = 0; /*0x706677*/
  }
}
