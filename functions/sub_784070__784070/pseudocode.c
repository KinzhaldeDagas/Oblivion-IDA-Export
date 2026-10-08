// Oblivion 1.2.0.416: follows cache-tree left links to the leftmost non-nil node.
OB_stBezierSplineCacheNode_010201A0 *__cdecl OB_stBezierSplineCacheNode_Leftmost_010201A0(
        OB_stBezierSplineCacheNode_010201A0 *node)
{
  OB_stBezierSplineCacheNode_010201A0 *result; // eax
  OB_stBezierSplineCacheNode_010201A0 *i; // ecx

  result = node; /*0x784070*/
  for ( i = node->left; !i->isNil; i = i->left ) /*0x784076*/
    result = i; /*0x784080*/
  return result; /*0x78408a*/
}
