// Verified: scans cell object references, filters out references with deleted/disabled flags, then collects door references whose ExtraTeleport exists or whose TESObjectDOOR.randomTeleport list is nonempty. This list feeds teleport-link processing.
void __thiscall TESObjectCELL_CollectDoorsForTeleportProcessing(TESObjectCELL *this, BSSimpleList_VoidPtr *outDoors)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  TESForm::FormFlags flags; // eax
  int v6; // eax
  TESObjectDOOR *v7; // ebp

  if ( outDoors ) /*0x4cbdb8*/
  {
    sub_496EA0((char *)&unk_B35C80, this); /*0x4cbdc5*/
    p_objectList = &this->members.objectList; /*0x4cbdca*/
    if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cbdcf*/
    {
      do /*0x4cbe3a*/
      {
        refr = p_objectList->refr; /*0x4cbdd3*/
        if ( p_objectList->refr ) /*0x4cbdd3*/
        {
          flags = refr->member.super.flags; /*0x4cbdd9*/
          if ( (flags & 0x800) == 0 && (flags & 0x20) == 0 ) /*0x4cbdeb*/
          {
            v6 = (int)refr->vtbl->GetBaseForm(p_objectList->refr); /*0x4cbdf7*/
            if ( *(_BYTE *)(v6 + 4) == 0x18 && v6 != MEMORY[0xB35EBC] ) /*0x4cbe05*/
            {
              v7 = (TESObjectDOOR *)refr->vtbl->GetBaseForm(refr); /*0x4cbe15*/
              if ( TESObjectREFR_GetTeleportData(refr) || TESObjectDOOR_HasRandomTeleportSpaces(v7) ) /*0x4cbe22*/
                BSSimpleList_PushFront(outDoors, (int)refr); /*0x4cbe30*/
            }
          }
        }
        p_objectList = p_objectList->next; /*0x4cbe35*/
      }
      while ( p_objectList ); /*0x4cbe3a*/
    }
    sub_496F50(&unk_B35C80, this); /*0x4cbe44*/
  }
}
