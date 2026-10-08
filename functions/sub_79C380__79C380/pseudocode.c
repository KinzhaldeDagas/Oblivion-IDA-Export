// Pop-heap primitive for SFrondGuide. Moves the first heap element to the output slot, then rebuilds the shortened heap by calling the typed adjust-heap path with the saved guide value.
// local variable allocation has failed, the output may be wrong!
void __cdecl OB_SFrondGuide_PopHeap_010201A0(
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *last,
        OB_SFrondGuide_010201A0 *result,
        OB_SFrondGuide_010201A0 value,
        unsigned __int8 sorterState)
{
  int v5; // eax
  double surfaceArea; // st7
  OB_SFrondGuide_010201A0 v7; // [esp-34h] [ebp-4Ch] BYREF
  int v8; // [esp-4h] [ebp-1Ch]
  int v9; // [esp+14h] [ebp-4h]

  v9 = 0; /*0x79c3ad*/
  OB_stVector_SFrondVertex_CopyAssign_010201A0((OB_stVector16_010201A0 *)result, (const OB_stVector16_010201A0 *)first); /*0x79c3b5*/
  result->guideLength = first->guideLength; /*0x79c3bd*/
  result->radius = first->radius; /*0x79c3c3*/
  result->frondMapIndex = first->frondMapIndex; /*0x79c3c9*/
  v5 = sorterState; /*0x79c3cf*/
  result->offsetAngle = first->offsetAngle; /*0x79c3d3*/
  surfaceArea = first->surfaceArea; /*0x79c3d6*/
  v8 = v5; /*0x79c3d9*/
  result->surfaceArea = surfaceArea; /*0x79c3da*/
  result->fuzzySurfaceArea = first->fuzzySurfaceArea; /*0x79c3e7*/
  result->sharedVertexStartIndex = first->sharedVertexStartIndex; /*0x79c3ed*/
  result->verticesPerGuideVertex = first->verticesPerGuideVertex; /*0x79c3f3*/
  OB_stVector_SFrondVertex_CopyCtor_010201A0((OB_stVector16_010201A0 *)&v7, (const OB_stVector16_010201A0 *)&value); /*0x79c3ff*/
  v7.guideLength = value.guideLength; /*0x79c40f*/
  v7.radius = value.radius; /*0x79c421*/
  v7.sharedVertexStartIndex = value.sharedVertexStartIndex; /*0x79c428*/
  v7.verticesPerGuideVertex = value.verticesPerGuideVertex; /*0x79c42b*/
  v7.offsetAngle = value.offsetAngle; /*0x79c42e*/
  v7.frondMapIndex = value.frondMapIndex; /*0x79c439*/
  v7.surfaceArea = value.surfaceArea; /*0x79c43c*/
  v7.fuzzySurfaceArea = value.fuzzySurfaceArea; /*0x79c44d*/
  OB_SFrondGuide_AdjustHeap_010201A0(first, 0, last - first, v7, v8); /*0x79c460*/
  if ( *(_DWORD *)&value.vertexVector[4] ) /*0x79c46e*/
    FormHeapFree(*(unsigned int *)&value.vertexVector[4]); /*0x79c471*/
}
