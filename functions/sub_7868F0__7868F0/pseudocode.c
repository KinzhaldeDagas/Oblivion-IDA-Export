// Hinted unique insertion for the spline-cache map. Validates the {owner,node} hint and adjacent key ordering; inserts directly when legal, otherwise falls back to the ordinary unique-insert search.
OB_stBezierSplineCacheIterator_010201A0 *__thiscall OB_stBezierSplineCacheMap_InsertHint_010201A0(
        OB_stBezierSplineCacheMap_010201A0 *this,
        OB_stBezierSplineCacheIterator_010201A0 *result,
        OB_stBezierSplineCacheMap_010201A0 *hintOwner,
        OB_stBezierSplineCacheNode_010201A0 *hintNode,
        const OB_stBezierSplineCachePair_010201A0 *value)
{
  OB_stBezierSplineCacheNode_010201A0 *left; // edi
  OB_stBezierSplineCacheMap_010201A0 *v8; // ebp
  OB_stBezierSplineCacheNode_010201A0 *v9; // ebx
  OB_stBezierSplineCachePair_010201A0 *v10; // edi
  OB_stBezierSplineCacheNode_010201A0 *head; // edi
  bool v12; // zf
  OB_stBezierSplineCacheNode_010201A0 *v13; // eax
  bool v14; // al
  OB_stBezierSplineCacheNode_010201A0 *v15; // ebp
  OB_stBezierSplineCacheInsertResult_010201A0 v16; // [esp+8h] [ebp-Ch] BYREF

  if ( !this->size ) /*0x7868f6*/
  {
    OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(this, result, 1u, this->head, value); /*0x78690f*/
    return result; /*0x78691b*/
  }
  left = this->head->left; /*0x786921*/
  v8 = hintOwner; /*0x786924*/
  if ( !hintOwner || hintOwner != this ) /*0x78692e*/
    _invalid_parameter_noinfo(); /*0x786930*/
  v9 = hintNode; /*0x786936*/
  if ( hintNode == left ) /*0x78693c*/
  {
    v10 = (OB_stBezierSplineCachePair_010201A0 *)value; /*0x78693e*/
    if ( sub_6F7620(value, &hintNode->key.allocatorState) ) /*0x786949*/
    {
      OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(this, result, 1u, v9, v10); /*0x786961*/
      return result; /*0x78696f*/
    }
    goto LABEL_28; /*0x786950*/
  }
  head = this->head; /*0x786974*/
  if ( !v8 || v8 != this ) /*0x78697b*/
    _invalid_parameter_noinfo(); /*0x78697d*/
  v12 = v9 == head; /*0x786982*/
  v10 = (OB_stBezierSplineCachePair_010201A0 *)value; /*0x786984*/
  if ( v12 ) /*0x786988*/
  {
    if ( sub_6F7620(&this->head->right->key.allocatorState, value) ) /*0x786997*/
    {
      OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(this, result, 0, this->head->right, v10); /*0x7869b5*/
      return result; /*0x7869c3*/
    }
    goto LABEL_28; /*0x78699e*/
  }
  if ( sub_6F7620(value, &v9->key.allocatorState) /*0x7869f2*/
    && (hintOwner = v8,
        hintNode = v9,
        OB_stBezierSplineCacheIterator_Decrement_010201A0((OB_stBezierSplineCacheIterator_010201A0 *)&hintOwner),
        sub_6F7620(&hintNode->key.allocatorState, v10)) )
  {
    if ( hintNode->right->isNil ) /*0x786a02*/
      OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(this, result, 0, hintNode, v10); /*0x786a13*/
    else
      OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(this, result, 1u, v9, v10); /*0x786a28*/
    return result; /*0x786a1a*/
  }
  else
  {
    if ( !sub_6F7620(&v9->key.allocatorState, v10) ) /*0x786a40*/
      goto LABEL_28; /*0x786a40*/
    v13 = this->head; /*0x786a49*/
    hintOwner = v8; /*0x786a50*/
    hintNode = v9; /*0x786a54*/
    v16.position.node = v13; /*0x786a58*/
    v16.position.owner = this; /*0x786a5c*/
    OB_stBezierSplineCacheIterator_Increment_010201A0((OB_stBezierSplineCacheIterator_010201A0 *)&hintOwner); /*0x786a60*/
    v14 = OB_stBezierSplineCacheIterator_Equals_010201A0( /*0x786a6e*/
            (const OB_stBezierSplineCacheIterator_010201A0 *)&hintOwner,
            &v16.position);
    v15 = hintNode; /*0x786a75*/
    if ( !v14 && !sub_6F7620(v10, &hintNode->key.allocatorState) ) /*0x786a82*/
    {
LABEL_28:
      *result = OB_stBezierSplineCacheMap_InsertUnique_010201A0(this, &v16, v10)->position; /*0x786ac5*/
      return result; /*0x786ae3*/
    }
    if ( v9->right->isNil ) /*0x786a8e*/
      OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(this, result, 0, v9, v10); /*0x786a9f*/
    else
      OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(this, result, 1u, v15, v10); /*0x786ab4*/
    return result; /*0x786aa6*/
  }
}
