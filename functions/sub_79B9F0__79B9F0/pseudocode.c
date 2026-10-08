// Heap push/up operation for 0x30-byte SFrondGuide records ordered by fuzzySurfaceArea at +0x24. Moves parent guides down with deep vector assignment until the saved by-value guide reaches its heap position.
void __cdecl OB_SFrondGuide_PushHeap_010201A0(
        OB_SFrondGuide_010201A0 *base,
        int holeIndex,
        int topIndex,
        OB_SFrondGuide_010201A0 value)
{
  int v4; // ecx
  int v5; // ebx
  OB_SFrondGuide_010201A0 *v6; // edi
  OB_SFrondGuide_010201A0 *v7; // esi
  bool v8; // cc
  OB_SFrondGuide_010201A0 *v9; // esi
  int sharedVertexStartIndex; // eax
  char frondMapIndex; // dl
  int verticesPerGuideVertex; // ecx
  double offsetAngle; // st7
  unsigned int v14; // eax
  double fuzzySurfaceArea; // st7

  v4 = holeIndex; /*0x79ba14*/
  v5 = (holeIndex - 1) / 2; /*0x79ba24*/
  if ( topIndex < holeIndex ) /*0x79ba32*/
  {
    do /*0x79ba9e*/
    {
      v6 = &base[v5]; /*0x79ba3e*/
      if ( value.fuzzySurfaceArea >= (double)v6->fuzzySurfaceArea ) /*0x79ba4c*/
        break; /*0x79ba4c*/
      v7 = &base[v4]; /*0x79ba54*/
      OB_stVector_SFrondVertex_CopyAssign_010201A0( /*0x79ba59*/
        (OB_stVector16_010201A0 *)v7,
        (const OB_stVector16_010201A0 *)&base[v5]);
      v7->guideLength = v6->guideLength; /*0x79ba61*/
      v7->radius = v6->radius; /*0x79ba67*/
      v7->frondMapIndex = v6->frondMapIndex; /*0x79ba6d*/
      v7->offsetAngle = v6->offsetAngle; /*0x79ba73*/
      v4 = v5; /*0x79ba76*/
      v7->surfaceArea = v6->surfaceArea; /*0x79ba7b*/
      v7->fuzzySurfaceArea = v6->fuzzySurfaceArea; /*0x79ba81*/
      v7->sharedVertexStartIndex = v6->sharedVertexStartIndex; /*0x79ba87*/
      v7->verticesPerGuideVertex = v6->verticesPerGuideVertex; /*0x79ba8d*/
      v8 = topIndex < v5; /*0x79ba98*/
      v5 = (v5 - 1) / 2; /*0x79ba9c*/
    }
    while ( v8 ); /*0x79ba9e*/
  }
  v9 = &base[v4]; /*0x79baaa*/
  OB_stVector_SFrondVertex_CopyAssign_010201A0((OB_stVector16_010201A0 *)v9, (const OB_stVector16_010201A0 *)&value); /*0x79baaf*/
  sharedVertexStartIndex = value.sharedVertexStartIndex; /*0x79bab8*/
  v9->guideLength = value.guideLength; /*0x79babc*/
  frondMapIndex = value.frondMapIndex; /*0x79bac3*/
  verticesPerGuideVertex = value.verticesPerGuideVertex; /*0x79bac7*/
  v9->radius = value.radius; /*0x79bacb*/
  offsetAngle = value.offsetAngle; /*0x79bace*/
  v9->sharedVertexStartIndex = sharedVertexStartIndex; /*0x79bad2*/
  v14 = *(_DWORD *)&value.vertexVector[4]; /*0x79bad5*/
  v9->offsetAngle = offsetAngle; /*0x79bad9*/
  v9->surfaceArea = value.surfaceArea; /*0x79bae2*/
  v9->frondMapIndex = frondMapIndex; /*0x79bae5*/
  fuzzySurfaceArea = value.fuzzySurfaceArea; /*0x79bae8*/
  v9->verticesPerGuideVertex = verticesPerGuideVertex; /*0x79baec*/
  v9->fuzzySurfaceArea = fuzzySurfaceArea; /*0x79baef*/
  if ( v14 ) /*0x79baf2*/
    FormHeapFree(v14); /*0x79baf5*/
}
