GridEntry *__thiscall sub_43FAB0(_DWORD *this, TESObjectCELL *a2)
{
  int XCoordinate; // ebp
  int YCoordinate; // eax
  int v5; // edx
  int v6; // ecx
  GridEntry *GridEntry; // eax
  GridEntry *v9; // [esp+8h] [ebp-4h]

  v9 = 0;
  if ( a2 )
  {
    if ( !TESObjectCELL_IsInterior(a2) )
    {
      XCoordinate = TESObjectCELL_GetXCoordinate(a2);
      YCoordinate = TESObjectCELL_GetYCoordinate(a2);
      v5 = XCoordinate + ((unsigned int)uGridsToLoad >> 1) - *(this + 8);
      v6 = YCoordinate + ((unsigned int)uGridsToLoad >> 1) - *(this + 9);
      if ( v5 < (unsigned int)uGridsToLoad && v6 < (unsigned int)uGridsToLoad && v5 >= 0 && v6 >= 0 )
      {
        GridEntry = GetGridEntry(
                      (GridCellArray *)*(this + 2),
                      v5,
                      YCoordinate + ((unsigned int)uGridsToLoad >> 1) - *(this + 9));
        v9 = GridEntry;
        if ( GridEntry )
        {
          if ( GridEntry->cell != a2 )
            return 0;
        }
      }
    }
  }
  return v9;
}
