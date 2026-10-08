// Comparator used to order accumulated RenderPass nodes by the 16-bit selector at RenderPass+0x04.
int __cdecl RenderPassNode_CompareSelectorAscending(RenderPass_DecodedLayout **left, RenderPass_DecodedLayout **right)
{
  unsigned __int16 selector_04; // ax
  unsigned __int16 v3; // cx

  selector_04 = (*left)->selector_04; /*0x7a9a9c*/
  v3 = (*right)->selector_04; /*0x7a9aa0*/
  if ( selector_04 == v3 )
    return 0; /*0x7a9aa9*/
  else
    return selector_04 < v3 ? 0xFFFFFFFF : 1;
}
