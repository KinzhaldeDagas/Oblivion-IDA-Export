// Direct fixed-registry lookup: bounds-checks index against g_dialogueTopicBucketCounts[topicType], then returns g_dialogueTopicBuckets[topicType][index].topic. This is not an EDID/name search.
TESTopic *__cdecl TESTopic::GetTopic(DialogueType topicType, int index)
{
  if ( index < 0 || index >= *(_DWORD *)(4 * topicType + 0xB110F4) ) /*0x52ed66*/
    return 0; /*0x52ed58*/
  else
    return *(TESTopic **)(*(_DWORD *)(4 * topicType + 0xB111B8) + 0xC * index); /*0x52ed72*/
}
