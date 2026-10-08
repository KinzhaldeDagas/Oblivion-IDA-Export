unsigned int __thiscall sub_43FCD0(GridCellArray **this)
{
  unsigned int result; // eax
  unsigned int i; // edi
  unsigned int j; // esi
  GridEntry *GridEntry; // eax
  TESObjectLAND *v6; // eax

  result = uGridsToLoad; /*0x43fcd0*/
  for ( i = 0; i < result; ++i ) /*0x43fcda*/
  {
    for ( j = 0; j < result; ++j ) /*0x43fce4*/
    {
      GridEntry = GetGridEntry(*(this + 2), i, j); /*0x43fcef*/
      if ( GridEntry ) /*0x43fcf6*/
      {
        v6 = sub_4CE3C0(GridEntry->cell); /*0x43fcfa*/
        if ( v6 ) /*0x43fd01*/
          sub_4C2300(v6); /*0x43fd05*/
      }
      result = uGridsToLoad; /*0x43fd0a*/
    }
  }
  return result; /*0x43fd19*/
}
