void *__thiscall ShadowSceneLight_GetObjectGeometryAtIndex(
        ShadowSceneLight_DecodedLayout *light,
        unsigned __int16 index)
{
  int v2; // esi
  void *result; // eax
  MEF_RefListNode32 *objectListHead_E8; // eax
  struct MEF_RefListNode32 *next; // ecx
  void **p_payload; // eax

  v2 = index; /*0x7c62d1*/
  if ( index >= light->objectListCount_F0 ) /*0x7c62dc*/
    return 0; /*0x7c62de*/
  objectListHead_E8 = light->objectListHead_E8; /*0x7c62e6*/
  next = objectListHead_E8->next; /*0x7c62ec*/
  result = objectListHead_E8->payload; /*0x7c62f1*/
  if ( index ) /*0x7c62f3*/
  {
    do /*0x7c62ff*/
    {
      --v2; /*0x7c62f5*/
      p_payload = &next->payload; /*0x7c62f8*/
      next = next->next; /*0x7c62fb*/
      result = *p_payload; /*0x7c62fd*/
    }
    while ( v2 ); /*0x7c62ff*/
  }
  return result; /*0x7c62e0*/
}
