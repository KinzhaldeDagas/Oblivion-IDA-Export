// Erases one spline-cache map node. Validates the iterator, computes its successor, unlinks/transplants the node, performs red-black deletion fixup with the two rotations, destroys any heap-backed key storage, frees the 0x30-byte node, and decrements map size.
OB_stBezierSplineCacheIterator_010201A0 *__thiscall OB_stBezierSplineCacheMap_EraseNode_010201A0(
        OB_stBezierSplineCacheMap_010201A0 *this,
        OB_stBezierSplineCacheIterator_010201A0 *result,
        OB_stBezierSplineCacheMap_010201A0 *iteratorOwner,
        OB_stBezierSplineCacheNode_010201A0 *iteratorNode)
{
  OB_stBezierSplineCacheNode_010201A0 *v5; // ebp
  OB_stBezierSplineCacheNode_010201A0 *right; // edi
  OB_stBezierSplineCacheNode_010201A0 *v7; // ecx
  OB_stBezierSplineCacheNode_010201A0 *parent; // esi
  OB_stBezierSplineCacheNode_010201A0 *head; // eax
  OB_stBezierSplineCacheNode_010201A0 *v10; // ebx
  OB_stBezierSplineCacheNode_010201A0 *v11; // eax
  OB_stBezierSplineCacheNode_010201A0 *v12; // ebx
  OB_stBezierSplineCacheNode_010201A0 *v13; // eax
  OB_stBezierSplineCacheNode_010201A0 *v14; // eax
  unsigned __int8 color; // al
  OB_stBezierSplineCacheMap_010201A0 *v16; // ecx
  OB_stBezierSplineCacheNode_010201A0 *left; // eax
  bool v18; // zf
  unsigned int size; // eax
  OB_stBezierSplineCacheNode_010201A0 *v21; // ecx
  OB_stString28_010201A0 v23; // [esp+18h] [ebp-50h] BYREF
  _DWORD v24[13]; // [esp+34h] [ebp-34h] BYREF

  if ( iteratorNode->isNil ) /*0x784c61*/
  {
    v23.capacity = 0xF; /*0x784c74*/
    v23.size = 0; /*0x784c7c*/
    v23.storage.inlineData[0] = 0; /*0x784c80*/
    OB_stString28_AssignBytes_010201A0(&v23, "invalid map/set<T> iterator", 0x1Bu); /*0x784c85*/
    v24[0xC] = 0; /*0x784c93*/
    sub_4146E0((std::exception *)v24, &v23); /*0x784c97*/
    v24[0] = &std::out_of_range::`vftable'; /*0x784ca6*/
    ThrowException__((DWORD)v24, &_TI3_AVout_of_range_std__); /*0x784cae*/
  }
  v5 = iteratorNode; /*0x784cb7*/
  OB_stBezierSplineCacheIterator_Increment_010201A0((OB_stBezierSplineCacheIterator_010201A0 *)&iteratorOwner); /*0x784cb9*/
  if ( v5->left->isNil ) /*0x784cc1*/
  {
    right = v5->right; /*0x784cc7*/
LABEL_8:
    parent = v5->parent; /*0x784ce4*/
    if ( !right->isNil ) /*0x784ce4*/
      right->parent = parent; /*0x784ced*/
    head = this->head; /*0x784cf0*/
    if ( head->parent == v5 ) /*0x784cf6*/
    {
      head->parent = right; /*0x784cf8*/
    }
    else if ( parent->left == v5 ) /*0x784cff*/
    {
      parent->left = right; /*0x784d01*/
    }
    else
    {
      parent->right = right; /*0x784d05*/
    }
    v10 = this->head; /*0x784d08*/
    if ( v10->left == v5 ) /*0x784d0d*/
    {
      if ( right->isNil ) /*0x784d0f*/
        v11 = parent; /*0x784d15*/
      else
        v11 = OB_stBezierSplineCacheNode_Leftmost_010201A0(right); /*0x784d1a*/
      v10->left = v11; /*0x784d22*/
    }
    v12 = this->head; /*0x784d28*/
    if ( v12->right == v5 ) /*0x784d2e*/
    {
      if ( right->isNil ) /*0x784d30*/
        v12->right = parent; /*0x784d38*/
      else
        v12->right = OB_stBezierSplineCacheNode_Rightmost_010201A0(right); /*0x784d46*/
    }
    goto LABEL_35; /*0x784d3b*/
  }
  if ( v5->right->isNil ) /*0x784ccf*/
  {
    right = v5->left; /*0x784cd5*/
    goto LABEL_8; /*0x784cd7*/
  }
  v7 = iteratorNode; /*0x784cd9*/
  right = iteratorNode->right; /*0x784cdf*/
  if ( iteratorNode == v5 ) /*0x784ce2*/
    goto LABEL_8; /*0x784ce2*/
  v5->left->parent = iteratorNode; /*0x784d4b*/
  v7->left = v5->left; /*0x784d51*/
  if ( v7 == v5->right ) /*0x784d56*/
  {
    parent = v7; /*0x784d58*/
  }
  else
  {
    parent = v7->parent; /*0x784d60*/
    if ( !right->isNil ) /*0x784d5c*/
      right->parent = parent; /*0x784d65*/
    parent->left = right; /*0x784d68*/
    v7->right = v5->right; /*0x784d6d*/
    v5->right->parent = v7; /*0x784d73*/
  }
  v13 = this->head; /*0x784d76*/
  if ( v13->parent == v5 ) /*0x784d7c*/
  {
    v13->parent = v7; /*0x784d7e*/
  }
  else
  {
    v14 = v5->parent; /*0x784d83*/
    if ( v14->left == v5 ) /*0x784d88*/
      v14->left = v7; /*0x784d8a*/
    else
      v14->right = v7; /*0x784d8e*/
  }
  v7->parent = v5->parent; /*0x784d94*/
  color = v7->color; /*0x784d9a*/
  v7->color = v5->color; /*0x784d9d*/
  v5->color = color; /*0x784da0*/
LABEL_35:
  if ( v5->color == 1 ) /*0x784da8*/
  {
    v16 = this; /*0x784dae*/
    if ( right != this->head->parent ) /*0x784db8*/
    {
      do /*0x784dc0*/
      {
        if ( right->color != 1 ) /*0x784dc3*/
          break; /*0x784dc3*/
        left = parent->left; /*0x784dc9*/
        if ( right == parent->left ) /*0x784dcd*/
        {
          left = parent->right; /*0x784dcf*/
          if ( !left->color ) /*0x784dd2*/
          {
            left->color = 1; /*0x784dd8*/
            parent->color = 0; /*0x784ddc*/
            OB_stBezierSplineCacheMap_RotateLeft_010201A0(v16, parent); /*0x784de0*/
            left = parent->right; /*0x784de5*/
            v16 = this; /*0x784de8*/
          }
          if ( left->isNil ) /*0x784dec*/
            goto LABEL_53; /*0x784df0*/
          if ( left->left->color != 1 || left->right->color != 1 ) /*0x784dff*/
          {
            if ( left->right->color == 1 ) /*0x784e07*/
            {
              left->left->color = 1; /*0x784e0b*/
              left->color = 0; /*0x784e0f*/
              OB_stBezierSplineCacheMap_RotateRight_010201A0(v16, left); /*0x784e13*/
              left = parent->right; /*0x784e18*/
              v16 = this; /*0x784e1b*/
            }
            left->color = parent->color; /*0x784e22*/
            parent->color = 1; /*0x784e25*/
            left->right->color = 1; /*0x784e2c*/
            OB_stBezierSplineCacheMap_RotateLeft_010201A0(v16, parent); /*0x784e2f*/
            break; /*0x784e34*/
          }
        }
        else
        {
          if ( !left->color ) /*0x784e36*/
          {
            left->color = 1; /*0x784e3c*/
            parent->color = 0; /*0x784e40*/
            OB_stBezierSplineCacheMap_RotateRight_010201A0(v16, parent); /*0x784e44*/
            left = parent->left; /*0x784e49*/
            v16 = this; /*0x784e4b*/
          }
          if ( left->isNil ) /*0x784e4f*/
            goto LABEL_53; /*0x784e53*/
          if ( left->right->color != 1 || left->left->color != 1 ) /*0x784e62*/
          {
            if ( left->left->color == 1 ) /*0x784e80*/
            {
              left->right->color = 1; /*0x784e85*/
              left->color = 0; /*0x784e89*/
              OB_stBezierSplineCacheMap_RotateLeft_010201A0(v16, left); /*0x784e8d*/
              left = parent->left; /*0x784e92*/
              v16 = this; /*0x784e94*/
            }
            left->color = parent->color; /*0x784e9b*/
            parent->color = 1; /*0x784e9e*/
            left->left->color = 1; /*0x784ea4*/
            OB_stBezierSplineCacheMap_RotateRight_010201A0(v16, parent); /*0x784ea7*/
            break; /*0x784ea7*/
          }
        }
        left->color = 0; /*0x784e64*/
LABEL_53:
        right = parent; /*0x784e68*/
        v18 = parent == v16->head->parent; /*0x784e6d*/
        parent = parent->parent; /*0x784e70*/
      }
      while ( !v18 ); /*0x784dc0*/
    }
    right->color = 1; /*0x784eac*/
  }
  if ( v5->key.capacity >= 0x10 ) /*0x784eb3*/
    FormHeapFree((unsigned int)v5->key.storage.heapData); /*0x784eb9*/
  v5->key.capacity = 0xF; /*0x784ec1*/
  v5->key.size = 0; /*0x784ec8*/
  v5->key.storage.inlineData[0] = 0; /*0x784ed0*/
  FormHeapFree((unsigned int)v5); /*0x784ed4*/
  size = this->size; /*0x784edd*/
  if ( size ) /*0x784ee5*/
    this->size = size - 1; /*0x784eea*/
  v21 = iteratorNode; /*0x784ef5*/
  result->owner = iteratorOwner; /*0x784ef9*/
  result->node = v21; /*0x784efb*/
  return result; /*0x784efe*/
}
