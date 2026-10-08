//
//
// SpeedTreeOBSE v158: existing793550 adapter additionally prepares reference static branch RGB from generated ring topology under opt-in BranchLighting.bUseAuthoredStaticLighting. Reference4.1 ComputeBranchNormals uses GetVertexCoord(nRunningCount), without branch starting offset or current column, as its static-lighting position. New baker preserves this while retaining native dynamic normals. Owned canonical/per-LOD RGB has no shader consumer yet; no in-game static rendering claim.
void __thiscall OB_CBranch_ComputeBranchNormals_010201A0(
        OB_CBranch_010201A0 *this,
        OB_CIndexedGeometry_010201A0 *geometry,
        unsigned __int16 crossSectionSegments)
{
  int v3; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // edx
  int v8; // ebx
  int startVertexOffset; // eax
  unsigned int v10; // ebx
  const float *VertexCoord_010201A0; // edi
  const float *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // ecx
  unsigned int v17; // edi
  const float *v18; // ebx
  const float *v19; // eax
  int v20; // [esp+4h] [ebp-34h]
  OB_CBranch_010201A0 *v21; // [esp+8h] [ebp-30h]
  int v22; // [esp+Ch] [ebp-2Ch]
  float v23; // [esp+10h] [ebp-28h]
  float v24; // [esp+10h] [ebp-28h]
  float v25; // [esp+10h] [ebp-28h]
  float v26; // [esp+10h] [ebp-28h]
  float v27; // [esp+10h] [ebp-28h]
  float v28; // [esp+10h] [ebp-28h]
  float v29; // [esp+14h] [ebp-24h]
  float v30; // [esp+14h] [ebp-24h]
  float v31; // [esp+18h] [ebp-20h]
  float v32; // [esp+18h] [ebp-20h]
  float v33; // [esp+1Ch] [ebp-1Ch]
  float v34; // [esp+1Ch] [ebp-1Ch]
  float v35; // [esp+20h] [ebp-18h]
  float v36; // [esp+20h] [ebp-18h]
  float v37; // [esp+24h] [ebp-14h]
  float v38; // [esp+24h] [ebp-14h]
  float v39; // [esp+28h] [ebp-10h]
  float v40; // [esp+28h] [ebp-10h]
  float normal[3]; // [esp+2Ch] [ebp-Ch] BYREF
  int geometrya; // [esp+3Ch] [ebp+4h]

  v3 = 0; /*0x78f7a4*/
  v21 = this; /*0x78f7a9*/
  v22 = 0; /*0x78f7ad*/
  if ( this->branchVertexCount > 0 )
  {
    v20 = crossSectionSegments + 1; /*0x78f7c6*/
    do
    {
      v5 = v3 * v20; /*0x78f7d9*/
      v6 = 0; /*0x78f7dc*/
      for ( geometrya = v3 * v20; ; v5 = geometrya )
      {
        v7 = v6 ? v5 + v6 - 1 : crossSectionSegments + v5 - 1;
        v8 = v5 + 1; /*0x78f80e*/
        if ( v6 != crossSectionSegments ) /*0x78f811*/
          v8 += v6; /*0x78f813*/
        startVertexOffset = this->startVertexOffset; /*0x78f815*/
        v10 = startVertexOffset + v8; /*0x78f81d*/
        VertexCoord_010201A0 = OB_CIndexedGeometry_GetVertexCoord_010201A0(geometry, startVertexOffset + v7); /*0x78f827*/
        v12 = OB_CIndexedGeometry_GetVertexCoord_010201A0(geometry, v10); /*0x78f829*/
        v35 = *v12 - *VertexCoord_010201A0; /*0x78f832*/
        v37 = v12[1] - VertexCoord_010201A0[1]; /*0x78f83c*/
        v39 = v12[2] - VertexCoord_010201A0[2]; /*0x78f846*/
        v23 = v37 * v37 + v35 * v35 + v39 * v39; /*0x78f866*/
        v24 = sqrt(v23); /*0x78f873*/
        v25 = 1.0 / v24; /*0x78f885*/
        v36 = v25 * v35; /*0x78f893*/
        v38 = v37 * v25; /*0x78f89d*/
        v40 = v25 * v39; /*0x78f8a5*/
        v13 = v22 ? v20 * (v22 - 1) : geometrya;
        v14 = v6 + v13; /*0x78f8c3*/
        v15 = v22 == v21->branchVertexCount - 1 ? geometrya + v6 : v6 + v20 * (v22 + 1);
        v16 = v21->startVertexOffset; /*0x78f8dc*/
        v17 = v16 + v15; /*0x78f8e1*/
        v18 = OB_CIndexedGeometry_GetVertexCoord_010201A0(geometry, v16 + v14); /*0x78f8ee*/
        v19 = OB_CIndexedGeometry_GetVertexCoord_010201A0(geometry, v17); /*0x78f8f0*/
        v29 = *v19 - *v18; /*0x78f8f9*/
        v31 = v19[1] - v18[1]; /*0x78f903*/
        v33 = v19[2] - v18[2]; /*0x78f90d*/
        v26 = v29 * v29 + v31 * v31 + v33 * v33; /*0x78f92d*/
        v27 = sqrt(v26); /*0x78f93a*/
        v28 = 1.0 / v27; /*0x78f94d*/
        v30 = v28 * v29; /*0x78f95b*/
        v32 = v28 * v31; /*0x78f965*/
        v34 = v28 * v33; /*0x78f96d*/
        normal[0] = v34 * v38 - v40 * v32; /*0x78f991*/
        normal[1] = v40 * v30 - v34 * v36; /*0x78f9ab*/
        normal[2] = v32 * v36 - v30 * v38; /*0x78f9b5*/
        OB_CIndexedGeometry_AddVertexNormal_010201A0(geometry, normal); /*0x78f9b9*/
        ++geometry->currentVertexWriteCounter; /*0x78f9be*/
        ++v6; /*0x78f9c8*/
        this = v21; /*0x78f9cd*/
        if ( v6 > crossSectionSegments ) /*0x78f9d1*/
          break; /*0x78f9d1*/
      }
      v3 = ++v22; /*0x78f9db*/
    }
    while ( v22 < v21->branchVertexCount );
  }
}
