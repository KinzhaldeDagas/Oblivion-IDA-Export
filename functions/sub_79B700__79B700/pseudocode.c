// Forward copy-assignment of initialized compact 0x30-byte SFrondGuide records. Deep-assigns each embedded SFrondVertex vector, then copies the eight scalar fields.
OB_SFrondGuide_010201A0 *__cdecl OB_SFrondGuide_CopyAssignRangeForward_010201A0(
        const OB_SFrondGuide_010201A0 *first,
        const OB_SFrondGuide_010201A0 *last,
        OB_SFrondGuide_010201A0 *destinationFirst)
{
  const OB_SFrondGuide_010201A0 *v3; // esi
  OB_SFrondGuide_010201A0 *v4; // edi

  v3 = first; /*0x79b706*/
  if ( first == last ) /*0x79b70c*/
    return destinationFirst; /*0x79b75b*/
  v4 = destinationFirst; /*0x79b70f*/
  do /*0x79b753*/
  {
    OB_stVector_SFrondVertex_CopyAssign_010201A0(&v4->vertexVector, &v3->vertexVector); /*0x79b716*/
    v4->guideLength = v3->guideLength; /*0x79b71e*/
    ++v3; /*0x79b721*/
    ++v4; /*0x79b727*/
    v4[0xFFFFFFFF].radius = v3[0xFFFFFFFF].radius; /*0x79b72c*/
    v4[0xFFFFFFFF].frondMapIndex = v3[0xFFFFFFFF].frondMapIndex; /*0x79b732*/
    v4[0xFFFFFFFF].offsetAngle = v3[0xFFFFFFFF].offsetAngle; /*0x79b738*/
    v4[0xFFFFFFFF].surfaceArea = v3[0xFFFFFFFF].surfaceArea; /*0x79b73e*/
    v4[0xFFFFFFFF].fuzzySurfaceArea = v3[0xFFFFFFFF].fuzzySurfaceArea; /*0x79b744*/
    v4[0xFFFFFFFF].sharedVertexStartIndex = v3[0xFFFFFFFF].sharedVertexStartIndex; /*0x79b74a*/
    v4[0xFFFFFFFF].verticesPerGuideVertex = v3[0xFFFFFFFF].verticesPerGuideVertex; /*0x79b750*/
  }
  while ( v3 != last ); /*0x79b753*/
  return v4; /*0x79b758*/
}
