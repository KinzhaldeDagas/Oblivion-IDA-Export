char __thiscall sub_442410(_DWORD *this)
{
  unsigned int v3; // ecx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  unsigned int i; // esi
  GridEntry *GridEntry; // eax
  int cell; // eax
  unsigned int j; // ecx
  unsigned int v10; // [esp+4h] [ebp-8h]
  unsigned int v11; // [esp+8h] [ebp-4h]

  if ( !TES->currentWorldSpace )
    return 0;
  v3 = uGridsToLoad;
  v4 = *(this + 8) - ((unsigned int)uGridsToLoad >> 1);
  v11 = v4;
  v10 = *(this + 9) - ((unsigned int)uGridsToLoad >> 1);
  v5 = 0;
LABEL_4:
  if ( v5 >= v3 )
    return 1;
  for ( i = 0; ; ++i )
  {
    if ( i >= v3 )
    {
      ++v5;
      goto LABEL_4;
    }
    GridEntry = GetGridEntry((GridCellArray *)*(this + 2), v5, i);
    if ( GridEntry )
      break;
LABEL_15:
    v3 = uGridsToLoad;
  }
  cell = (int)GridEntry->cell;
  if ( cell || (cell = TESWorldSpace::GetCellAtCellCoord(TES->currentWorldSpace, v5 + v4, i + v10)) != 0 )
  {
    for ( j = 0; j < uExteriorCellBuffer; ++j )
    {
      if ( *(_DWORD *)(*(this + 0xF) + 4 * j) == cell )
      {
        v4 = v11;
        goto LABEL_15;
      }
    }
  }
  return 0;
}
