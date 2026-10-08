// Fills an initialized compact SFrondGuide range from one value using deep vector assignment plus scalar-field copies.
void __cdecl OB_SFrondGuide_FillRange_010201A0(
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *last,
        const OB_SFrondGuide_010201A0 *value)
{
  OB_SFrondGuide_010201A0 *i; // esi

  for ( i = first; i != last; i[0xFFFFFFFF].verticesPerGuideVertex = value->verticesPerGuideVertex ) /*0x79beec*/
  {
    OB_stVector_SFrondVertex_CopyAssign_010201A0(&i->vertexVector, &value->vertexVector); /*0x79bef6*/
    i->guideLength = value->guideLength; /*0x79befe*/
    ++i; /*0x79bf01*/
    i[0xFFFFFFFF].radius = value->radius; /*0x79bf09*/
    i[0xFFFFFFFF].frondMapIndex = value->frondMapIndex; /*0x79bf0f*/
    i[0xFFFFFFFF].offsetAngle = value->offsetAngle; /*0x79bf15*/
    i[0xFFFFFFFF].surfaceArea = value->surfaceArea; /*0x79bf1b*/
    i[0xFFFFFFFF].fuzzySurfaceArea = value->fuzzySurfaceArea; /*0x79bf21*/
    i[0xFFFFFFFF].sharedVertexStartIndex = value->sharedVertexStartIndex; /*0x79bf27*/
  }
}
