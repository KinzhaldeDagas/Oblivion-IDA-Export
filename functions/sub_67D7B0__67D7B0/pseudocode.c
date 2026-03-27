unsigned int sub_67D7B0()
{
  TESObjectCELL *currentInteriorCell; // ecx
  unsigned int result; // eax
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // ecx
  int v5; // eax

  currentInteriorCell = TES->currentInteriorCell;
  if ( currentInteriorCell )
  {
    result = sub_4AF170(currentInteriorCell);
    if ( result )
      return sub_4E55A0(result);
  }
  else
  {
    result = uGridsToLoad;
    for ( i = 0; i < result; ++i )
    {
      for ( j = 0; j < result; ++j )
      {
        cell = GetGridEntry(TES->gridCellArray, i, j)->cell;
        if ( cell )
        {
          v5 = sub_4AF170(cell);
          if ( v5 )
            sub_4E55A0(v5);
        }
        result = uGridsToLoad;
      }
    }
  }
  return result;
}
