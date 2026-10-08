// Unique insertion for the spline-cache map. Searches by the 28-byte small-string key, inserts and rebalances only when absent, and returns {iterator, inserted}.
OB_stBezierSplineCacheInsertResult_010201A0 *__thiscall OB_stBezierSplineCacheMap_InsertUnique_010201A0(
        OB_stBezierSplineCacheMap_010201A0 *this,
        OB_stBezierSplineCacheInsertResult_010201A0 *result,
        const OB_stBezierSplineCachePair_010201A0 *value)
{
  OB_stBezierSplineCacheMap_010201A0 *owner; // edi
  OB_stBezierSplineCacheNode_010201A0 *parent; // esi
  bool v6; // zf
  OB_stBezierSplineCacheNode_010201A0 *head; // ebp
  char v8; // al
  unsigned int size; // ebp
  _DWORD *p_heapData; // edx
  unsigned int v11; // edi
  unsigned int v12; // ecx
  OB_stStringStorage16_010201A0 *p_storage; // eax
  signed int v14; // eax
  bool v15; // sf
  int v16; // eax
  OB_stBezierSplineCacheNode_010201A0 *node; // esi
  OB_stBezierSplineCacheIterator_010201A0 *inserted; // eax
  OB_stBezierSplineCacheMap_010201A0 *v19; // edx
  OB_stStringStorage16_010201A0 *heapData; // eax
  OB_stBezierSplineCacheMap_010201A0 *v22; // edx
  unsigned __int8 v23; // [esp+10h] [ebp-Ch]
  OB_stBezierSplineCacheIterator_010201A0 v24; // [esp+14h] [ebp-8h] BYREF
  const OB_stBezierSplineCachePair_010201A0 *valuea; // [esp+24h] [ebp+8h]

  owner = this; /*0x785fab*/
  parent = this->head->parent; /*0x785fb0*/
  v6 = parent->isNil == 0; /*0x785fb3*/
  head = this->head; /*0x785fb7*/
  v8 = 1; /*0x785fb9*/
  v24.owner = this; /*0x785fbb*/
  v23 = 1; /*0x785fbf*/
  if ( v6 ) /*0x785fc3*/
  {
    do /*0x78602c*/
    {
      size = parent->key.size; /*0x785fc9*/
      valuea = (const OB_stBezierSplineCachePair_010201A0 *)parent; /*0x785fcc*/
      if ( parent->key.capacity < 0x10 ) /*0x785fd0*/
        p_heapData = &parent->key.storage.heapData; /*0x785fd7*/
      else
        p_heapData = parent->key.storage.heapData; /*0x785fd2*/
      v11 = value->key.size; /*0x785fda*/
      v12 = v11; /*0x785fe1*/
      if ( v11 >= size ) /*0x785fe3*/
        v12 = parent->key.size; /*0x785fe5*/
      if ( value->key.capacity < 0x10 ) /*0x785feb*/
        p_storage = &value->key.storage; /*0x785ff2*/
      else
        p_storage = (OB_stStringStorage16_010201A0 *)value->key.storage.heapData; /*0x785fed*/
      v14 = sub_6F5CB0(p_storage, p_heapData, v12); /*0x785ff8*/
      v15 = v14 < 0; /*0x786000*/
      if ( !v14 ) /*0x786002*/
      {
        if ( v11 >= size ) /*0x786006*/
          v16 = v11 != size; /*0x786011*/
        else
          v16 = 0xFFFFFFFF; /*0x786008*/
        v15 = v16 < 0; /*0x786014*/
      }
      v8 = v15; /*0x786016*/
      v23 = v15; /*0x78601b*/
      if ( v15 ) /*0x78601f*/
        parent = parent->left; /*0x786021*/
      else
        parent = parent->right; /*0x786025*/
    }
    while ( !parent->isNil ); /*0x78602c*/
    owner = v24.owner; /*0x78602e*/
    head = (OB_stBezierSplineCacheNode_010201A0 *)valuea; /*0x786032*/
  }
  node = head; /*0x786038*/
  v24.node = head; /*0x78603a*/
  v24.owner = owner; /*0x78603e*/
  if ( v8 ) /*0x786042*/
  {
    if ( head == owner->head->left ) /*0x78604d*/
    {
      inserted = OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(owner, &v24, 1u, head, value); /*0x786056*/
LABEL_23:
      v19 = inserted->owner; /*0x78605b*/
      result->position.node = inserted->node; /*0x786069*/
      result->inserted = 1; /*0x78606c*/
      result->position.owner = v19; /*0x786070*/
      return result; /*0x786076*/
    }
    OB_stBezierSplineCacheIterator_Decrement_010201A0(&v24); /*0x786079*/
    node = v24.node; /*0x78607e*/
  }
  if ( value->key.capacity < 0x10 ) /*0x78608c*/
    heapData = &value->key.storage; /*0x786093*/
  else
    heapData = (OB_stStringStorage16_010201A0 *)value->key.storage.heapData; /*0x78608e*/
  if ( sub_6F5DE0(&node->key.allocatorState, 0, node->key.size, heapData, value->key.size) < 0 ) /*0x7860a5*/
  {
    inserted = OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(owner, &v24, v23, head, value); /*0x7860b2*/
    goto LABEL_23; /*0x7860b2*/
  }
  v22 = v24.owner; /*0x7860b8*/
  result->position.node = node; /*0x7860bd*/
  result->inserted = 0; /*0x7860c2*/
  result->position.owner = v22; /*0x7860c6*/
  return result; /*0x78605b*/
}
