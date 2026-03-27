TESForm *__thiscall TES_GetCellFromCoords(TES *this, signed int a2, signed int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // edi
  TESForm *result; // eax
  int **currentWorldSpace; // esi

  v4 = (unsigned int)uGridsToLoad >> 1;
  v5 = v4 - this->extYCoord;
  v6 = a2 + v4 - this->extXCoord;
  v7 = a3 + v5;
  result = 0;
  if ( v6 >= (unsigned int)uGridsToLoad
    || v7 >= (unsigned int)uGridsToLoad
    || v6 < 0
    || v7 < 0
    || (result = (TESForm *)GetGridEntry(this->gridCellArray, v6, v7)->cell) == 0 )
  {
    currentWorldSpace = (int **)this->currentWorldSpace;
    if ( currentWorldSpace )
      return sub_447740((_DWORD *)TESDataHandler, a2, a3, currentWorldSpace, 0);
  }
  return result;
}
