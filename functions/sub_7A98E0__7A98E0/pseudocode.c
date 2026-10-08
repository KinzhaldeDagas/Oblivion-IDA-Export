NiScreenPolygon *sub_7A98E0()
{
  double v0; // st6
  NiScreenPolygon *v1; // eax
  float v3[5]; // [esp+8h] [ebp-3Ch] BYREF
  float v4; // [esp+1Ch] [ebp-28h]
  float v5; // [esp+20h] [ebp-24h]
  float v6; // [esp+24h] [ebp-20h]
  float v7; // [esp+28h] [ebp-1Ch]
  float v8; // [esp+2Ch] [ebp-18h]
  float v9; // [esp+30h] [ebp-14h]
  float v10; // [esp+34h] [ebp-10h]
  int v11; // [esp+40h] [ebp-4h]

  v3[0] = kTerrainLODQuadRayDirectionZ; /*0x7a990b*/
  v3[1] = v3[0]; /*0x7a990f*/
  v0 = kFaceEarNormalMatchRadius; /*0x7a9913*/
  v3[2] = kFaceEarNormalMatchRadius; /*0x7a9919*/
  v3[3] = 1.0; /*0x7a991f*/
  v5 = 1.0; /*0x7a9923*/
  v6 = 1.0; /*0x7a9927*/
  v9 = 1.0; /*0x7a992b*/
  v3[4] = v3[0]; /*0x7a9931*/
  v8 = v3[0]; /*0x7a9935*/
  v4 = v0; /*0x7a9939*/
  v7 = v4; /*0x7a993d*/
  v10 = v4; /*0x7a9941*/
  v1 = (NiScreenPolygon *)FormHeapAlloc(0x1Cu); /*0x7a9945*/
  v11 = 0; /*0x7a9953*/
  if ( v1 ) /*0x7a995b*/
    return NiScreenPolygon::NiScreenPolygon(v1, 4u, v3, 0, 0); /*0x7a996a*/
  else
    return 0; /*0x7a997f*/
}
