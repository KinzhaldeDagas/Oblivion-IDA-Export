int __cdecl RenderPassNode_CompareGeometryDataAddressAscending(
        RenderPass_DecodedLayout **left,
        RenderPass_DecodedLayout **right)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v2 = *((_DWORD *)(*right)->geometry_00 + 0x2D); /*0x7aa3a0*/
  v3 = *((_DWORD *)(*left)->geometry_00 + 0x2D); /*0x7aa3a6*/
  if ( v3 == v2 )
    return 0; /*0x7aa3b0*/
  else
    return v3 < v2 ? 0xFFFFFFFF : 1;
}
