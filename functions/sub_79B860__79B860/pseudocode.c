// Overlap-safe backward copy-assignment of compact SFrondGuide records. Deep-assigns each embedded SFrondVertex vector before copying scalar fields.
OB_SFrondGuide_010201A0 *__cdecl OB_SFrondGuide_CopyAssignRangeBackward_010201A0(
        const OB_SFrondGuide_010201A0 *first,
        const OB_SFrondGuide_010201A0 *last,
        OB_SFrondGuide_010201A0 *destinationLast)
{
  const OB_SFrondGuide_010201A0 *v3; // esi
  OB_SFrondGuide_010201A0 *v4; // edi

  v3 = last; /*0x79b866*/
  if ( first == last ) /*0x79b86c*/
    return destinationLast; /*0x79b8bb*/
  v4 = destinationLast; /*0x79b86f*/
  do /*0x79b8b3*/
  {
    v3 += 0xFFFFFFFF; /*0x79b873*/
    v4 += 0xFFFFFFFF; /*0x79b876*/
    OB_stVector_SFrondVertex_CopyAssign_010201A0(&v4->vertexVector, &v3->vertexVector); /*0x79b87c*/
    v4->guideLength = v3->guideLength; /*0x79b886*/
    v4->radius = v3->radius; /*0x79b88c*/
    v4->frondMapIndex = v3->frondMapIndex; /*0x79b892*/
    v4->offsetAngle = v3->offsetAngle; /*0x79b898*/
    v4->surfaceArea = v3->surfaceArea; /*0x79b89e*/
    v4->fuzzySurfaceArea = v3->fuzzySurfaceArea; /*0x79b8a4*/
    v4->sharedVertexStartIndex = v3->sharedVertexStartIndex; /*0x79b8aa*/
    v4->verticesPerGuideVertex = v3->verticesPerGuideVertex; /*0x79b8b0*/
  }
  while ( v3 != first ); /*0x79b8b3*/
  return v4; /*0x79b8b8*/
}
