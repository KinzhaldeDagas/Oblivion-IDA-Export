// Batch-add each nonnull TESTopic from an INFO.addedTopics list using pointer deduplication and notification requests. Sort the full known-topic list once if any insertion succeeded.
void __thiscall PlayerCharacter::AddKnownTopics(PlayerCharacter *this, tListTopic *topics)
{
  tListTopic *next; // esi
  char v4; // bl

  next = topics; /*0x66c6a1*/
  if ( topics ) /*0x66c6aa*/
  {
    v4 = 0; /*0x66c6ad*/
    do /*0x66c6cd*/
    {
      if ( !next->node.data ) /*0x66c6b0*/
        break; /*0x66c6b4*/
      if ( PlayerCharacter::AddKnownTopic(this, next->node.data, 0, 1) )// AddedTopics iteration preserves the authored list traversal for notifications, while each successful topic is inserted at the known-topic head. Duplicate pointers are silently ignored. /*0x66c6bd*/
        v4 = 1; /*0x66c6c6*/
      next = (tListTopic *)next->node.next; /*0x66c6c8*/
    }
    while ( next ); /*0x66c6cd*/
    if ( v4 )                                   // One alphabetical sort follows the whole AddKnownTopics batch; during DialogMenu the same acquired topics remain available without per-topic notifications. /*0x66c6d2*/
      SortTopicListByDisplayName((tListTopic *)&this->knownTopicFirst); /*0x66c6db*/
  }
}
