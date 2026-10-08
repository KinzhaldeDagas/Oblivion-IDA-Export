// Oblivion stBezierSpline cache lookup/insert helper. lower_bound searches the 28-byte source-string key; an absent key is copied into a {string,spline*} pair and inserted with a hint. Returns the node's stBezierSpline** value slot at +0x28.
OB_stBezierSpline_010201A0 **__thiscall OB_StBezierSpline_FindOrInsertCacheEntry_010201A0(
        OB_stBezierSplineCacheMap_010201A0 *cacheMap,
        const OB_stString28_010201A0 *stringObject)
{
  OB_stBezierSplineCacheMap_010201A0 *owner; // edi
  OB_stBezierSplineCacheNode_010201A0 *node; // esi
  _DWORD *p_heapData; // eax
  OB_stBezierSplineCacheIterator_010201A0 *inserted; // eax
  OB_stBezierSplineCacheIterator_010201A0 result; // [esp+10h] [ebp-34h] BYREF
  OB_stBezierSplineCachePair_010201A0 value; // [esp+18h] [ebp-2Ch] BYREF
  int v9; // [esp+40h] [ebp-4h]

  owner = cacheMap; /*0x786c87*/
  node = OB_stBezierSplineCacheMap_LowerBound_010201A0(cacheMap, stringObject); /*0x786c97*/
  if ( !owner ) /*0x786c99*/
    _invalid_parameter_noinfo(0, 0, (int)node); /*0x786c9b*/
  if ( node == owner->head
    || (node->key.capacity < 0x10
      ? (p_heapData = &node->key.storage.heapData)
      : (p_heapData = node->key.storage.heapData),
        sub_6F5DE0(stringObject, 0, stringObject->size, p_heapData, node->key.size) < 0) )
  {
    value.key.capacity = 0xF; /*0x786cd2*/
    value.key.size = 0; /*0x786cda*/
    value.key.storage.inlineData[0] = 0; /*0x786cde*/
    OB_stString28_AssignSubstring_010201A0((int)&value, stringObject, 0, 0xFFFFFFFF); /*0x786ce2*/
    value.value = 0; /*0x786ce7*/
    v9 = 0; /*0x786cf9*/
    inserted = OB_stBezierSplineCacheMap_InsertHint_010201A0(owner, &result, owner, node, &value); /*0x786cfd*/
    owner = inserted->owner; /*0x786d07*/
    node = inserted->node; /*0x786d09*/
    if ( value.key.capacity >= 0x10 ) /*0x786d0c*/
      FormHeapFree((unsigned int)value.key.storage.heapData); /*0x786d13*/
    value.key.capacity = 0xF; /*0x786d1b*/
    value.key.size = 0; /*0x786d23*/
    value.key.storage.inlineData[0] = 0; /*0x786d27*/
  }
  if ( !owner ) /*0x786d2d*/
    _invalid_parameter_noinfo(0, 0, (int)node); /*0x786d2f*/
  if ( node == owner->head ) /*0x786d37*/
    _invalid_parameter_noinfo(0, (int)owner, (int)node); /*0x786d39*/
  return &node->value; /*0x786d4d*/
}
