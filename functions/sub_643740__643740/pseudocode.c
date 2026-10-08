void __thiscall sub_643740(HighProcess *this, _DWORD *a2)
{
  PathLow *pathing; // ecx

  if ( unk_B3BF80 ) /*0x643743*/
  {
    if ( a2 ) /*0x643753*/
      sub_6826D0((_DWORD *)unk_B3BF80, a2); /*0x643756*/
  }
  pathing = this->pathing; /*0x64375b*/
  if ( pathing ) /*0x643760*/
    (**(void (__thiscall ***)(PathLow *, int))pathing)(pathing, 1); /*0x643768*/
  this->pathing = 0; /*0x64376a*/
}
