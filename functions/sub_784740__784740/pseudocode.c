// Oblivion-authoritative red-black-tree left rotation around pivot. Reparents pivot->right, updates the sentinel head's root link when pivot was root, and preserves child parent links.
void __thiscall OB_stBezierSplineCacheMap_RotateLeft_010201A0(
        OB_stBezierSplineCacheMap_010201A0 *this,
        OB_stBezierSplineCacheNode_010201A0 *pivot)
{
  OB_stBezierSplineCacheNode_010201A0 *right; // eax
  OB_stBezierSplineCacheNode_010201A0 *head; // ecx
  OB_stBezierSplineCacheNode_010201A0 *parent; // ecx

  right = pivot->right; /*0x784744*/
  pivot->right = right->left; /*0x78474a*/
  if ( !right->left->isNil ) /*0x78474f*/
    right->left->parent = pivot; /*0x784755*/
  right->parent = pivot->parent; /*0x78475b*/
  head = this->head; /*0x78475e*/
  if ( pivot == head->parent ) /*0x784765*/
  {
    head->parent = right; /*0x784767*/
    right->left = pivot; /*0x78476a*/
    pivot->parent = right; /*0x78476c*/
  }
  else
  {
    parent = pivot->parent; /*0x784772*/
    if ( pivot == parent->left ) /*0x784777*/
      parent->left = right; /*0x784779*/
    else
      parent->right = right; /*0x784783*/
    right->left = pivot; /*0x78477b*/
    pivot->parent = right; /*0x78477d*/
  }
}
