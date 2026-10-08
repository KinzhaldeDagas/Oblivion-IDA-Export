// Swaps two complete 0x30-byte SFrondGuide records. Uses a temporary deep copy of the embedded vertex vector, assigns both vectors safely, copies all scalar fields, then releases the temporary vector allocation.
void __cdecl OB_SFrondGuide_Swap_010201A0(OB_SFrondGuide_010201A0 *left, OB_SFrondGuide_010201A0 *right)
{
  char frondMapIndex; // bl
  int sharedVertexStartIndex; // ebp
  int verticesPerGuideVertex; // eax
  double offsetAngle; // st7
  double surfaceArea; // st7
  void *begin; // eax
  int v8; // edx
  double v9; // st7
  double v10; // st7
  OB_stVector16_010201A0 source; // [esp+14h] [ebp-3Ch] BYREF
  float guideLength; // [esp+24h] [ebp-2Ch]
  float radius; // [esp+28h] [ebp-28h]
  char v14; // [esp+2Ch] [ebp-24h]
  float v15; // [esp+30h] [ebp-20h]
  float v16; // [esp+34h] [ebp-1Ch]
  float fuzzySurfaceArea; // [esp+38h] [ebp-18h]
  int v18; // [esp+3Ch] [ebp-14h]
  int v19; // [esp+40h] [ebp-10h]
  int v20; // [esp+4Ch] [ebp-4h]

  OB_stVector_SFrondVertex_CopyCtor_010201A0(&source, (const OB_stVector16_010201A0 *)left); /*0x79b900*/
  frondMapIndex = left->frondMapIndex; /*0x79b908*/
  guideLength = left->guideLength; /*0x79b90b*/
  sharedVertexStartIndex = left->sharedVertexStartIndex; /*0x79b912*/
  verticesPerGuideVertex = left->verticesPerGuideVertex; /*0x79b915*/
  radius = left->radius; /*0x79b918*/
  offsetAngle = left->offsetAngle; /*0x79b91c*/
  v14 = frondMapIndex; /*0x79b91f*/
  v15 = offsetAngle; /*0x79b923*/
  v18 = sharedVertexStartIndex; /*0x79b927*/
  surfaceArea = left->surfaceArea; /*0x79b92b*/
  v19 = verticesPerGuideVertex; /*0x79b92e*/
  v16 = surfaceArea; /*0x79b932*/
  fuzzySurfaceArea = left->fuzzySurfaceArea; /*0x79b939*/
  v20 = 0; /*0x79b944*/
  OB_stVector_SFrondVertex_CopyAssign_010201A0((OB_stVector16_010201A0 *)left, (const OB_stVector16_010201A0 *)right); /*0x79b94c*/
  left->guideLength = right->guideLength; /*0x79b954*/
  left->radius = right->radius; /*0x79b95a*/
  left->frondMapIndex = right->frondMapIndex; /*0x79b960*/
  left->offsetAngle = right->offsetAngle; /*0x79b966*/
  left->surfaceArea = right->surfaceArea; /*0x79b971*/
  left->fuzzySurfaceArea = right->fuzzySurfaceArea; /*0x79b979*/
  left->sharedVertexStartIndex = right->sharedVertexStartIndex; /*0x79b97f*/
  left->verticesPerGuideVertex = right->verticesPerGuideVertex; /*0x79b985*/
  OB_stVector_SFrondVertex_CopyAssign_010201A0((OB_stVector16_010201A0 *)right, &source); /*0x79b988*/
  begin = source.begin; /*0x79b991*/
  right->guideLength = guideLength; /*0x79b995*/
  v8 = v19; /*0x79b99e*/
  right->radius = radius; /*0x79b9a2*/
  v9 = v15; /*0x79b9a5*/
  right->frondMapIndex = frondMapIndex; /*0x79b9a9*/
  right->offsetAngle = v9; /*0x79b9ac*/
  right->sharedVertexStartIndex = sharedVertexStartIndex; /*0x79b9af*/
  v10 = v16; /*0x79b9b2*/
  right->verticesPerGuideVertex = v8; /*0x79b9b6*/
  right->surfaceArea = v10; /*0x79b9b9*/
  right->fuzzySurfaceArea = fuzzySurfaceArea; /*0x79b9c0*/
  if ( begin ) /*0x79b9c3*/
    FormHeapFree((unsigned int)begin); /*0x79b9c6*/
}
