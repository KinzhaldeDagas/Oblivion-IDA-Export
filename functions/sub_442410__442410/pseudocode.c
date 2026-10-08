char __thiscall sub_442410(_DWORD *this)
{
  unsigned int v3; // ecx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  unsigned int i; // esi
  GridEntry *GridEntry; // eax
  TESObjectCELL *cell; // eax
  unsigned int j; // ecx
  unsigned int v10; // [esp+4h] [ebp-8h]
  unsigned int v11; // [esp+8h] [ebp-4h]

  if ( !MEMORY[0xB333A0]->currentWorldSpace ) /*0x442418*/
    return 0; /*0x442421*/
  v3 = uGridsToLoad; /*0x442428*/
  v4 = *(this + 8) - ((unsigned int)uGridsToLoad >> 1); /*0x44243a*/
  v11 = v4; /*0x44243e*/
  v10 = *(this + 9) - ((unsigned int)uGridsToLoad >> 1); /*0x442442*/
  v5 = 0; /*0x442446*/
LABEL_4:
  if ( v5 >= v3 ) /*0x442452*/
    return 1; /*0x4424c7*/
  for ( i = 0; ; ++i ) /*0x442454*/
  {
    if ( i >= v3 ) /*0x442458*/
    {
      ++v5; /*0x4424b5*/
      goto LABEL_4; /*0x4424b8*/
    }
    GridEntry = GetGridEntry((GridCellArray *)*(this + 2), v5, i); /*0x44245f*/
    if ( GridEntry ) /*0x442466*/
      break; /*0x442466*/
LABEL_15:
    v3 = uGridsToLoad; /*0x4424aa*/
  }
  cell = GridEntry->cell; /*0x442468*/
  if ( cell || (cell = TESWorldSpace::GetCellAtCellCoord(MEMORY[0xB333A0]->currentWorldSpace, v5 + v4, i + v10)) != 0 ) /*0x44248a*/
  {
    for ( j = 0; j < uExteriorCellBuffer; ++j ) /*0x442492*/
    {
      if ( *(TESObjectCELL **)(*(this + 0xF) + 4 * j) == cell ) /*0x44249f*/
      {
        v4 = v11; /*0x4424a6*/
        goto LABEL_15; /*0x4424a6*/
      }
    }
  }
  return 0; /*0x442423*/
}
