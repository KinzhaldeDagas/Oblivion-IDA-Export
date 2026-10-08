GridEntry *__thiscall sub_43FAB0(_DWORD *this, TESObjectCELL *a2)
{
  int XCoordinate; // ebp
  int YCoordinate; // eax
  int v5; // edx
  int v6; // ecx
  GridEntry *GridEntry; // eax
  GridEntry *v9; // [esp+8h] [ebp-4h]

  v9 = 0; /*0x43fabb*/
  if ( a2 ) /*0x43fac3*/
  {
    if ( !TESObjectCELL_IsInterior(a2) ) /*0x43fac7*/
    {
      XCoordinate = TESObjectCELL_GetXCoordinate(a2); /*0x43fadb*/
      YCoordinate = TESObjectCELL_GetYCoordinate(a2); /*0x43fadd*/
      v5 = XCoordinate + ((unsigned int)uGridsToLoad >> 1) - *(this + 8); /*0x43faf4*/
      v6 = YCoordinate + ((unsigned int)uGridsToLoad >> 1) - *(this + 9); /*0x43faf6*/
      if ( v5 < (unsigned int)uGridsToLoad && v6 < (unsigned int)uGridsToLoad && v5 >= 0 && v6 >= 0 ) /*0x43fb06*/
      {
        GridEntry = GetGridEntry( /*0x43fb0d*/
                      (GridCellArray *)*(this + 2),
                      v5,
                      YCoordinate + ((unsigned int)uGridsToLoad >> 1) - *(this + 9));
        v9 = GridEntry; /*0x43fb14*/
        if ( GridEntry ) /*0x43fb18*/
        {
          if ( GridEntry->cell != a2 ) /*0x43fb1c*/
            return 0; /*0x43fb1e*/
        }
      }
    }
  }
  return v9; /*0x43fb2c*/
}
