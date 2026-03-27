volatile LONG **__thiscall sub_405760(NiGeometry *this, volatile LONG **a2)
{
  volatile LONG *unk0AC; // eax

  unk0AC = (volatile LONG *)this->member.unk0AC;
  *a2 = unk0AC;
  if ( unk0AC )
    InterlockedIncrement(unk0AC + 1);
  return a2;
}
