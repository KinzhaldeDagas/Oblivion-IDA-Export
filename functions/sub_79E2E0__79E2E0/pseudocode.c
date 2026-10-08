// Builds a heap over [first,last) SFrondGuide records by walking parent holes backward from count/2 and applying the guide adjust-heap primitive.
void __cdecl OB_SFrondGuide_MakeHeap_010201A0(
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *last,
        unsigned __int8 sorterState)
{
  int v3; // ebx
  float *p_radius; // esi
  OB_SFrondGuide_010201A0 v5; // [esp-34h] [ebp-44h] BYREF
  int v6; // [esp-4h] [ebp-14h]

  v3 = (last - first) / 2; /*0x79e305*/
  if ( v3 > 0 ) /*0x79e30a*/
  {
    p_radius = &first[v3].radius; /*0x79e312*/
    do /*0x79e375*/
    {
      v6 = sorterState; /*0x79e31a*/
      p_radius += 0xFFFFFFF4; /*0x79e31e*/
      --v3; /*0x79e32d*/
      OB_stVector_SFrondVertex_CopyCtor_010201A0( /*0x79e330*/
        (OB_stVector16_010201A0 *)&v5,
        (const OB_stVector16_010201A0 *)(p_radius + 0xFFFFFFFB));
      v5.guideLength = p_radius[0xFFFFFFFF]; /*0x79e338*/
      v5.radius = *p_radius; /*0x79e33f*/
      v5.frondMapIndex = *((_BYTE *)p_radius + 4); /*0x79e345*/
      v5.offsetAngle = p_radius[2]; /*0x79e34f*/
      v5.surfaceArea = p_radius[3]; /*0x79e356*/
      v5.fuzzySurfaceArea = p_radius[4]; /*0x79e35c*/
      v5.sharedVertexStartIndex = (int)p_radius[5]; /*0x79e362*/
      v5.verticesPerGuideVertex = (int)p_radius[6]; /*0x79e368*/
      OB_SFrondGuide_AdjustHeap_010201A0(first, v3, last - first, v5, v6); /*0x79e36b*/
    }
    while ( v3 > 0 ); /*0x79e375*/
  }
}
