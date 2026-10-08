// Allocates the 0x30-byte cache-map head/sentinel node from FormHeap. Initializes links to null, color=black (1), and isNil=0; global init converts it into the self-linked nil sentinel.
OB_stBezierSplineCacheNode_010201A0 *__cdecl OB_stBezierSplineCacheMap_AllocateHead_010201A0()
{
  OB_stBezierSplineCacheNode_010201A0 *result; // eax

  result = (OB_stBezierSplineCacheNode_010201A0 *)FormHeapAlloc(0x30u); /*0x784842*/
  if ( result ) /*0x78484c*/
    result->left = 0; /*0x78484e*/
  if ( result != (OB_stBezierSplineCacheNode_010201A0 *)0xFFFFFFFC ) /*0x784859*/
    result->parent = 0; /*0x78485b*/
  if ( result != (OB_stBezierSplineCacheNode_010201A0 *)0xFFFFFFF8 ) /*0x784866*/
    result->right = 0; /*0x784868*/
  result->color = 1; /*0x78486e*/
  result->isNil = 0; /*0x784872*/
  return result; /*0x784876*/
}
