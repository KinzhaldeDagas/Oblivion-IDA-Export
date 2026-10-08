// Links a newly allocated spline-cache node beneath the selected parent, increments map size, performs standard red-black insertion recoloring/rotations, forces the root black, and returns {map,node}.
OB_stBezierSplineCacheIterator_010201A0 *__thiscall OB_stBezierSplineCacheMap_InsertNodeAndRebalance_010201A0(
        OB_stBezierSplineCacheMap_010201A0 *this,
        OB_stBezierSplineCacheIterator_010201A0 *result,
        unsigned __int8 insertLeft,
        OB_stBezierSplineCacheNode_010201A0 *parent,
        const OB_stBezierSplineCachePair_010201A0 *value)
{
  OB_stBezierSplineCacheNode_010201A0 *Node_010201A0; // ebp
  OB_stBezierSplineCacheNode_010201A0 *head; // eax
  OB_stBezierSplineCacheNode_010201A0 *v8; // eax
  OB_stBezierSplineCacheNode_010201A0 *v9; // eax
  OB_stBezierSplineCacheNode_010201A0 **p_parent; // eax
  OB_stBezierSplineCacheNode_010201A0 *i; // esi
  OB_stBezierSplineCacheNode_010201A0 *v12; // ecx
  OB_stBezierSplineCacheNode_010201A0 *v13; // edx
  OB_stBezierSplineCacheNode_010201A0 *right; // edx
  OB_stBezierSplineCacheNode_010201A0 *left; // edx
  OB_stBezierSplineCacheNode_010201A0 *v16; // eax
  OB_stBezierSplineCacheNode_010201A0 *v17; // ecx
  OB_stBezierSplineCacheNode_010201A0 *v18; // edx
  OB_stBezierSplineCacheNode_010201A0 *v19; // edx
  rsize_t v21; // [esp-4h] [ebp-68h]
  int v22; // [esp+14h] [ebp-50h] BYREF
  char v23; // [esp+18h] [ebp-4Ch]
  int v24; // [esp+28h] [ebp-3Ch]
  int v25; // [esp+2Ch] [ebp-38h]
  _DWORD v26[13]; // [esp+30h] [ebp-34h] BYREF

  if ( this->size >= 0x7FFFFFE ) /*0x785a10*/
  {
    LODWORD(v21) = 0x13; /*0x785a12*/
    v25 = 0xF; /*0x785a1f*/
    v24 = 0; /*0x785a27*/
    v23 = 0; /*0x785a2b*/
    OB_stString28_AssignBytes_010201A0(&v22, (int)this, "map/set<T> too long", v21); /*0x785a30*/
    v26[0xC] = 0; /*0x785a3e*/
    sub_4146E0((std::exception *)v26, &v22); /*0x785a42*/
    v26[0] = &std::length_error::`vftable'; /*0x785a51*/
    ThrowException__((DWORD)v26, &_TI3_AVlength_error_std__); /*0x785a59*/
  }
  Node_010201A0 = OB_stBezierSplineCacheMap_AllocateNode_010201A0(this->head, parent, this->head, value, 0); /*0x785a74*/
  head = this->head; /*0x785a76*/
  ++this->size; /*0x785a7e*/
  if ( parent == head ) /*0x785a83*/
  {
    head->parent = Node_010201A0; /*0x785a85*/
    this->head->left = Node_010201A0; /*0x785a8b*/
    this->head->right = Node_010201A0; /*0x785a90*/
  }
  else if ( insertLeft ) /*0x785a9a*/
  {
    parent->left = Node_010201A0; /*0x785a9c*/
    v8 = this->head; /*0x785a9e*/
    if ( parent == v8->left ) /*0x785aa3*/
      v8->left = Node_010201A0; /*0x785aa5*/
  }
  else
  {
    parent->right = Node_010201A0; /*0x785aa9*/
    v9 = this->head; /*0x785aac*/
    if ( parent == v9->right ) /*0x785ab2*/
      v9->right = Node_010201A0; /*0x785ab4*/
  }
  p_parent = &Node_010201A0->parent; /*0x785abe*/
  for ( i = Node_010201A0; !i->parent->color; p_parent = &i->parent ) /*0x785aba*/
  {
    v12 = *p_parent; /*0x785ad0*/
    v13 = (*p_parent)->parent; /*0x785ad2*/
    if ( *p_parent == v13->left ) /*0x785ad7*/
    {
      right = v13->right; /*0x785ad9*/
      if ( right->color ) /*0x785adc*/
      {
        if ( i == v12->right ) /*0x785afe*/
        {
          i = *p_parent; /*0x785b00*/
          OB_stBezierSplineCacheMap_RotateLeft_010201A0(this, *p_parent); /*0x785b05*/
        }
        i->parent->color = 1; /*0x785b0d*/
        i->parent->parent->color = 0; /*0x785b16*/
        OB_stBezierSplineCacheMap_RotateRight_010201A0(this, i->parent->parent); /*0x785b23*/
      }
      else
      {
        v12->color = 1; /*0x785ae2*/
        right->color = 1; /*0x785ae5*/
        (*p_parent)->parent->color = 0; /*0x785aed*/
        i = (*p_parent)->parent; /*0x785af3*/
      }
    }
    else
    {
      left = v13->left; /*0x785b2a*/
      if ( left->color ) /*0x785b2c*/
      {
        if ( i == v12->left ) /*0x785b4a*/
        {
          i = *p_parent; /*0x785b4c*/
          OB_stBezierSplineCacheMap_RotateRight_010201A0(this, *p_parent); /*0x785b51*/
        }
        i->parent->color = 1; /*0x785b59*/
        i->parent->parent->color = 0; /*0x785b62*/
        v16 = i->parent->parent; /*0x785b69*/
        v17 = v16->right; /*0x785b6c*/
        v16->right = v17->left; /*0x785b71*/
        if ( !v17->left->isNil ) /*0x785b76*/
          v17->left->parent = v16; /*0x785b7c*/
        v17->parent = v16->parent; /*0x785b82*/
        v18 = this->head; /*0x785b85*/
        if ( v16 == v18->parent ) /*0x785b8b*/
        {
          v18->parent = v17; /*0x785b8d*/
        }
        else
        {
          v19 = v16->parent; /*0x785b92*/
          if ( v16 == v19->left ) /*0x785b97*/
            v19->left = v17; /*0x785b99*/
          else
            v19->right = v17; /*0x785b9d*/
        }
        v17->left = v16; /*0x785ba0*/
        v16->parent = v17; /*0x785ba2*/
      }
      else
      {
        v12->color = 1; /*0x785b32*/
        left->color = 1; /*0x785b35*/
        (*p_parent)->parent->color = 0; /*0x785b3d*/
        i = (*p_parent)->parent; /*0x785b43*/
      }
    }
  }
  this->head->parent->color = 1; /*0x785bbb*/
  result->node = Node_010201A0; /*0x785bc2*/
  result->owner = this; /*0x785bc5*/
  return result; /*0x785bc7*/
}
