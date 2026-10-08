// Oblivion-authoritative red-black-tree right rotation around pivot. Mirror of 0x784740; updates the sentinel head root and all affected parent/child links.
void __thiscall OB_stBezierSplineCacheMap_RotateRight_010201A0(
        OB_stBezierSplineCacheMap_010201A0 *this,
        OB_stBezierSplineCacheNode_010201A0 *pivot)
{
  OB_stBezierSplineCacheNode_010201A0 *left; // eax
  OB_stBezierSplineCacheNode_010201A0 *right; // esi
  OB_stBezierSplineCacheNode_010201A0 *head; // ecx
  OB_stBezierSplineCacheNode_010201A0 *parent; // ecx

  left = pivot->left; /*0x784794*/
  pivot->left = pivot->left->right; /*0x78479a*/
  right = left->right; /*0x78479c*/
  if ( !right->isNil ) /*0x78479f*/
    right->parent = pivot; /*0x7847a5*/
  left->parent = pivot->parent; /*0x7847ab*/
  head = this->head; /*0x7847ae*/
  if ( pivot == head->parent ) /*0x7847b5*/
  {
    head->parent = left; /*0x7847b7*/
    left->right = pivot; /*0x7847ba*/
    pivot->parent = left; /*0x7847bd*/
  }
  else
  {
    parent = pivot->parent; /*0x7847c3*/
    if ( pivot == parent->right ) /*0x7847c9*/
      parent->right = left; /*0x7847cb*/
    else
      parent->left = left; /*0x7847d7*/
    left->right = pivot; /*0x7847ce*/
    pivot->parent = left; /*0x7847d1*/
  }
}
