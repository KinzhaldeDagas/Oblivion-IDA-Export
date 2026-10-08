TESForm *__thiscall sub_447740(TESWorldSpace **this, signed int cellX, signed int cellY, TESWorldSpace *a4, char a5)
{
  TESWorldSpace *v5; // esi
  TESForm *result; // eax

  v5 = a4; /*0x447742*/
  if ( !a4 ) /*0x44774a*/
  {
    v5 = *(this + 3); /*0x44774c*/
    if ( !v5 ) /*0x447751*/
      return 0; /*0x447757*/
  }
  if ( cellX > 0x7FFF || cellY > 0x7FFF || cellX < (int)0xFFFF8000 || cellY < (int)0xFFFF8000 ) /*0x447782*/
  {
    PrintError( /*0x4477d5*/
      "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
      0xFFFF8000,
      0x7FFF);
  }
  else
  {
    result = (TESForm *)TESWorldSpace::GetCellAtCellCoord(v5, cellX, cellY); /*0x447788*/
    if ( result ) /*0x44778f*/
      return result; /*0x44778f*/
    if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x184) && a5 ) /*0x4477ae*/
      return sub_4471D0(EmptyString, cellX, cellY, v5); /*0x4477c3*/
  }
  return 0; /*0x447753*/
}
