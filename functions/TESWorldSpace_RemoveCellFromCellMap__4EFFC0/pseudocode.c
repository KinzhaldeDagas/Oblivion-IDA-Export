void __thiscall TESWorldSpace_RemoveCellFromCellMap(TESWorldSpace *this, TESObjectCELL *a2)
{
  TESObjectCELL *v2; // edi
  unsigned __int16 YCoordinate; // bp
  int v5; // esi

  v2 = a2;
  if ( a2 )
  {
    if ( !TESObjectCELL_IsInterior(a2) )
    {
      YCoordinate = TESObjectCELL_GetYCoordinate(v2);
      v5 = YCoordinate | ((__int16)TESObjectCELL_GetXCoordinate(v2) << 0x10);
      if ( NiTMap_GetAt(&this->cellMap->vtbl, v5, &a2) )
      {
        if ( v2 == a2 )
        {
          NiTMap_RemoveAt(&this->cellMap->vtbl, v5);
          TESObjectCELL::SetWorldspace(v2, 0);
        }
      }
    }
  }
}
