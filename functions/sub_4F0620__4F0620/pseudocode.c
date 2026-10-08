// Verified: climbs the supplied WorldSpace chain to its root, allocates an 8-byte BSSimpleList head, copies refs from root.persistentCell, then copies refs from handler worldspaces whose parentWorldspace equals that root. It does not recurse through arbitrary descendants.
TESWorldSpaceCellReferenceList *__fastcall TESWorldSpace_CollectPersistentCellReferences(TESWorldSpace *worldspace)
{
  TESWorldSpace *v1; // ebx
  TESWorldSpaceCellReferenceList *v2; // eax
  TESWorldSpaceCellReferenceList *v3; // edi
  TESObjectCELL *persistentCell; // ecx
  OblivionTESFormListNode *p_worldspaceList; // esi
  TESForm *item; // eax
  TESObjectCELL *v7; // eax

  do /*0x4f0628*/
  {
    v1 = worldspace; /*0x4f0621*/
    worldspace = worldspace->parentWorldspace; /*0x4f0623*/
  }
  while ( worldspace ); /*0x4f0628*/
  v2 = (TESWorldSpaceCellReferenceList *)FormHeapAlloc(8u);// Verified: allocates an 8-byte list head for persistent-cell reference aggregation. /*0x4f0633*/
  if ( v2 ) /*0x4f063d*/
  {
    v2->firstReference = 0; /*0x4f063f*/
    v2->overflowNodes = 0; /*0x4f0645*/
    v3 = v2; /*0x4f064c*/
  }
  else
  {
    v3 = 0; /*0x4f0650*/
  }
  if ( v3 ) /*0x4f0654*/
  {
    persistentCell = v1->persistentCell; /*0x4f0656*/
    if ( persistentCell ) /*0x4f065b*/
      sub_4CB520(persistentCell, v3); /*0x4f065e*/
  }
  p_worldspaceList = &g_TESDataHandler->worldspaceList; /*0x4f066a*/
  if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFFF4 ) /*0x4f066d*/
  {
    do /*0x4f0693*/
    {
      item = p_worldspaceList->item; /*0x4f0670*/
      if ( p_worldspaceList->item ) /*0x4f0670*/
      {
        if ( *(TESWorldSpace **)&item[5].member.type == v1 ) /*0x4f0679*/
        {
          if ( v3 ) /*0x4f067d*/
          {
            v7 = *(TESObjectCELL **)&item[2].member.type; /*0x4f067f*/
            if ( v7 ) /*0x4f0684*/
              sub_4CB520(v7, v3); /*0x4f0689*/
          }
        }
      }
      p_worldspaceList = p_worldspaceList->next; /*0x4f068e*/
    }
    while ( p_worldspaceList ); /*0x4f0693*/
  }
  return v3; /*0x4f0699*/
}
