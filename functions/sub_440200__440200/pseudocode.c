unsigned int __fastcall sub_440200(unsigned int a1)
{
  unsigned int result; // eax
  _DWORD *v2; // ecx
  unsigned int i; // edi
  unsigned int j; // esi
  GridEntry *GridEntry; // eax

  result = a1;
  if ( TES->currentInteriorCell )
  {
    v2 = *(_DWORD **)(a1 + 0x58);
    if ( v2 )
      return sub_49B5F0(v2, *(_DWORD *)(result + 0x20), *(_DWORD *)(result + 0x24));
  }
  else
  {
    result = uGridsToLoad;
    for ( i = 0; i < result; ++i )
    {
      for ( j = 0; j < result; ++j )
      {
        GridEntry = GetGridEntry(TES->gridCellArray, i, j);
        sub_49A000(&GridEntry->info->unk00, GridEntry->cell);
        result = uGridsToLoad;
      }
    }
  }
  return result;
}
