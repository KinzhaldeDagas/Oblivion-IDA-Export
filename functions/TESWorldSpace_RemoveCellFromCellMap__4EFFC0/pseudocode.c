void __thiscall TESWorldSpace_RemoveCellFromCellMap(TESWorldSpace *this, TESObjectCELL *a2)
{
  TESObjectCELL *v2; // edi
  unsigned __int16 YCoordinate; // bp
  int v5; // esi

  v2 = a2; /*0x4effc2*/
  if ( a2 ) /*0x4effca*/
  {
    if ( !TESObjectCELL_IsInterior(a2) ) /*0x4effce*/
    {
      YCoordinate = TESObjectCELL_GetYCoordinate(v2); /*0x4effe2*/
      v5 = YCoordinate | ((__int16)TESObjectCELL_GetXCoordinate(v2) << 0x10); /*0x4efffb*/
      if ( NiTMap_GetAt(&this->cellMap->vtbl, v5, &a2) ) /*0x4efffe*/
      {
        if ( v2 == a2 ) /*0x4f000b*/
        {
          NiTMap_RemoveAt(&this->cellMap->vtbl, v5); /*0x4f0011*/
          TESObjectCELL::SetWorldspace(v2, 0); /*0x4f001a*/
        }
      }
    }
  }
}
