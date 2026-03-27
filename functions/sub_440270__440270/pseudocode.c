void __usercall sub_440270(_DWORD **this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char v4; // bl
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // eax

  v4 = 0;
  for ( i = 0; i < uGridsToLoad; ++i )
  {
    for ( j = 0; j < uGridsToLoad; ++j )
    {
      cell = GetGridEntry((GridCellArray *)*(this + 2), i, j)->cell;
      if ( cell && (cell->members.flags0 & 2) != 0 )
      {
        v4 = 1;
        break;
      }
    }
  }
  if ( v4 )
  {
    if ( !byte_B0703C )
      sub_498F30();
  }
  else if ( byte_B0703C )
  {
    WaterManager::Destroy_((WaterManager *)*(this + 0x15), a2, a3, a4, (int *)1);
  }
}
