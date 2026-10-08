// Oblivion stBezierSpline::ClearCache behavior. Iterates the inline global map, destructs and FormHeap-frees every cached 0x5C spline, nulls value slots, destroys all tree nodes, and resets the existing sentinel/map to empty. RT 4.1 source corroborates ownership semantics; Oblivion differs by retaining an inline map rather than deleting a heap map pointer.
void __cdecl OB_StBezierSpline_ClearCache_010201A0()
{
  OB_stBezierSplineCacheNode_010201A0 *left; // edi
  OB_stBezierSplineCacheMap_010201A0 *owner; // esi
  OB_stBezierSplineCacheNode_010201A0 *head; // ebx
  unsigned int value; // ebx
  OB_stBezierSplineCacheNode_010201A0 *v4; // eax
  OB_stBezierSplineCacheIterator_010201A0 v5; // [esp+Ch] [ebp-8h] BYREF

  left = OB_stBezierSpline_CacheMap_010201A0.head->left; /*0x785d3b*/
  owner = &OB_stBezierSpline_CacheMap_010201A0; /*0x785d3d*/
  v5.node = left; /*0x785d42*/
  for ( v5.owner = &OB_stBezierSpline_CacheMap_010201A0; ; owner = v5.owner ) /*0x785d46*/
  {
    head = OB_stBezierSpline_CacheMap_010201A0.head; /*0x785d52*/
    if ( !owner || owner != &OB_stBezierSpline_CacheMap_010201A0 ) /*0x785d60*/
      _invalid_parameter_noinfo((int)head, (int)left, (int)owner); /*0x785d62*/
    if ( left == head ) /*0x785d69*/
      break; /*0x785d69*/
    if ( !owner ) /*0x785d6d*/
      _invalid_parameter_noinfo((int)head, (int)left, 0); /*0x785d6f*/
    if ( left == owner->head ) /*0x785d77*/
      _invalid_parameter_noinfo((int)head, (int)left, (int)owner); /*0x785d79*/
    value = (unsigned int)left->value; /*0x785d7e*/
    if ( value ) /*0x785d83*/
    {
      OB_StBezierSpline_Dtor_010201A0(left->value); /*0x785d87*/
      FormHeapFree(value); /*0x785d8d*/
    }
    if ( left == owner->head ) /*0x785d98*/
      _invalid_parameter_noinfo(value, (int)left, (int)owner); /*0x785d9a*/
    left->value = 0; /*0x785da3*/
    OB_stBezierSplineCacheIterator_Increment_010201A0(&v5); /*0x785daa*/
    left = v5.node; /*0x785daf*/
  }
  OB_stBezierSplineCacheMap_DestroySubtree_010201A0(OB_stBezierSpline_CacheMap_010201A0.head->parent); /*0x785dc8*/
  OB_stBezierSpline_CacheMap_010201A0.head->parent = OB_stBezierSpline_CacheMap_010201A0.head; /*0x785dd2*/
  v4 = OB_stBezierSpline_CacheMap_010201A0.head; /*0x785dd5*/
  OB_stBezierSpline_CacheMap_010201A0.size = 0; /*0x785dda*/
  v4->left = v4; /*0x785de5*/
  OB_stBezierSpline_CacheMap_010201A0.head->right = OB_stBezierSpline_CacheMap_010201A0.head; /*0x785ded*/
}
