// Erases a [first,last) iterator range from the spline-cache map. Uses whole-tree destruction when the range is begin-to-end; otherwise repeatedly advances and erases individual nodes. Returns the resulting iterator.
OB_stBezierSplineCacheIterator_010201A0 *__thiscall OB_stBezierSplineCacheMap_EraseRange_010201A0(
        OB_stBezierSplineCacheMap_010201A0 *this,
        OB_stBezierSplineCacheIterator_010201A0 *result,
        OB_stBezierSplineCacheMap_010201A0 *firstOwner,
        OB_stBezierSplineCacheNode_010201A0 *firstNode,
        OB_stBezierSplineCacheMap_010201A0 *lastOwner,
        OB_stBezierSplineCacheNode_010201A0 *lastNode)
{
  int v6; // ebx
  OB_stBezierSplineCacheMap_010201A0 *v7; // edi
  OB_stBezierSplineCacheNode_010201A0 *left; // ebp
  OB_stBezierSplineCacheNode_010201A0 *v10; // ebx
  OB_stBezierSplineCacheNode_010201A0 *head; // ebp
  OB_stBezierSplineCacheNode_010201A0 *v12; // eax
  OB_stBezierSplineCacheNode_010201A0 *v13; // ecx
  OB_stBezierSplineCacheIterator_010201A0 v15; // [esp+10h] [ebp-8h] BYREF

  v7 = firstOwner; /*0x785917*/
  left = this->head->left; /*0x785922*/
  if ( !firstOwner || firstOwner != this ) /*0x785928*/
    _invalid_parameter_noinfo(v6, (int)firstOwner, (int)this); /*0x78592a*/
  v10 = firstNode; /*0x78592f*/
  if ( firstNode != left ) /*0x785935*/
    goto LABEL_13; /*0x785935*/
  head = this->head; /*0x78593d*/
  if ( !lastOwner || lastOwner != this ) /*0x785944*/
    _invalid_parameter_noinfo((int)firstNode, (int)v7, (int)this); /*0x785946*/
  if ( lastNode == head ) /*0x78594f*/
  {
    OB_stBezierSplineCacheMap_DestroySubtree_010201A0(this->head->parent); /*0x78595a*/
    this->head->parent = this->head; /*0x785962*/
    v12 = this->head; /*0x785965*/
    this->size = 0; /*0x785968*/
    v12->left = v12; /*0x78596f*/
    this->head->right = this->head; /*0x785974*/
    v13 = this->head->left; /*0x78597a*/
    result->owner = this; /*0x785981*/
    result->node = v13; /*0x785985*/
    return result; /*0x78597c*/
  }
  else
  {
LABEL_13:
    while ( 1 ) /*0x785990*/
    {
      if ( !v7 || v7 != lastOwner ) /*0x785998*/
        _invalid_parameter_noinfo((int)v10, (int)v7, (int)this); /*0x78599a*/
      if ( v10 == lastNode ) /*0x7859a3*/
        break; /*0x7859a3*/
      OB_stBezierSplineCacheIterator_Increment_010201A0((OB_stBezierSplineCacheIterator_010201A0 *)&firstOwner); /*0x7859a9*/
      OB_stBezierSplineCacheMap_EraseNode_010201A0(this, &v15, v7, v10); /*0x7859b7*/
      v10 = firstNode; /*0x7859bc*/
      v7 = firstOwner; /*0x7859c0*/
    }
    result->owner = v7; /*0x7859ca*/
    result->node = v10; /*0x7859cf*/
    return result; /*0x7859c6*/
  }
}
