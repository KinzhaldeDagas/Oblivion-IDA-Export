char __cdecl sub_405090(char a1, float a2, float a3)
{
  int v3; // eax
  TES *v4; // ecx
  unsigned int i; // ebx
  TESObjectCELL *currentInteriorCell; // esi
  int XCoordinate; // edi
  int YCoordinate; // eax
  unsigned int v10; // [esp+18h] [ebp-4h]

  v3 = sub_43FD20();
  v4 = TES;
  v10 = v3;
  if ( TES->currentInteriorCell )
    v10 = 1;
  for ( i = 0; i < v10; ++i )
  {
    currentInteriorCell = v4->currentInteriorCell;
    if ( !currentInteriorCell )
    {
      currentInteriorCell = v4->exteriorCellBufferArray[i];
      if ( !currentInteriorCell )
        continue;
    }
    if ( a1 )
    {
      XCoordinate = TESObjectCELL_GetXCoordinate(currentInteriorCell);
      YCoordinate = TESObjectCELL_GetYCoordinate(currentInteriorCell);
      v4 = TES;
      if ( (int)abs32(TES->extXCoord - XCoordinate) < 2 && (int)abs32(TES->extYCoord - YCoordinate) < 2 )
        continue;
    }
    sub_4D1A90((char *)currentInteriorCell, a2, a3);
    v4 = TES;
  }
  return sub_43FC20(v4, 1);
}
