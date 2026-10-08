// Oblivion 1.2.0.416: follows cache-tree right links to the rightmost non-nil node.
OB_stBezierSplineCacheNode_010201A0 *__cdecl OB_stBezierSplineCacheNode_Rightmost_010201A0(
        OB_stBezierSplineCacheNode_010201A0 *node)
{
  OB_stBezierSplineCacheNode_010201A0 *result; // eax
  OB_stBezierSplineCacheNode_010201A0 *i; // ecx

  result = node; /*0x784090*/
  for ( i = node->right; !i->isNil; i = i->right ) /*0x784097*/
    result = i; /*0x7840a0*/
  return result; /*0x7840ab*/
}
