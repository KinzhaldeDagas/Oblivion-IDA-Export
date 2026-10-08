// Destroys a cache-map subtree. Recurses through right children while iterating down the left spine; releases heap-backed string storage when capacity>=16, then frees each 0x30-byte node.
void __stdcall OB_stBezierSplineCacheMap_DestroySubtree_010201A0(OB_stBezierSplineCacheNode_010201A0 *root)
{
  unsigned int *v1; // esi
  OB_stBezierSplineCacheNode_010201A0 *i; // edi

  v1 = (unsigned int *)root; /*0x784ff3*/
  for ( i = root; !i->isNil; v1 = (unsigned int *)i ) /*0x784ff9*/
  {
    OB_stBezierSplineCacheMap_DestroySubtree_010201A0(i->right); /*0x785009*/
    i = i->left; /*0x785012*/
    if ( v1[9] >= 0x10 ) /*0x785014*/
      FormHeapFree(v1[4]); /*0x78501a*/
    v1[9] = 0xF; /*0x785022*/
    v1[8] = 0; /*0x785029*/
    *((_BYTE *)v1 + 0x10) = 0; /*0x78502d*/
    FormHeapFree((unsigned int)v1); /*0x785030*/
  }
}
