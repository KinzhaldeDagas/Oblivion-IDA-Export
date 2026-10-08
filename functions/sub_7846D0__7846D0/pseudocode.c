// Oblivion-authoritative cache-map iterator preincrement. Descends to the leftmost node of a non-nil right subtree; otherwise climbs parents until leaving a right-child chain. Mutates the {owner,node} iterator in place.
OB_stBezierSplineCacheIterator_010201A0 *__thiscall OB_stBezierSplineCacheIterator_Increment_010201A0(
        OB_stBezierSplineCacheIterator_010201A0 *this)
{
  int v1; // ebx
  int v2; // edi
  OB_stBezierSplineCacheNode_010201A0 *node; // eax
  OB_stBezierSplineCacheIterator_010201A0 *result; // eax
  OB_stBezierSplineCacheNode_010201A0 *right; // ecx

  if ( !this->owner ) /*0x7846d3*/
    _invalid_parameter_noinfo(v1, v2, (int)this); /*0x7846d8*/
  node = this->node; /*0x7846dd*/
  if ( node->isNil ) /*0x7846e0*/
    return (OB_stBezierSplineCacheIterator_010201A0 *)_invalid_parameter_noinfo(v1, v2, (int)this); /*0x7846e7*/
  right = node->right; /*0x7846ec*/
  if ( right->isNil ) /*0x7846ef*/
  {
    for ( result = (OB_stBezierSplineCacheIterator_010201A0 *)node->parent; /*0x784712*/
          !BYTE1(result[5].node);
          result = (OB_stBezierSplineCacheIterator_010201A0 *)result->node )
    {
      if ( this->node != (OB_stBezierSplineCacheNode_010201A0 *)result[1].owner ) /*0x78471e*/
        break; /*0x78471e*/
      this->node = (OB_stBezierSplineCacheNode_010201A0 *)result; /*0x784720*/
    }
    this->node = (OB_stBezierSplineCacheNode_010201A0 *)result; /*0x78472e*/
  }
  else
  {
    result = (OB_stBezierSplineCacheIterator_010201A0 *)right->left; /*0x7846f5*/
    if ( !right->left->isNil ) /*0x7846f7*/
    {
      do /*0x784708*/
      {
        right = (OB_stBezierSplineCacheNode_010201A0 *)result; /*0x784700*/
        result = (OB_stBezierSplineCacheIterator_010201A0 *)result->owner; /*0x784702*/
      }
      while ( !BYTE1(result[5].node) ); /*0x784708*/
    }
    this->node = right; /*0x78470a*/
  }
  return result; /*0x7846e6*/
}
