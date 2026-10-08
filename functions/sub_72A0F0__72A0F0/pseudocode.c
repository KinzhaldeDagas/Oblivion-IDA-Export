// Local bounding sphere for contiguous NiPoint3 array: midpoint of component minima/maxima; radius=max vertex distance to midpoint; zero-count case clears sphere. Writes sphere only, not NiAVObject world bounds or renderer dirty flags. Prettier Faces invokes after morph on direct CPU vertex data; propagation of world bounds remains a separate runtime verification requirement.
void __thiscall NiSphere_ComputeFromVertices(NiSphere *self, unsigned int vertexCount, const NiPoint3 *vertices)
{
  float v5; // edx
  int v7; // esi
  unsigned int v8; // edx
  float *p_z; // ecx
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st7
  double v20; // st6
  double v21; // st5
  float *v22; // ecx
  unsigned int v23; // edx
  double v24; // st7
  double v25; // st6
  double v26; // st5
  int v27; // esi
  double v28; // rt0
  double x; // st7
  double y; // st6
  double z; // st5
  unsigned int v32; // edx
  float *v33; // ecx
  float *v34; // ecx
  unsigned int v35; // edx
  float v38; // [esp+14h] [ebp-18h]
  float v39; // [esp+14h] [ebp-18h]
  float v40; // [esp+14h] [ebp-18h]
  float v41; // [esp+14h] [ebp-18h]
  float v42; // [esp+14h] [ebp-18h]
  float v43; // [esp+14h] [ebp-18h]
  float v45; // [esp+18h] [ebp-14h]
  float v46; // [esp+18h] [ebp-14h]
  float v47; // [esp+18h] [ebp-14h]
  float v48; // [esp+18h] [ebp-14h]
  float v49; // [esp+18h] [ebp-14h]
  float v50; // [esp+18h] [ebp-14h]
  float v52; // [esp+1Ch] [ebp-10h]
  float v53; // [esp+1Ch] [ebp-10h]
  float v54; // [esp+1Ch] [ebp-10h]
  float v55; // [esp+1Ch] [ebp-10h]
  float v56; // [esp+1Ch] [ebp-10h]
  float v57; // [esp+1Ch] [ebp-10h]
  float v58; // [esp+20h] [ebp-Ch]
  float v59; // [esp+24h] [ebp-8h]
  float v60; // [esp+28h] [ebp-4h]
  float vertexCounta; // [esp+30h] [ebp+4h]
  float vertexCountb; // [esp+30h] [ebp+4h]
  float verticesa; // [esp+34h] [ebp+8h]
  float verticesb; // [esp+34h] [ebp+8h]
  float verticesc; // [esp+34h] [ebp+8h]
  float verticesd; // [esp+34h] [ebp+8h]
  float verticese; // [esp+34h] [ebp+8h]
  NiPoint3 v68; // 0:^10.12
  NiPoint3 v69; // 0:^1C.12

  if ( (int)vertexCount > 0 ) /*0x72a0fd*/
  {
    v69 = *vertices; /*0x72a134*/
    v68 = *vertices; /*0x72a138*/
    v7 = 1; /*0x72a152*/
    if ( (int)(vertexCount - 1) >= 4 ) /*0x72a157*/
    {
      v8 = ((vertexCount - 5) >> 2) + 1; /*0x72a163*/
      p_z = &vertices[1].z; /*0x72a165*/
      v7 = 4 * v8 + 1; /*0x72a168*/
      do /*0x72a37f*/
      {
        v10 = p_z[0xFFFFFFFE]; /*0x72a170*/
        if ( v69.x > v10 ) /*0x72a17e*/
          v69.x = p_z[0xFFFFFFFE]; /*0x72a183*/
        v11 = p_z[0xFFFFFFFF]; /*0x72a187*/
        if ( v69.y > v11 ) /*0x72a195*/
          v69.y = p_z[0xFFFFFFFF]; /*0x72a19a*/
        v12 = *p_z; /*0x72a19e*/
        if ( v69.z > v12 ) /*0x72a1ab*/
          v69.z = *p_z; /*0x72a1af*/
        if ( v68.x < v10 ) /*0x72a1c0*/
          v68.x = p_z[0xFFFFFFFE]; /*0x72a1c5*/
        if ( v68.y < v11 ) /*0x72a1d4*/
          v68.y = p_z[0xFFFFFFFF]; /*0x72a1d9*/
        if ( v68.z < v12 ) /*0x72a1e8*/
          v68.z = *p_z; /*0x72a1ec*/
        v13 = p_z[1]; /*0x72a1f0*/
        if ( v69.x > v13 ) /*0x72a1fe*/
          v69.x = p_z[1]; /*0x72a203*/
        v14 = p_z[2]; /*0x72a207*/
        if ( v69.y > v14 ) /*0x72a215*/
          v69.y = p_z[2]; /*0x72a21a*/
        v15 = p_z[3]; /*0x72a21e*/
        if ( v69.z > v15 ) /*0x72a22c*/
          v69.z = p_z[3]; /*0x72a231*/
        if ( v68.x < v13 ) /*0x72a242*/
          v68.x = p_z[1]; /*0x72a247*/
        if ( v68.y < v14 ) /*0x72a256*/
          v68.y = p_z[2]; /*0x72a25b*/
        if ( v68.z < v15 ) /*0x72a26a*/
          v68.z = p_z[3]; /*0x72a26f*/
        v16 = p_z[4]; /*0x72a273*/
        if ( v69.x > v16 ) /*0x72a281*/
          v69.x = p_z[4]; /*0x72a286*/
        v17 = p_z[5]; /*0x72a28a*/
        if ( v69.y > v17 ) /*0x72a298*/
          v69.y = p_z[5]; /*0x72a29d*/
        v18 = p_z[6]; /*0x72a2a1*/
        if ( v69.z > v18 ) /*0x72a2af*/
          v69.z = p_z[6]; /*0x72a2b4*/
        if ( v68.x < v16 ) /*0x72a2c5*/
          v68.x = p_z[4]; /*0x72a2ca*/
        if ( v68.y < v17 ) /*0x72a2d9*/
          v68.y = p_z[5]; /*0x72a2de*/
        if ( v68.z < v18 ) /*0x72a2ed*/
          v68.z = p_z[6]; /*0x72a2f2*/
        v19 = p_z[7]; /*0x72a2f6*/
        if ( v69.x > v19 ) /*0x72a304*/
          v69.x = p_z[7]; /*0x72a309*/
        v20 = p_z[8]; /*0x72a30d*/
        if ( v69.y > v20 ) /*0x72a31b*/
          v69.y = p_z[8]; /*0x72a320*/
        v21 = p_z[9]; /*0x72a324*/
        if ( v69.z > v21 ) /*0x72a332*/
          v69.z = p_z[9]; /*0x72a337*/
        if ( v68.x < v19 ) /*0x72a348*/
          v68.x = p_z[7]; /*0x72a34d*/
        if ( v68.y < v20 ) /*0x72a35c*/
          v68.y = p_z[8]; /*0x72a361*/
        if ( v68.z < v21 ) /*0x72a370*/
          v68.z = p_z[9]; /*0x72a375*/
        p_z += 0xC; /*0x72a379*/
        --v8; /*0x72a37c*/
      }
      while ( v8 ); /*0x72a37f*/
    }
    if ( v7 < (int)vertexCount ) /*0x72a387*/
    {
      v22 = &vertices[v7].z; /*0x72a392*/
      v23 = vertexCount - v7; /*0x72a396*/
      do /*0x72a426*/
      {
        v24 = v22[0xFFFFFFFE]; /*0x72a3a0*/
        if ( v69.x > v24 ) /*0x72a3ae*/
          v69.x = v22[0xFFFFFFFE]; /*0x72a3b3*/
        v25 = v22[0xFFFFFFFF]; /*0x72a3b7*/
        if ( v69.y > v25 ) /*0x72a3c5*/
          v69.y = v22[0xFFFFFFFF]; /*0x72a3ca*/
        v26 = *v22; /*0x72a3ce*/
        if ( v69.z > v26 ) /*0x72a3db*/
          v69.z = *v22; /*0x72a3df*/
        if ( v68.x < v24 ) /*0x72a3f0*/
          v68.x = v22[0xFFFFFFFE]; /*0x72a3f5*/
        if ( v68.y < v25 ) /*0x72a404*/
          v68.y = v22[0xFFFFFFFF]; /*0x72a409*/
        if ( v68.z < v26 ) /*0x72a418*/
          v68.z = *v22; /*0x72a41c*/
        v22 += 3; /*0x72a420*/
        --v23; /*0x72a423*/
      }
      while ( v23 ); /*0x72a426*/
    }
    v27 = 0;                                    // Set sphere center to the midpoint of component-wise vertex minima and maxima. /*0x72a430*/
    v58 = v68.x + v69.x; /*0x72a439*/
    v59 = v68.y + v69.y; /*0x72a445*/
    v60 = v68.z + v69.z; /*0x72a451*/
    v28 = dbl_A2FAA0; /*0x72a461*/
    v38 = v58 * v28; /*0x72a463*/
    self->x = v38; /*0x72a46f*/
    v45 = v59 * v28; /*0x72a474*/
    self->y = v45; /*0x72a47c*/
    v52 = v28 * v60; /*0x72a483*/
    self->z = v52; /*0x72a48d*/
    vertexCounta = 0.0; /*0x72a490*/
    if ( (int)vertexCount >= 4 ) /*0x72a494*/
    {
      x = self->x; /*0x72a49a*/
      y = self->y; /*0x72a4a0*/
      z = self->z; /*0x72a4a6*/
      v32 = ((vertexCount - 4) >> 2) + 1; /*0x72a4a9*/
      v33 = &vertices[1].z; /*0x72a4ac*/
      v27 = 4 * v32; /*0x72a4af*/
      do /*0x72a60b*/
      {
        v39 = v33[0xFFFFFFFB] - x; /*0x72a4bb*/
        v46 = v33[0xFFFFFFFC] - y; /*0x72a4c4*/
        v53 = v33[0xFFFFFFFD] - z; /*0x72a4cd*/
        verticesa = v46 * v46 + v39 * v39 + v53 * v53; /*0x72a4ed*/
        if ( vertexCounta < (double)verticesa ) /*0x72a500*/
          vertexCounta = v46 * v46 + v39 * v39 + v53 * v53; /*0x72a502*/
        v40 = v33[0xFFFFFFFE] - x; /*0x72a50f*/
        v47 = v33[0xFFFFFFFF] - y; /*0x72a518*/
        v54 = *v33 - z; /*0x72a520*/
        verticesb = v47 * v47 + v40 * v40 + v54 * v54; /*0x72a540*/
        if ( vertexCounta < (double)verticesb ) /*0x72a553*/
          vertexCounta = v47 * v47 + v40 * v40 + v54 * v54; /*0x72a555*/
        v41 = v33[1] - x; /*0x72a562*/
        v48 = v33[2] - y; /*0x72a56b*/
        v55 = v33[3] - z; /*0x72a574*/
        verticesc = v48 * v48 + v41 * v41 + v55 * v55; /*0x72a594*/
        if ( vertexCounta < (double)verticesc ) /*0x72a5a7*/
          vertexCounta = v48 * v48 + v41 * v41 + v55 * v55; /*0x72a5a9*/
        v42 = v33[4] - x; /*0x72a5b6*/
        v49 = v33[5] - y; /*0x72a5bf*/
        v56 = v33[6] - z; /*0x72a5c8*/
        verticesd = v49 * v49 + v42 * v42 + v56 * v56; /*0x72a5e8*/
        if ( vertexCounta < (double)verticesd ) /*0x72a5fb*/
          vertexCounta = v49 * v49 + v42 * v42 + v56 * v56; /*0x72a5fd*/
        v33 += 0xC; /*0x72a605*/
        --v32; /*0x72a608*/
      }
      while ( v32 ); /*0x72a60b*/
    }
    if ( v27 < (int)vertexCount ) /*0x72a619*/
    {
      v34 = &vertices[v27].z; /*0x72a629*/
      v35 = vertexCount - v27; /*0x72a62d*/
      do /*0x72a688*/
      {
        v43 = v34[0xFFFFFFFE] - self->x; /*0x72a634*/
        v50 = v34[0xFFFFFFFF] - self->y; /*0x72a63d*/
        v57 = *v34 - self->z; /*0x72a645*/
        verticese = v50 * v50 + v43 * v43 + v57 * v57; /*0x72a665*/
        if ( vertexCounta < (double)verticese ) /*0x72a678*/
          vertexCounta = v50 * v50 + v43 * v43 + v57 * v57; /*0x72a67a*/
        v34 += 3; /*0x72a682*/
        --v35; /*0x72a685*/
      }
      while ( v35 ); /*0x72a688*/
    }
    vertexCountb = sqrt(vertexCounta);          // Set radius to the maximum Euclidean distance from the computed center. /*0x72a699*/
    self->radius = vertexCountb; /*0x72a6a3*/
  }
  else
  {
    self->x = g_zeroNiPoint3.x; /*0x72a106*/
    self->y = g_zeroNiPoint3.y; /*0x72a10f*/
    v5 = g_zeroNiPoint3.z; /*0x72a112*/
    self->radius = 0.0; /*0x72a118*/
    self->z = v5; /*0x72a11b*/
  }
}
