BSTPersistentListPointerNode *__stdcall sub_7AD1C0(BSTPersistentListPointer *a1, void *payloadAddress)
{
  BSTPersistentListPointerNode *result; // eax

  if ( a1 ) /*0x7ad1c6*/
  {
    if ( payloadAddress ) /*0x7ad1cd*/
      return BSTPersistentList_AppendTailReusingFreeNode(a1, &payloadAddress); /*0x7ad1d4*/
  }
  return result; /*0x7ad1d9*/
}
