// Sorts an SFrondGuide heap by repeatedly popping the last heap element and repairing the shortened heap. Used as the introsort worst-case fallback.
void __cdecl OB_SFrondGuide_SortHeapByFuzzyArea_010201A0(
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *last,
        unsigned __int8 sorterState)
{
  char *cursor; // esi
  OB_SFrondGuide_010201A0 v4; // [esp-38h] [ebp-48h] BYREF
  int v5; // [esp-8h] [ebp-18h]
  int v6; // [esp-4h] [ebp-14h]

  if ( last - first > 1 ) /*0x79ef64*/
  {
    cursor = (char *)&last[0xFFFFFFFF].radius; /*0x79ef6f*/
    do /*0x79efec*/
    {
      v6 = 0; /*0x79ef7d*/
      v5 = sorterState; /*0x79ef7f*/
      OB_stVector_SFrondVertex_CopyCtor_010201A0( /*0x79ef8f*/
        (OB_stVector16_010201A0 *)&v4,
        (const OB_stVector16_010201A0 *)(cursor + 0xFFFFFFEC));
      v4.guideLength = *((float *)cursor + 0xFFFFFFFF); /*0x79ef97*/
      v4.radius = *(float *)cursor; /*0x79ef9e*/
      v4.frondMapIndex = cursor[4]; /*0x79efa4*/
      v4.offsetAngle = *((float *)cursor + 2); /*0x79efae*/
      v4.surfaceArea = *((float *)cursor + 3); /*0x79efb5*/
      v4.fuzzySurfaceArea = *((float *)cursor + 4); /*0x79efbb*/
      v4.sharedVertexStartIndex = *((_DWORD *)cursor + 5); /*0x79efc1*/
      v4.verticesPerGuideVertex = *((_DWORD *)cursor + 6); /*0x79efc7*/
      OB_SFrondGuide_PopHeap_010201A0( /*0x79efca*/
        first,
        (OB_SFrondGuide_010201A0 *)(cursor + 0xFFFFFFEC),
        (OB_SFrondGuide_010201A0 *)(cursor + 0xFFFFFFEC),
        v4,
        v5);
      cursor += 0xFFFFFFD0; /*0x79efd2*/
    }
    while ( (int)&cursor[0x1C - (_DWORD)first] / 0x30 > 1 ); /*0x79efec*/
  }
}
