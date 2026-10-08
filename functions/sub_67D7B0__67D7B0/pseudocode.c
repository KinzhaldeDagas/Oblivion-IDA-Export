unsigned int sub_67D7B0()
{
  TESObjectCELL *currentInteriorCell; // ecx
  unsigned int result; // eax
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // ecx
  int v5; // eax

  currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x67d7b5*/
  if ( currentInteriorCell ) /*0x67d7ba*/
  {
    result = sub_4AF170(currentInteriorCell); /*0x67d7bc*/
    if ( result ) /*0x67d7c3*/
      return sub_4E55A0(result); /*0x67d7c7*/
  }
  else
  {
    result = uGridsToLoad; /*0x67d7cc*/
    for ( i = 0; i < result; ++i ) /*0x67d7d2*/
    {
      for ( j = 0; j < result; ++j ) /*0x67d7d9*/
      {
        cell = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, j)->cell; /*0x67d7f4*/
        if ( cell ) /*0x67d7f8*/
        {
          v5 = sub_4AF170(cell); /*0x67d7fa*/
          if ( v5 ) /*0x67d801*/
            sub_4E55A0(v5); /*0x67d805*/
        }
        result = uGridsToLoad; /*0x67d80a*/
      }
    }
  }
  return result; /*0x67d81b*/
}
