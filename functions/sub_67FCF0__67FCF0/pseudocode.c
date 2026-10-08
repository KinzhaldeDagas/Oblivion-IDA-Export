// Verified lazy initialization of LowPathSearchGlobals.doorLinkMap: if null, allocates a 0x10-byte outer NiTPointerMap<TESForm*,NiTPointerMap<TESForm*,BSSimpleList<AStarWorldNode*>*>*> with 0xBF buckets. Called from WinMain and after map teardown during save/load reconciliation.
void __cdecl TravelPath_EnsureDoorLinkMapInitialized()
{
  LowPathWorldDoorLinkMap *v0; // eax

  if ( !MEMORY[0xB3BE00].doorLinkMap ) /*0x67fd11*/
  {
    v0 = (LowPathWorldDoorLinkMap *)FormHeapAlloc(0x10u); /*0x67fd1c*/
    if ( v0 ) /*0x67fd32*/
      MEMORY[0xB3BE00].doorLinkMap = NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>( /*0x67fd40*/
                                       v0,
                                       0xBFu);
    else
      MEMORY[0xB3BE00].doorLinkMap = 0; /*0x67fd57*/
  }
}
