// Rebuilds branch LOD strip indices from compact CBranch vertex count, cross-section segment count, and start vertex offset.
OB_CIndexedGeometry_010201A0 *__thiscall OB_CBranch_ComputeLod_010201A0(
        OB_CBranch_010201A0 *this,
        unsigned __int16 lodIndex,
        OB_CIndexedGeometry_010201A0 *geometry)
{
  OB_CIndexedGeometry_010201A0 *result; // eax
  double v5; // st7
  int v6; // ebp
  int v7; // esi
  unsigned __int16 *v8; // ebx
  int v9; // esi
  double v10; // st7
  int v11; // ecx
  int v12; // esi
  __int16 v13; // ax
  int v14; // edx
  __int16 v15; // ax
  int v16; // esi
  unsigned __int16 crossSectionSegmentCount; // ax
  bool v18; // zf
  int v19; // [esp+4h] [ebp-Ch]
  int v20; // [esp+8h] [ebp-8h]
  float v21; // [esp+Ch] [ebp-4h]
  float lodIndexa; // [esp+14h] [ebp+4h]
  float lodIndexb; // [esp+14h] [ebp+4h]

  result = (OB_CIndexedGeometry_010201A0 *)this->crossSectionSegmentCount; /*0x78f426*/
  if ( (unsigned __int16)result >= 2u )
  {
    v19 = (unsigned __int16)result; /*0x78f440*/
    v5 = (double)(unsigned __int16)result / (double)(unsigned __int16)result; /*0x78f44e*/
    v6 = this->branchVertexCount - 1; /*0x78f45c*/
    v7 = 2 * v6 * ((unsigned __int16)result + 2); /*0x78f462*/
    v8 = (unsigned __int16 *)FormHeapAlloc(
                               (unsigned __int64)(unsigned int)v7 >> 0x1F != 0
                             ? 0xFFFFFFFF
                             : 4 * v6 * ((unsigned __int16)result + 2));
    OB_CIndexedGeometry_AddStrip_010201A0(geometry, lodIndex, v8, v7); /*0x78f48c*/
    v9 = 0; /*0x78f493*/
    lodIndexa = 0.0; /*0x78f495*/
    if ( v6 > 0 ) /*0x78f49b*/
    {
      v21 = v5; /*0x78f455*/
      v10 = v21; /*0x78f4a1*/
      v20 = v6; /*0x78f4a5*/
      do /*0x78f5dd*/
      {
        v11 = Double_To_SInt32(v10); /*0x78f4be*/
        v12 = v9 + 2; /*0x78f4d1*/
        v13 = (int)lodIndexa; /*0x78f4dc*/
        v8[v12 - 2] = this->crossSectionSegmentCount + v13 + LOWORD(this->startVertexOffset) + 1; /*0x78f4f0*/
        v8[v12 - 1] = v13 + LOWORD(this->startVertexOffset); /*0x78f4fc*/
        lodIndexb = lodIndexa + v10; /*0x78f50a*/
        v14 = v19 - 1; /*0x78f510*/
        do /*0x78f56b*/
        {
          v12 += 2; /*0x78f532*/
          v15 = (int)lodIndexb; /*0x78f53d*/
          v8[v12 - 2] = this->crossSectionSegmentCount + v15 + LOWORD(this->startVertexOffset) + 1; /*0x78f551*/
          --v14; /*0x78f55d*/
          v8[v12 - 1] = v15 + LOWORD(this->startVertexOffset); /*0x78f560*/
          lodIndexb = lodIndexb + v10; /*0x78f567*/
        }
        while ( v14 ); /*0x78f56b*/
        v16 = v12 + 1; /*0x78f57b*/
        v8[v16++ - 1] = LOWORD(this->startVertexOffset) + v11 + 2 * this->crossSectionSegmentCount + 1; /*0x78f582*/
        v8[v16 - 1] = this->crossSectionSegmentCount + v11 + LOWORD(this->startVertexOffset); /*0x78f595*/
        crossSectionSegmentCount = this->crossSectionSegmentCount; /*0x78f59a*/
        v8[v16++] = LOWORD(this->startVertexOffset) + v11 + crossSectionSegmentCount + 1; /*0x78f5af*/
        v8[v16] = this->crossSectionSegmentCount + v11 + LOWORD(this->startVertexOffset) + 1; /*0x78f5cd*/
        v9 = v16 + 1; /*0x78f5d1*/
        v18 = v20-- == 1; /*0x78f5d4*/
        lodIndexa = (float)(crossSectionSegmentCount + v11 + 1); /*0x78f5d9*/
      }
      while ( !v18 ); /*0x78f5dd*/
    }
    ++geometry->currentStripCounter; /*0x78f5e9*/
    return geometry; /*0x78f5e5*/
  }
  return result; /*0x78f5f1*/
}
