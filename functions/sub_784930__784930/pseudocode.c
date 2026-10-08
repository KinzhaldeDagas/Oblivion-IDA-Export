// Oblivion-authoritative lower_bound for the spline cache's 28-byte small-string key. Walks the red-black tree from head->parent/root and returns the first node whose key is not less than the requested key, or head.
OB_stBezierSplineCacheNode_010201A0 *__thiscall OB_stBezierSplineCacheMap_LowerBound_010201A0(
        OB_stBezierSplineCacheMap_010201A0 *this,
        const OB_stString28_010201A0 *key)
{
  OB_stBezierSplineCacheNode_010201A0 *result; // eax
  OB_stBezierSplineCacheNode_010201A0 *parent; // esi
  unsigned int size; // ebx
  OB_stStringStorage16_010201A0 *p_storage; // ebp
  _DWORD *p_heapData; // edx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  _DWORD *heapData; // eax
  signed int v11; // eax
  bool v12; // sf
  OB_stBezierSplineCacheNode_010201A0 *v13; // [esp+4h] [ebp-4h]
  const OB_stString28_010201A0 *keya; // [esp+Ch] [ebp+4h]

  result = this->head; /*0x784931*/
  parent = result->parent; /*0x784935*/
  v13 = result; /*0x78493c*/
  if ( !parent->isNil ) /*0x784938*/
  {
    size = key->size; /*0x78494a*/
    keya = (const OB_stString28_010201A0 *)key->capacity; /*0x78494f*/
    p_storage = &key->storage; /*0x784953*/
    while ( 1 ) /*0x784956*/
    {
      if ( (unsigned int)keya < 0x10 ) /*0x78495b*/
        p_heapData = &p_storage->heapData; /*0x784962*/
      else
        p_heapData = p_storage->heapData; /*0x78495d*/
      v8 = parent->key.size; /*0x784964*/
      v9 = v8; /*0x78496f*/
      if ( v8 >= size ) /*0x784971*/
        v9 = size; /*0x784973*/
      if ( parent->key.capacity < 0x10 ) /*0x784979*/
        heapData = &parent->key.storage.heapData; /*0x784980*/
      else
        heapData = parent->key.storage.heapData; /*0x78497b*/
      v11 = sub_6F5CB0(heapData, p_heapData, v9); /*0x784986*/
      v12 = v11 < 0; /*0x78498e*/
      if ( !v11 ) /*0x784990*/
      {
        if ( v8 < size ) /*0x784994*/
          goto LABEL_15; /*0x784994*/
        LOBYTE(v11) = v8 != size; /*0x784998*/
        v12 = v11 < 0; /*0x78499b*/
      }
      if ( !v12 ) /*0x78499d*/
      {
        v13 = parent; /*0x7849a4*/
        parent = parent->left; /*0x7849a8*/
        goto LABEL_17; /*0x7849a8*/
      }
LABEL_15:
      parent = parent->right; /*0x78499f*/
LABEL_17:
      if ( parent->isNil ) /*0x7849aa*/
        return v13; /*0x7849b0*/
    }
  }
  return result; /*0x7849b7*/
}
