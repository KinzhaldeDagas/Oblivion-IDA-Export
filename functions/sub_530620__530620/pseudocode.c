void __cdecl TESTopicInfo_ClearSharedResponseCache()
{
  TESResponse *data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // edi

LABEL_1:
  data = (TESResponse *)g_cachedTopicInfoResponseList.firstNode.data; /*0x530622*/
  next = g_cachedTopicInfoResponseList.firstNode.next; /*0x530628*/
  while ( !BSSimpleList_IsEmpty(&g_cachedTopicInfoResponseList) ) /*0x53063c*/
  {
    if ( data ) /*0x530640*/
    {
      TESResponse::Destroy(data); /*0x530644*/
      FormHeapFree((unsigned int)data); /*0x53064a*/
      next = g_cachedTopicInfoResponseList.firstNode.next; /*0x53064f*/
    }
    if ( next ) /*0x53065a*/
    {
      g_cachedTopicInfoResponseList.firstNode.next = next->next; /*0x530661*/
      g_cachedTopicInfoResponseList.firstNode.data = next->data; /*0x53066a*/
      FormHeapFree((unsigned int)next); /*0x530670*/
      goto LABEL_1; /*0x530678*/
    }
    data = 0; /*0x53067a*/
    g_cachedTopicInfoResponseList.firstNode.data = 0; /*0x53067c*/
  }
}
