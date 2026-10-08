// Generic BSSimpleList membership test. Dialogue menu code uses it to avoid duplicate MenuTopics; social AI uses it for the recent-conversation target cooldown list.
bool __thiscall BSSimpleList::Contains(BSSimpleList_VoidPtr *this, void *item)
{
  for ( ; this; this = (BSSimpleList_VoidPtr *)this->firstNode.next ) /*0x446c32*/
  {
    if ( this->firstNode.data == item ) /*0x446c3a*/
      break; /*0x446c3a*/
  }
  return this != 0; /*0x446c4a*/
}
