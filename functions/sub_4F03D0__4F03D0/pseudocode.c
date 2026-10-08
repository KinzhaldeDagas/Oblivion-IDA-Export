// Verified: WorldSpace wrapper that removes a reference from its persistentCell via TESObjectCELL_RemoveReference; this removes it from the +0x64 persistent-reference index when applicable. It does not touch the separate SubSpace spatial index at +0x60.
void __thiscall TESWorldSpace_RemovePersistentCellReference(TESWorldSpace *this, TESObjectREFR *reference)
{
  TESObjectCELL *persistentCell; // ecx

  if ( reference ) /*0x4f03d6*/
  {
    persistentCell = this->persistentCell; /*0x4f03d8*/
    if ( persistentCell ) /*0x4f03dd*/
      TESObjectCELL_RemoveReference(persistentCell, reference); /*0x4f03e3*/
  }
}
