// Placement copy-construction of one Oblivion compact SFrondGuide. Deep-copy-constructs the embedded SFrondVertex vector and copies all scalar fields; no stock RT 4.1 stack-vertex/pointer relinking exists in this layout.
OB_SFrondGuide_010201A0 *__cdecl OB_SFrondGuide_PlacementCopyConstruct_010201A0(
        OB_SFrondGuide_010201A0 *destination,
        const OB_SFrondGuide_010201A0 *source)
{
  OB_SFrondGuide_010201A0 *result; // eax

  if ( destination ) /*0x79b809*/
  {
    result = (OB_SFrondGuide_010201A0 *)OB_stVector_SFrondVertex_CopyCtor_010201A0( /*0x79b812*/
                                          &destination->vertexVector,
                                          &source->vertexVector);
    destination->guideLength = source->guideLength; /*0x79b81a*/
    destination->radius = source->radius; /*0x79b820*/
    LOBYTE(result) = source->frondMapIndex; /*0x79b823*/
    destination->frondMapIndex = (unsigned __int8)result; /*0x79b826*/
    destination->offsetAngle = source->offsetAngle; /*0x79b82c*/
    destination->surfaceArea = source->surfaceArea; /*0x79b832*/
    destination->fuzzySurfaceArea = source->fuzzySurfaceArea; /*0x79b838*/
    destination->sharedVertexStartIndex = source->sharedVertexStartIndex; /*0x79b83e*/
    destination->verticesPerGuideVertex = source->verticesPerGuideVertex; /*0x79b844*/
  }
  return result; /*0x79b847*/
}
