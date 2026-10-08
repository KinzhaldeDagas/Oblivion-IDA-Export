// Verified TESObjectDOOR destructor helper calls TESObjectDOOR_ClearRandomTeleportSpaceList, then clears TESForm component references.
void __thiscall TESObjectDOOR_ClearRandomTeleportSpacesAndComponents(TESObjectDOOR *this)
{
  struct TESObjectDOOR_RandomTeleportSpaceNode *next; // edi

  if ( this->super.randomTeleport.next ) /*0x4b7a23*/
  {
    do /*0x4b7a44*/
    {
      next = this->super.randomTeleport.next->next; /*0x4b7a33*/
      FormHeapFree((unsigned int)this->super.randomTeleport.next); /*0x4b7a37*/
      this->super.randomTeleport.next = next; /*0x4b7a41*/
    }
    while ( next ); /*0x4b7a44*/
  }
  this->super.randomTeleport.space = 0; /*0x4b7a47*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b7a51*/
}
