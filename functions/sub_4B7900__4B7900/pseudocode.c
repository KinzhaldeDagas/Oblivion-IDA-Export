// Verified clears TESObjectDOOR.randomTeleport: frees each allocated successor node, then clears the inline first-space pointer. Called before copying door data.
void __thiscall TESObjectDOOR_ClearRandomTeleportSpaceList(TESObjectDOOR *this)
{
  struct TESObjectDOOR_RandomTeleportSpaceNode *next; // edi

  if ( this->super.randomTeleport.next ) /*0x4b7903*/
  {
    do /*0x4b7924*/
    {
      next = this->super.randomTeleport.next->next; /*0x4b7913*/
      FormHeapFree((unsigned int)this->super.randomTeleport.next); /*0x4b7917*/
      this->super.randomTeleport.next = next; /*0x4b7921*/
    }
    while ( next ); /*0x4b7924*/
  }
  this->super.randomTeleport.space = 0; /*0x4b7927*/
}
