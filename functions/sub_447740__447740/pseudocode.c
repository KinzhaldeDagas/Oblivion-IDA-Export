TESForm *__thiscall sub_447740(TESWorldSpace **this, signed int a2, signed int a3, TESWorldSpace *a4, char a5)
{
  TESWorldSpace *v5; // esi
  TESForm *result; // eax

  v5 = a4;
  if ( !a4 )
  {
    v5 = *(this + 3);
    if ( !v5 )
      return 0;
  }
  if ( a2 > 0x7FFF || a3 > 0x7FFF || a2 < (int)0xFFFF8000 || a3 < (int)0xFFFF8000 )
  {
    PrintError(
      "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
      0xFFFF8000,
      0x7FFF);
  }
  else
  {
    result = (TESForm *)TESWorldSpace::GetCellAtCellCoord(v5, a2, a3);
    if ( result )
      return result;
    if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) && a5 )
      return sub_4471D0(EmptyString, a2, a3, (int **)v5);
  }
  return 0;
}
