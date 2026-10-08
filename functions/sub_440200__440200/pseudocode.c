unsigned int __fastcall sub_440200(unsigned int a1)
{
  unsigned int result; // eax
  _DWORD *v2; // ecx
  unsigned int i; // edi
  unsigned int j; // esi
  GridEntry *GridEntry; // eax

  result = a1; /*0x440200*/
  if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x440208*/
  {
    v2 = *(_DWORD **)(a1 + 0x58); /*0x44020e*/
    if ( v2 ) /*0x440213*/
      return sub_49B5F0(v2, *(_DWORD *)(result + 0x20), *(_DWORD *)(result + 0x24)); /*0x44021d*/
  }
  else
  {
    result = uGridsToLoad; /*0x440223*/
    for ( i = 0; i < result; ++i ) /*0x440229*/
    {
      for ( j = 0; j < result; ++j ) /*0x440234*/
      {
        GridEntry = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, j); /*0x440245*/
        sub_49A000(&GridEntry->info->unk00, GridEntry->cell); /*0x440250*/
        result = uGridsToLoad; /*0x440255*/
      }
    }
  }
  return result; /*0x440222*/
}
