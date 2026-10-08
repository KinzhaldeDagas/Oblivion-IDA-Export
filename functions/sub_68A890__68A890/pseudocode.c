// Verified: scans TravelPath reference nodes for a reference whose spatial container or WorldSpace matches targetWorldspace. If the reference is a teleport door in another space, it checks the linked door and may return that linked door. continueAfterMatch controls whether scanning continues after a match; the fast-travel script wrapper calls with false to return the first match.
TESObjectREFR *__thiscall TravelPath_FindReferenceForWorldspace(
        TravelPath *this,
        TESWorldSpace *targetWorldspace,
        char continueAfterMatch)
{
  TESObjectREFR *result; // eax
  BSSimpleList_VoidPtr *p_nodes; // ebx
  const TravelPathNode *data; // ecx
  bool v6; // zf
  TESObjectREFR *Reference; // eax
  TESObjectREFR *v8; // edi
  TESForm *SpatialContainerAtPosition; // esi
  TESWorldSpace *v10; // eax
  TESObjectREFR *v11; // eax
  TeleportData *TeleportData; // eax
  TeleportData *v13; // edi
  TESObjectREFR *LinkedDoor; // eax
  TESForm *v15; // esi
  TESWorldSpace *WorldSpace; // eax
  TESObjectREFR *v17; // eax
  TESObjectREFR *v18; // [esp+4h] [ebp-4h]

  result = 0; /*0x68a892*/
  p_nodes = &this->nodes; /*0x68a894*/
  v18 = 0; /*0x68a899*/
  if ( this != (TravelPath *)0xFFFFFFFC ) /*0x68a89d*/
  {
    do /*0x68a9b8*/
    {
      data = (const TravelPathNode *)p_nodes->firstNode.data; /*0x68a8b0*/
      v6 = p_nodes->firstNode.data == 0; /*0x68a8b2*/
      p_nodes = (BSSimpleList_VoidPtr *)p_nodes->firstNode.next; /*0x68a8b4*/
      if ( !v6 ) /*0x68a8b7*/
      {
        Reference = TravelPathNode_GetReference(data); /*0x68a8bd*/
        v8 = Reference; /*0x68a8c2*/
        if ( Reference ) /*0x68a8c6*/
        {
          SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(Reference); /*0x68a8df*/
          v10 = (TESWorldSpace *)OblivionDynamicCast( /*0x68a8e4*/
                                   SpatialContainerAtPosition,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESWorldSpace `RTTI Type Descriptor',
                                   0);
          if ( (v10 /*0x68a925*/
             || (v11 = (TESObjectREFR *)OblivionDynamicCast(
                                          SpatialContainerAtPosition,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                          0)) != 0
             && (v10 = TESObjectREFR_GetWorldSpace(v11)) != 0)
            && (!targetWorldspace || v10 == targetWorldspace || Shared_GetPointerAtOffset7C(v10) == targetWorldspace) )
          {
            v18 = v8; /*0x68a927*/
          }
          else
          {
            TeleportData = TESObjectREFR_GetTeleportData(v8); /*0x68a92f*/
            v13 = TeleportData; /*0x68a934*/
            if ( TeleportData ) /*0x68a938*/
            {
              LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x68a93c*/
              v15 = TESObjectREFR_GetSpatialContainerAtPosition(LinkedDoor); /*0x68a954*/
              WorldSpace = (TESWorldSpace *)OblivionDynamicCast( /*0x68a959*/
                                              v15,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                              &TESWorldSpace `RTTI Type Descriptor',
                                              0);
              if ( (WorldSpace /*0x68a99a*/
                 || (v17 = (TESObjectREFR *)OblivionDynamicCast(
                                              v15,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                              (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                              0)) != 0
                 && (WorldSpace = TESObjectREFR_GetWorldSpace(v17)) != 0)
                && (!targetWorldspace
                 || WorldSpace == targetWorldspace
                 || Shared_GetPointerAtOffset7C(WorldSpace) == targetWorldspace) )
              {
                v18 = TeleportData_GetLinkedDoor(v13); /*0x68a9a3*/
              }
            }
          }
        }
      }
      result = v18; /*0x68a9a7*/
    }
    while ( (!v18 || continueAfterMatch) && p_nodes ); /*0x68a9b8*/
  }
  return result; /*0x68a9c1*/
}
