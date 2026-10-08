// Adjusts/sifts one hole down the SFrondGuide heap, selecting children by fuzzySurfaceArea and moving whole non-trivial guide records. Finishes by pushing the saved by-value guide upward into its final heap slot.
// local variable allocation has failed, the output may be wrong!
void __cdecl OB_SFrondGuide_AdjustHeap_010201A0(
        OB_SFrondGuide_010201A0 *base,
        int holeIndex,
        int length,
        OB_SFrondGuide_010201A0 value,
        unsigned __int8 sorterState)
{
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  bool v8; // zf
  OB_SFrondGuide_010201A0 *v9; // esi
  OB_SFrondGuide_010201A0 *v10; // edi
  OB_SFrondGuide_010201A0 *v11; // ebx
  OB_SFrondGuide_010201A0 *v12; // esi
  OB_SFrondGuide_010201A0 v13; // [esp-34h] [ebp-54h] BYREF
  int v14; // [esp-4h] [ebp-24h]
  int v15; // [esp+1Ch] [ebp-4h]

  v5 = holeIndex; /*0x79c154*/
  v6 = length; /*0x79c158*/
  v7 = 2 * holeIndex + 2; /*0x79c160*/
  v8 = v7 == length; /*0x79c164*/
  v15 = 0; /*0x79c166*/
  if ( v7 < length ) /*0x79c172*/
  {
    do /*0x79c1e1*/
    {
      if ( base[v7 - 1].fuzzySurfaceArea < (double)base[v7].fuzzySurfaceArea ) /*0x79c18a*/
        --v7; /*0x79c18c*/
      v9 = &base[v7]; /*0x79c19b*/
      v10 = &base[v5]; /*0x79c19d*/
      OB_stVector_SFrondVertex_CopyAssign_010201A0((OB_stVector16_010201A0 *)v10, (const OB_stVector16_010201A0 *)v9); /*0x79c1a2*/
      v10->guideLength = v9->guideLength; /*0x79c1aa*/
      v10->radius = v9->radius; /*0x79c1b0*/
      v10->frondMapIndex = v9->frondMapIndex; /*0x79c1b6*/
      v10->offsetAngle = v9->offsetAngle; /*0x79c1bc*/
      v10->surfaceArea = v9->surfaceArea; /*0x79c1c2*/
      v10->fuzzySurfaceArea = v9->fuzzySurfaceArea; /*0x79c1c8*/
      v10->sharedVertexStartIndex = v9->sharedVertexStartIndex; /*0x79c1ce*/
      v10->verticesPerGuideVertex = v9->verticesPerGuideVertex; /*0x79c1d4*/
      v5 = v7; /*0x79c1d7*/
      v7 = 2 * v7 + 2; /*0x79c1d9*/
    }
    while ( v7 < length ); /*0x79c1e1*/
    v6 = length; /*0x79c1e3*/
    v8 = v7 == length; /*0x79c1e7*/
  }
  if ( v8 ) /*0x79c1e9*/
  {
    v11 = &base[v6 - 1]; /*0x79c1f7*/
    v12 = &base[v5]; /*0x79c1fb*/
    OB_stVector_SFrondVertex_CopyAssign_010201A0((OB_stVector16_010201A0 *)v12, (const OB_stVector16_010201A0 *)v11); /*0x79c200*/
    v12->guideLength = v11->guideLength; /*0x79c208*/
    v12->radius = v11->radius; /*0x79c20e*/
    v12->frondMapIndex = v11->frondMapIndex; /*0x79c214*/
    v12->offsetAngle = v11->offsetAngle; /*0x79c21e*/
    v5 = length - 1; /*0x79c224*/
    v12->surfaceArea = v11->surfaceArea; /*0x79c227*/
    v12->fuzzySurfaceArea = v11->fuzzySurfaceArea; /*0x79c22d*/
    v12->sharedVertexStartIndex = v11->sharedVertexStartIndex; /*0x79c233*/
    v12->verticesPerGuideVertex = v11->verticesPerGuideVertex; /*0x79c239*/
  }
  v14 = sorterState; /*0x79c240*/
  OB_stVector_SFrondVertex_CopyCtor_010201A0((OB_stVector16_010201A0 *)&v13, (const OB_stVector16_010201A0 *)&value); /*0x79c251*/
  v13.guideLength = value.guideLength; /*0x79c25e*/
  v13.radius = value.radius; /*0x79c273*/
  v13.frondMapIndex = value.frondMapIndex; /*0x79c27d*/
  v13.offsetAngle = value.offsetAngle; /*0x79c284*/
  v13.surfaceArea = value.surfaceArea; /*0x79c28f*/
  v13.fuzzySurfaceArea = value.fuzzySurfaceArea; /*0x79c29b*/
  v13.sharedVertexStartIndex = value.sharedVertexStartIndex; /*0x79c29e*/
  v13.verticesPerGuideVertex = value.verticesPerGuideVertex; /*0x79c2a1*/
  OB_SFrondGuide_PushHeap_010201A0(base, v5, holeIndex, v13); /*0x79c2a4*/
  if ( *(_DWORD *)&value.vertexVector[4] ) /*0x79c2b2*/
    FormHeapFree(*(unsigned int *)&value.vertexVector[4]); /*0x79c2b5*/
}
