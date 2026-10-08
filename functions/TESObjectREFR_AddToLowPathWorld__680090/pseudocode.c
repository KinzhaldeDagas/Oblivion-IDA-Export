// Verified `LinkDoors` creates reciprocal TeleportData and calls this hook once for a1. The resulting single AStarWorldNode stores both door refs and both spatial forms; its map entries make it reachable from either endpoint space.
void __cdecl TESObjectREFR::AddToLowPathWorld(TESObjectREFR *a1)
{
  TESForm *v1; // eax
  TeleportData *TeleportData; // eax
  AStarWorldNode *AStarWorldNode; // eax
  int v4; // esi

  if ( MEMORY[0xB3BE00].doorLinkMap ) /*0x680090*/
  {
    if ( a1 ) /*0x6800a0*/
    {
      v1 = a1->vtbl->GetBaseForm(a1); /*0x6800ac*/
      if ( v1->member.type == kFormType_Door && v1 != (TESForm *)MEMORY[0xB35EBC] ) /*0x6800ba*/
      {
        TeleportData = TESObjectREFR_GetTeleportData(a1); /*0x6800be*/
        if ( TeleportData ) /*0x6800c5*/
        {
          if ( TeleportData_GetLinkedDoor(TeleportData) ) /*0x6800c9*/
          {
            if ( !TravelPath_HasAStarWorldNodeForDoor(a1) ) /*0x6800d3*/
            {
              AStarWorldNode = TravelPath_CreateAStarWorldNode(a1); /*0x6800e0*/
              v4 = (int)AStarWorldNode; /*0x6800e5*/
              if ( AStarWorldNode ) /*0x6800ec*/
              {
                TravelPath_AddAStarWorldNodeToSpaceMaps(AStarWorldNode); /*0x6800ef*/
                BSSimpleList_PushFront(MEMORY[0xB3BE00].allAStarWorldNodes, v4); /*0x6800fd*/
              }
            }
          }
        }
      }
    }
  }
}
