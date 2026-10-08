// Verified duplicate test: finds the two endpoint spaces from the door reference and linked door, looks up that pair in the nested map, and checks whether any AStarWorldNode in the list contains this reference at either endpoint. TESObjectREFR::AddToLowPathWorld skips construction/insertion when this returns true.
bool __cdecl TravelPath_HasAStarWorldNodeForDoor(TESObjectREFR *doorReference)
{
  TESObjectREFR *v1; // edi
  bool v2; // bl
  TeleportData *TeleportData; // eax
  TeleportData *v4; // esi
  TESForm *SpatialContainerAtPosition; // eax
  LowPathWorldDoorLinkMap *doorLinkMap; // ecx
  TESObjectREFR *v7; // ebp
  TESObjectREFR *LinkedDoor; // eax
  TESForm *v9; // eax
  TESObjectREFR *v10; // esi

  v1 = doorReference; /*0x67f5d2*/
  v2 = 0; /*0x67f5d6*/
  if ( doorReference ) /*0x67f5da*/
  {
    TeleportData = TESObjectREFR_GetTeleportData(doorReference); /*0x67f5e3*/
    v4 = TeleportData; /*0x67f5e8*/
    if ( TeleportData ) /*0x67f5ec*/
    {
      if ( TeleportData_GetLinkedDoor(TeleportData) ) /*0x67f5f4*/
      {
        SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(v1); /*0x67f603*/
        if ( SpatialContainerAtPosition ) /*0x67f60a*/
        {
          doorLinkMap = MEMORY[0xB3BE00].doorLinkMap; /*0x67f611*/
          doorReference = 0; /*0x67f618*/
          if ( NiTMap_GetAt(doorLinkMap, (int)SpatialContainerAtPosition, &doorReference) ) /*0x67f61c*/
          {
            v7 = doorReference; /*0x67f626*/
            if ( doorReference ) /*0x67f62c*/
            {
              LinkedDoor = TeleportData_GetLinkedDoor(v4); /*0x67f630*/
              v9 = TESObjectREFR_GetSpatialContainerAtPosition(LinkedDoor); /*0x67f637*/
              if ( v9 ) /*0x67f63e*/
              {
                doorReference = 0; /*0x67f648*/
                if ( NiTMap_GetAt(v7, (int)v9, &doorReference) ) /*0x67f64c*/
                {
                  v10 = doorReference; /*0x67f655*/
                  if ( doorReference ) /*0x67f65b*/
                  {
                    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v10) ) /*0x67f669*/
                    {
                      if ( AStarWorldNode_ContainsReference((AStarWorldNode *)v10->vtbl, v1) ) /*0x67f66e*/
                        return 1; /*0x67f685*/
                      v10 = *(TESObjectREFR **)&v10->member.super.type; /*0x67f677*/
                      if ( !v10 ) /*0x67f67c*/
                        return 0; /*0x67f684*/
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2; /*0x67f680*/
}
