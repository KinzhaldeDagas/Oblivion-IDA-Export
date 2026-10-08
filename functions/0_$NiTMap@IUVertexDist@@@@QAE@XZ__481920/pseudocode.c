// Copy normalized normals from nearest source vertices to targets in common geometry space. The internal VertexDist map is keyed by source index and retains only a primary plus one coincident secondary target (distance epsilon 0.001); third and later coincident targets are dropped. FaceGen uses this for Face-to-Ears and body-skin seam repair.
bool __cdecl NiGeometry_CopyNearestVertexNormals(
        NiGeometry *sourceGeometry,
        NiGeometry *targetGeometry,
        float maxDistance,
        int unused,
        bool offsetVerticesAlongNormals)
{
  unsigned int v5; // ebx
  NiGeometry *v6; // ebp
  NiGeometryData *geomData; // eax
  NiPoint3 *m_pkVertex; // ecx
  NiPoint3 *m_pkNormal; // edx
  unsigned int m_usVertices; // eax
  NiGeometryData *v11; // eax
  NiPoint3 *v12; // ecx
  NiPoint3 *v13; // edx
  unsigned int v14; // eax
  unsigned int WorldVertices; // edi
  float *v17; // eax
  float *v18; // eax
  double v19; // st7
  unsigned int matchedSourceIndex; // ebp
  unsigned int sourceIndex; // esi
  float *v22; // edi
  float *v23; // eax
  int v24; // ebp
  NiTransform *v25; // eax
  int v26; // edi
  float *p_x; // esi
  unsigned int v28; // ebx
  _DWORD *v29; // eax
  float *v30; // eax
  NiPoint3 *v31; // ebp
  NiPoint3 *v32; // edi
  float *v33; // eax
  _DWORD *v34; // eax
  bool copiedAnyNormal; // [esp+23h] [ebp-11Dh]
  unsigned int targetVertexCount; // [esp+24h] [ebp-11Ch]
  float nearestDistance; // [esp+28h] [ebp-118h]
  float v38; // [esp+2Ch] [ebp-114h] BYREF
  unsigned int sourceVertexCount; // [esp+30h] [ebp-110h]
  unsigned int *v40[2]; // [esp+34h] [ebp-10Ch] BYREF
  int v41; // [esp+3Ch] [ebp-104h]
  int v42; // [esp+40h] [ebp-100h]
  float v43; // [esp+44h] [ebp-FCh] BYREF
  float *v44; // [esp+48h] [ebp-F8h]
  float *v45; // [esp+4Ch] [ebp-F4h]
  float *v46; // [esp+50h] [ebp-F0h]
  NiPoint3 *targetNormals; // [esp+54h] [ebp-ECh]
  NiPoint3 *sourceNormals; // [esp+58h] [ebp-E8h]
  int v49; // [esp+5Ch] [ebp-E4h] BYREF
  unsigned int v50; // [esp+60h] [ebp-E0h]
  int v51; // [esp+64h] [ebp-DCh]
  NiPoint3 *targetVertices; // [esp+68h] [ebp-D8h]
  NiPoint3 *sourceVertices; // [esp+6Ch] [ebp-D4h]
  int v54[2]; // [esp+70h] [ebp-D0h] BYREF
  float v55; // [esp+78h] [ebp-C8h]
  _BYTE v56[60]; // [esp+7Ch] [ebp-C4h] BYREF
  float v57[9]; // [esp+B8h] [ebp-88h] BYREF
  float v58[9]; // [esp+DCh] [ebp-64h] BYREF
  NiTransform v59; // [esp+100h] [ebp-40h] BYREF
  unsigned int v60; // [esp+13Ch] [ebp-4h]

  v40[1] = (unsigned int *)0x25; /*0x481954*/
  v5 = 0; /*0x481958*/
  v42 = 0; /*0x48196c*/
  v41 = FormHeapAlloc(0x94u); /*0x481988*/
  _memset(v41, 0, 0x94u); /*0x48198c*/
  v40[0] = (unsigned int *)&NiTMap<unsigned int,VertexDist>::`vftable'; /*0x481994*/
  v6 = sourceGeometry; /*0x48199c*/
  v60 = 0; /*0x4819a5*/
  copiedAnyNormal = 0; /*0x4819ac*/
  if ( !sourceGeometry ) /*0x4819b0*/
    goto LABEL_13; /*0x4819b0*/
  if ( !targetGeometry ) /*0x4819bf*/
    goto LABEL_13; /*0x4819bf*/
  if ( sourceGeometry == targetGeometry ) /*0x4819c7*/
    goto LABEL_13; /*0x4819c7*/
  geomData = sourceGeometry->member.geomData; /*0x4819cd*/
  m_pkVertex = geomData->member.m_pkVertex; /*0x4819d3*/
  m_pkNormal = geomData->member.m_pkNormal; /*0x4819d8*/
  m_usVertices = geomData->member.m_usVertices; /*0x4819df*/
  sourceVertices = m_pkVertex; /*0x4819e2*/
  sourceNormals = m_pkNormal; /*0x4819e6*/
  sourceVertexCount = m_usVertices; /*0x4819ea*/
  if ( !m_pkVertex ) /*0x4819ee*/
    goto LABEL_13; /*0x4819ee*/
  if ( !m_pkNormal ) /*0x4819f2*/
    goto LABEL_13; /*0x4819f2*/
  if ( !m_usVertices ) /*0x4819f6*/
    goto LABEL_13; /*0x4819f6*/
  v11 = targetGeometry->member.geomData; /*0x4819f8*/
  v12 = v11->member.m_pkVertex; /*0x4819fe*/
  v13 = v11->member.m_pkNormal; /*0x481a03*/
  v14 = v11->member.m_usVertices; /*0x481a0a*/
  targetVertices = v12; /*0x481a0d*/
  targetNormals = v13; /*0x481a11*/
  targetVertexCount = v14; /*0x481a15*/
  if ( !v12 ) /*0x481a19*/
    goto LABEL_13; /*0x481a19*/
  if ( !v13 ) /*0x481a1d*/
    goto LABEL_13; /*0x481a1d*/
  if ( !v14 ) /*0x481a21*/
    goto LABEL_13; /*0x481a21*/
  WorldVertices = NiGeometry_AllocateWorldVertices((int)sourceGeometry); /*0x481a29*/
  v46 = (float *)WorldVertices; /*0x481a30*/
  if ( !WorldVertices ) /*0x481a34*/
    goto LABEL_13; /*0x481a34*/
  v45 = (float *)NiGeometry_AllocateWorldVertices((int)targetGeometry); /*0x481a41*/
  if ( !v45 ) /*0x481a45*/
  {
    FormHeapFree(WorldVertices); /*0x481a48*/
LABEL_13:
    v60 = 0xFFFFFFFF; /*0x481a50*/
    NiTMap<unsigned int,VertexDist>::~NiTMap<unsigned int,VertexDist>((unsigned int *)v40); /*0x481a5f*/
    return 0; /*0x481a7f*/
  }
  sub_718A80((float *)&targetGeometry->member.super.m_worldTransform, &v59); /*0x481a8d*/
  v17 = sub_7103C0((float *)&targetGeometry->member.super.m_worldTransform, v57); /*0x481aa8*/
  v18 = NiMAtrix33_Multiply(v17, v58, (float *)&sourceGeometry->member.super.m_worldTransform); /*0x481aaf*/
  v38 = flt_A32048; /*0x481abe*/
  qmemcpy(&v56[0x18], v18, 0x24u); /*0x481ad0*/
  if ( !targetVertexCount ) /*0x481ad2*/
    goto LABEL_33; /*0x481ad2*/
  v44 = v45; /*0x481adc*/
  do /*0x481bfb*/
  {
    v19 = maxDistance; /*0x481ae0*/
    matchedSourceIndex = sourceVertexCount; /*0x481ae7*/
    if ( maxDistance < 0.0 ) /*0x481af4*/
      v19 = flt_A32048; /*0x481af8*/
    sourceIndex = 0; /*0x481afe*/
    nearestDistance = v19; /*0x481b00*/
    if ( sourceVertexCount ) /*0x481b06*/
    {
      v22 = v46; /*0x481b0c*/
      do /*0x481b60*/
      {
        v23 = sub_4121A0(v44, (float *)v56, v22); /*0x481b1a*/
        v43 = NiPoint3_Length(v23); /*0x481b26*/
        if ( nearestDistance > (double)v43 ) /*0x481b39*/
        {
          nearestDistance = v43; /*0x481b3b*/
          matchedSourceIndex = sourceIndex; /*0x481b3f*/
        }
        if ( v38 > (double)v43 ) /*0x481b4c*/
          v38 = v43; /*0x481b4e*/
        ++sourceIndex; /*0x481b56*/
        v22 += 3; /*0x481b59*/
      }
      while ( sourceIndex < sourceVertexCount ); /*0x481b60*/
      if ( matchedSourceIndex < sourceVertexCount ) /*0x481b66*/
      {
        *(float *)&v51 = nearestDistance; /*0x481b75*/
        if ( !NiTMap_UInt_VertexDist_Get(v40, matchedSourceIndex, v54) ) /*0x481b7e*/
          goto LABEL_30;                        // VertexDist map is keyed by source vertex. Each 20-byte node stores key, primary target index, one secondary target index, and nearest distance. /*0x481b7e*/
        if ( FloatNearlyEqualAbsolute(nearestDistance, v55, flt_A37080) )// Treat target distances within 0.001 as coincident. The replacement stores the new target plus only the previous primary target; any earlier secondary target is discarded. /*0x481ba3*/
        {
          NiTMap_UInt_VertexDist_Set(v40, matchedSourceIndex, v5, v54[0], v51);// Equal-distance insertion rotates two target slots. Targets are visited in ascending index order, so only the final two coincident target indices survive; earlier UV-split targets are dropped. /*0x481bbd*/
          goto LABEL_31; /*0x481bbd*/
        }
        if ( v55 > (double)nearestDistance ) /*0x481bce*/
LABEL_30:
          NiTMap_UInt_VertexDist_Set(v40, matchedSourceIndex, v5, targetVertexCount, v51); /*0x481bea*/
      }
    }
LABEL_31:
    v44 += 3; /*0x481bef*/
    ++v5; /*0x481bf4*/
  }
  while ( v5 < targetVertexCount ); /*0x481bfb*/
  v6 = sourceGeometry; /*0x481c01*/
LABEL_33:
  v38 = COERCE_FLOAT(NiTMapBase_GetFirstNode((unsigned int *)v40)); /*0x481c08*/
  if ( v38 != 0.0 ) /*0x481c17*/
  {
    copiedAnyNormal = 1; /*0x481c1d*/
    do /*0x481d41*/
    {
      NiTMap_UInt_VertexDist_GetNext(v40, (unsigned int *)&v38, &v43, &v49);// Enumerate one VertexDist record: source index, primary target index, optional secondary target index, distance. /*0x481c35*/
      v24 = LODWORD(v43); /*0x481c47*/
      v25 = sub_7101F0((NiTransform *)&v56[0x18], (NiTransform *)v56, &sourceNormals[LODWORD(v43)]); /*0x481c59*/
      v26 = v49; /*0x481c6d*/
      p_x = &targetNormals[v49].x; /*0x481c6f*/
      *p_x = v25->rot.data[0][0]; /*0x481c72*/
      p_x[1] = v25->rot.data[0][1]; /*0x481c77*/
      p_x[2] = v25->rot.data[0][2]; /*0x481c7f*/
      Vector3_NormalizeInPlace(p_x); /*0x481c82*/
      v28 = v50; /*0x481c89*/
      if ( v50 < targetVertexCount )            // Copy the source normal to the one optional secondary target only. VertexDist cannot represent additional coincident targets. /*0x481c91*/
      {
        v29 = (_DWORD *)&targetNormals[v50].x; /*0x481c9c*/
        *v29 = *(_DWORD *)p_x; /*0x481c9f*/
        v29[1] = *((_DWORD *)p_x + 1); /*0x481ca4*/
        v29[2] = *((_DWORD *)p_x + 2); /*0x481caa*/
      }
      if ( offsetVerticesAlongNormals ) /*0x481cb5*/
      {
        if ( *(NiGeometry **)&MEMORY[0xB33E90][0x578] != sourceGeometry ) /*0x481cc8*/
        {
          v30 = sub_47DA10((float *)v54, flt_A31C80, &sourceNormals[v24].x); /*0x481ce1*/
          sub_4121D0(&sourceVertices[v24].x, v30); /*0x481cf1*/
        }
        v31 = targetVertices; /*0x481cfc*/
        v32 = &targetVertices[v26]; /*0x481d0d*/
        v33 = sub_47DA10((float *)&v56[0xC], flt_A31C80, p_x); /*0x481d0f*/
        sub_4121D0(&v32->x, v33); /*0x481d1a*/
        if ( v28 < targetVertexCount ) /*0x481d23*/
        {
          v34 = (_DWORD *)&v31[v28].x; /*0x481d2a*/
          *v34 = LODWORD(v32->x); /*0x481d2e*/
          v34[1] = LODWORD(v32->y); /*0x481d33*/
          v34[2] = LODWORD(v32->z); /*0x481d39*/
        }
      }
    }
    while ( v38 != 0.0 ); /*0x481d41*/
    if ( offsetVerticesAlongNormals ) /*0x481d54*/
      sourceGeometry->member.geomData->member.m_usDirtyFlags |= 3u; /*0x481d63*/
    targetGeometry->member.geomData->member.m_usDirtyFlags |= 3u; /*0x481d74*/
    v6 = sourceGeometry; /*0x481d78*/
  }
  FormHeapFree((unsigned int)v46); /*0x481d84*/
  FormHeapFree((unsigned int)v45); /*0x481d8e*/
  *(_DWORD *)&MEMORY[0xB33E90][0x578] = v6; /*0x481d9a*/
  v60 = 0xFFFFFFFF; /*0x481da0*/
  NiTMap<unsigned int,VertexDist>::~NiTMap<unsigned int,VertexDist>((unsigned int *)v40); /*0x481dab*/
  return copiedAnyNormal; /*0x481a66*/
}
