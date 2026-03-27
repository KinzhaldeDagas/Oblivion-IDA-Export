void __thiscall sub_643740(HighProcess *this, _DWORD *a2)
{
  PathLow *pathing; // ecx

  if ( dword_B3BF80 )
  {
    if ( a2 )
      sub_6826D0((_DWORD *)dword_B3BF80, a2);
  }
  pathing = this->pathing;
  if ( pathing )
    (**(void (__thiscall ***)(PathLow *, int))pathing)(pathing, 1);
  this->pathing = 0;
}
