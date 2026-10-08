// TESQuest::IsStageDone scans the quest's stage entries and matches the stored stage byte; on a match it returns that entry's completed byte, otherwise false.
bool __thiscall TESQuest::IsStageDone(TESQuest *this, UInt8 stage)
{
  BSSimpleList_VoidPtr *p_stages; // eax
  BSSimpleList_VoidPtr::NodeVoid *next; // ecx

  p_stages = &this->stages; /*0x529b30*/
  if ( this != (TESQuest *)0xFFFFFFC0 ) /*0x529b36*/
  {
    do /*0x529b40*/
    {
      next = p_stages->firstNode.next; /*0x529b40*/
      if ( !next && !p_stages->firstNode.data ) /*0x529b47*/
        break; /*0x529b47*/
      if ( *(_BYTE *)p_stages->firstNode.data == stage ) /*0x529b4f*/
        return *((_BYTE *)p_stages->firstNode.data + 1); /*0x529b5f*/
      p_stages = (BSSimpleList_VoidPtr *)p_stages->firstNode.next; /*0x529b51*/
    }
    while ( next ); /*0x529b40*/
  }
  return 0; /*0x529b59*/
}
