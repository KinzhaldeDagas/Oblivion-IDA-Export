TESForm *__thiscall TES_GetCellFromCoords(TES *this, signed int a2, signed int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // edi
  TESForm *result; // eax
  TESWorldSpace *currentWorldSpace; // esi

  v4 = (unsigned int)uGridsToLoad >> 1; /*0x43fa57*/
  v5 = v4 - this->extYCoord; /*0x43fa59*/
  v6 = a2 + v4 - this->extXCoord; /*0x43fa62*/
  v7 = a3 + v5; /*0x43fa64*/
  result = 0; /*0x43fa66*/
  if ( v6 >= (unsigned int)uGridsToLoad /*0x43fa86*/
    || v7 >= (unsigned int)uGridsToLoad
    || v6 < 0
    || v7 < 0
    || (result = (TESForm *)GetGridEntry(this->gridCellArray, v6, v7)->cell) == 0 )
  {
    currentWorldSpace = this->currentWorldSpace; /*0x43fa88*/
    if ( currentWorldSpace ) /*0x43fa8d*/
      return sub_447740((TESWorldSpace **)g_TESDataHandler, a2, a3, currentWorldSpace, 0); /*0x43fa9a*/
  }
  return result; /*0x43fa9f*/
}
