void __thiscall sub_440270(_DWORD **this)
{
  char v4; // bl
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // eax

  v4 = 0; /*0x440274*/
  for ( i = 0; i < uGridsToLoad; ++i ) /*0x440278*/
  {
    for ( j = 0; j < uGridsToLoad; ++j ) /*0x440288*/
    {
      cell = GetGridEntry((GridCellArray *)*(this + 2), i, j)->cell; /*0x4402a2*/
      if ( cell && (cell->members.flags0 & 2) != 0 ) /*0x4402b0*/
      {
        v4 = 1; /*0x4402b7*/
        break; /*0x4402b7*/
      }
    }
  }
  if ( v4 ) /*0x4402c0*/
  {
    if ( !byte_B0703C ) /*0x4402c2*/
      sub_498F30(); /*0x4402d2*/
  }
  else if ( byte_B0703C ) /*0x4402d7*/
  {
    WaterManager::Destroy_((WaterManager *)*(this + 0x15), (int *)1); /*0x4402e5*/
  }
}
