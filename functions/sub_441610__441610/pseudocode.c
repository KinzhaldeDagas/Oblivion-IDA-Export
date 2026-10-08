void __thiscall sub_441610(TESObjectCELL **this)
{
  TESObjectCELL *v2; // ecx
  unsigned int v3; // eax
  unsigned int i; // ebx
  unsigned int j; // esi
  GridEntry *GridEntry; // eax

  v2 = *(this + 0xD); /*0x441613*/
  if ( v2 ) /*0x441618*/
  {
    sub_4CB9E0(v2, this + 0x20); /*0x441621*/
  }
  else
  {
    v3 = uGridsToLoad; /*0x441628*/
    for ( i = 0; i < v3; ++i ) /*0x44162e*/
    {
      for ( j = 0; j < v3; ++j ) /*0x441635*/
      {
        GridEntry = GetGridEntry((GridCellArray *)*(this + 2), i, j); /*0x441640*/
        sub_4CB9E0(GridEntry->cell, this + 0x20); /*0x44164e*/
        v3 = uGridsToLoad; /*0x441653*/
      }
    }
  }
}
