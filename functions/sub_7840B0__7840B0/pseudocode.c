// Oblivion 1.2.0.416: checked spline-cache iterator pre-decrement using parent/left-subtree traversal and nil-node validation.
OB_stBezierSplineCacheIterator_010201A0 *__thiscall OB_stBezierSplineCacheIterator_Decrement_010201A0(
        OB_stBezierSplineCacheIterator_010201A0 *this)
{
  int v1; // ebx
  int v2; // edi
  OB_stBezierSplineCacheNode_010201A0 *node; // eax
  OB_stBezierSplineCacheIterator_010201A0 *result; // eax
  OB_stBezierSplineCacheNode_010201A0 *left; // ecx

  if ( !this->owner ) /*0x7840b3*/
    _invalid_parameter_noinfo(v1, v2, (int)this); /*0x7840b8*/
  node = this->node; /*0x7840bd*/
  if ( node->isNil ) /*0x7840c0*/
  {
    result = (OB_stBezierSplineCacheIterator_010201A0 *)node->right; /*0x7840c6*/
    this->node = (OB_stBezierSplineCacheNode_010201A0 *)result; /*0x7840c9*/
    if ( !BYTE1(result[5].node) ) /*0x7840d0*/
      return result; /*0x7840d0*/
    return (OB_stBezierSplineCacheIterator_010201A0 *)_invalid_parameter_noinfo(v1, v2, (int)this); /*0x7840d0*/
  }
  left = node->left; /*0x7840d8*/
  if ( node->left->isNil ) /*0x7840da*/
  {
    for ( result = (OB_stBezierSplineCacheIterator_010201A0 *)node->parent; /*0x784103*/
          !BYTE1(result[5].node);
          result = (OB_stBezierSplineCacheIterator_010201A0 *)result->node )
    {
      if ( this->node != (OB_stBezierSplineCacheNode_010201A0 *)result->owner ) /*0x784115*/
        break; /*0x784115*/
      this->node = (OB_stBezierSplineCacheNode_010201A0 *)result; /*0x784117*/
    }
    if ( this->node->isNil ) /*0x784128*/
      return (OB_stBezierSplineCacheIterator_010201A0 *)_invalid_parameter_noinfo(v1, v2, (int)this); /*0x7840d3*/
    this->node = (OB_stBezierSplineCacheNode_010201A0 *)result; /*0x784134*/
  }
  else
  {
    for ( result = (OB_stBezierSplineCacheIterator_010201A0 *)left->right; /*0x7840e3*/
          !BYTE1(result[5].node);
          result = (OB_stBezierSplineCacheIterator_010201A0 *)result[1].owner )
    {
      left = (OB_stBezierSplineCacheNode_010201A0 *)result; /*0x7840f0*/
    }
    this->node = left; /*0x7840fb*/
  }
  return result; /*0x7840d2*/
}
