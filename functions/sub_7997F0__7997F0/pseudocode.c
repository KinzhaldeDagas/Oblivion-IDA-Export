// Accumulates leaf-geometry extents into the Compute bounds object.
void __thiscall OB_CLeafGeometry_ComputeExtents_010201A0(
        OB_CLeafGeometry_010201A0 *this,
        OB_stRegion_010201A0 *extents)
{
  OB_CLeafGeometry_010201A0 *v2; // edi
  int v3; // ebp
  bool v4; // zf
  double v5; // st7
  int v6; // esi
  double v7; // st6
  double v8; // st5
  OB_stVec3_010201A0 *leafTextureOrigins; // eax
  OB_stVec3_010201A0 *leafTextureDimensions; // ecx
  double v11; // st4
  double v12; // st3
  double v13; // st7
  double v14; // st5
  OB_stVec3_010201A0 *v15; // ecx
  double x; // st2
  float *p_x; // ecx
  double v18; // rt0
  double v19; // st3
  double v20; // st7
  OB_stVec3_010201A0 *v21; // edx
  double v22; // st1
  float v23; // esi
  float *v24; // eax
  unsigned int v25; // esi
  float *begin; // eax
  unsigned int v27; // esi
  unsigned int v28; // ecx
  int leafLodCount; // edx
  float v30; // [esp+14h] [ebp-F0h]
  float v31; // [esp+14h] [ebp-F0h]
  int v32; // [esp+14h] [ebp-F0h]
  int v33; // [esp+14h] [ebp-F0h]
  int v34; // [esp+14h] [ebp-F0h]
  int v35; // [esp+14h] [ebp-F0h]
  int v36; // [esp+14h] [ebp-F0h]
  int v37; // [esp+14h] [ebp-F0h]
  int v38; // [esp+14h] [ebp-F0h]
  int value; // [esp+18h] [ebp-ECh] BYREF
  float v40; // [esp+1Ch] [ebp-E8h]
  float v41; // [esp+20h] [ebp-E4h]
  float v42; // [esp+24h] [ebp-E0h]
  float v43; // [esp+28h] [ebp-DCh]
  double v44; // [esp+2Ch] [ebp-D8h]
  int v45; // [esp+34h] [ebp-D0h]
  unsigned int v46; // [esp+38h] [ebp-CCh]
  OB_CLeafGeometry_010201A0 *v47; // [esp+3Ch] [ebp-C8h]
  OB_stVec3_010201A0 v48; // [esp+40h] [ebp-C4h] BYREF
  OB_stVec3_010201A0 v49; // [esp+4Ch] [ebp-B8h] BYREF
  OB_stVectorFloat_010201A0 longestDiagonals; // [esp+58h] [ebp-ACh] BYREF
  OB_stRegion_010201A0 outRegion; // [esp+68h] [ebp-9Ch] BYREF
  OB_stVec3_010201A0 point; // [esp+98h] [ebp-6Ch] BYREF
  OB_stVec3_010201A0 negativeYSwingPoint; // [esp+A4h] [ebp-60h] BYREF
  OB_stRegion_010201A0 right; // [esp+B0h] [ebp-54h] BYREF
  OB_stVec3_010201A0 v55; // [esp+E0h] [ebp-24h] BYREF
  OB_stVec3_010201A0 v56; // [esp+ECh] [ebp-18h] BYREF
  int v57; // [esp+100h] [ebp-4h]

  v2 = this; /*0x79981d*/
  v47 = this; /*0x79981f*/
  v3 = 0; /*0x799823*/
  if ( this->leafTextureOrigins ) /*0x799825*/
  {
    if ( this->leafTextureDimensions ) /*0x79982e*/
    {
      if ( this->lodGeometryRecords ) /*0x799837*/
      {
        memset(&longestDiagonals.begin, 0, 0xC); /*0x799840*/
        v4 = this->leafTextureCount == 0; /*0x79984c*/
        v57 = 0; /*0x799850*/
        if ( !v4 ) /*0x79985c*/
        {
          v5 = 0.0; /*0x799862*/
          v6 = 0; /*0x799864*/
          v7 = (0.0 - 0.0) * (0.0 - 0.0); /*0x79986a*/
          v44 = v7; /*0x79986c*/
          v8 = 0.0; /*0x799870*/
          while ( 1 ) /*0x799880*/
          {
            leafTextureOrigins = v2->leafTextureOrigins; /*0x799880*/
            leafTextureDimensions = v2->leafTextureDimensions; /*0x799883*/
            v30 = leafTextureOrigins[v6].x * leafTextureDimensions[v6].x; /*0x799890*/
            v40 = leafTextureDimensions[v6].y * leafTextureOrigins[v6].y; /*0x79989a*/
            *(float *)&value = v8; /*0x79989e*/
            v11 = v30; /*0x7998a2*/
            v12 = (v5 - v30) * (v5 - v30); /*0x7998aa*/
            v13 = (v5 - v40) * (v5 - v40); /*0x7998b6*/
            v31 = v13 + v12 + v7; /*0x7998be*/
            if ( v8 >= COERCE_FLOAT((SLODWORD(v31) >> 1) + 0x1FC00000) ) /*0x7998e5*/
            {
              v14 = v40; /*0x7998fe*/
            }
            else
            {
              v14 = v40; /*0x7998e7*/
              value = (SLODWORD(v31) >> 1) + 0x1FC00000; /*0x7998f8*/
            }
            v15 = v2->leafTextureDimensions; /*0x799900*/
            x = v15[v6].x; /*0x799903*/
            p_x = &v15[v6].x; /*0x799906*/
            v49.x = x; /*0x799908*/
            *(float *)&v32 = (v49.x - v11) * (v49.x - v11) + v13 + v7; /*0x799918*/
            if ( *(float *)&value >= (double)COERCE_FLOAT((v32 >> 1) + 0x1FC00000) ) /*0x79993b*/
            {
              v20 = v12; /*0x799966*/
            }
            else
            {
              v48.x = *p_x; /*0x79993f*/
              v18 = v12; /*0x79994d*/
              v19 = v13 + (v48.x - v11) * (v48.x - v11); /*0x79994d*/
              v20 = v18; /*0x79994d*/
              *(float *)&v33 = v19 + v7; /*0x799951*/
              value = (v33 >> 1) + 0x1FC00000; /*0x799960*/
            }
            v21 = v2->leafTextureDimensions; /*0x799968*/
            v40 = v21[v6].x; /*0x799971*/
            v22 = v21[v6].y - v14; /*0x79998a*/
            *(float *)&v34 = v22 * v22 + (v40 - v11) * (v40 - v11) + v7; /*0x799992*/
            if ( *(float *)&value < (double)COERCE_FLOAT((v34 >> 1) + 0x1FC00000) ) /*0x7999b4*/
            {
              v40 = v21[v6].x; /*0x7999bc*/
              *(float *)&v35 = (v40 - v11) * (v40 - v11) + (v21[v6].y - v14) * (v21[v6].y - v14) + v7; /*0x7999dd*/
              value = (v35 >> 1) + 0x1FC00000; /*0x7999ec*/
            }
            *(float *)&v36 = (p_x[1] - v14) * (p_x[1] - v14) + v20 + v7; /*0x799a07*/
            if ( *(float *)&value < (double)COERCE_FLOAT((v36 >> 1) + 0x1FC00000) ) /*0x799a2a*/
            {
              *(float *)&v37 = v20 + (p_x[1] - v14) * (p_x[1] - v14) + v7; /*0x799a3d*/
              value = (v37 >> 1) + 0x1FC00000; /*0x799a4c*/
            }
            OB_stVectorFloat_PushBack_010201A0(&longestDiagonals, (const float *)&value);// Append this leaf texture's computed longest origin-to-corner/mesh radius to the local vector<float> used by ComputeExtents. This exact push-back is visible in Oblivion; RT4.1 corroborates the st_vector_float role but uses pre-sizing/index assignment. /*0x799a61*/
            ++v3; /*0x799a6a*/
            ++v6; /*0x799a6c*/
            if ( v3 >= v2->leafTextureCount ) /*0x799a71*/
              break; /*0x799a71*/
            v5 = 0.0; /*0x79987c*/
            v8 = 0.0; /*0x79987e*/
            v7 = v44; /*0x79987e*/
          }
          v3 = 0; /*0x799a77*/
        }
        v38 = 0; /*0x799a7d*/
        if ( v2->leafLodCount ) /*0x799a79*/
        {
          v46 = 0; /*0x799a87*/
          do /*0x799e66*/
          {
            LODWORD(v23) = &v2->lodGeometryRecords[v46 / 0x44]; /*0x799a93*/
            v4 = *(_WORD *)(LODWORD(v23) + 0xC) == 0; /*0x799a97*/
            v40 = v23; /*0x799a9b*/
            if ( !v4 ) /*0x799a9f*/
            {
              v45 = 0; /*0x799aa5*/
              while ( 1 ) /*0x799abb*/
              {
                OB_Extents_Init_010201A0(right.min.data); /*0x799abb*/
                v24 = (float *)(v45 + *(_DWORD *)(LODWORD(v23) + 0x18)); /*0x799ac3*/
                LOBYTE(v57) = 1; /*0x799ac7*/
                v42 = *v24; /*0x799ad0*/
                v41 = v24[1]; /*0x799ad7*/
                v25 = *(unsigned __int8 *)(*(_DWORD *)(LODWORD(v23) + 0x10) + v3); /*0x799ae1*/
                value = *((int *)v24 + 2); /*0x799ae5*/
                begin = longestDiagonals.begin; /*0x799ae9*/
                v27 = v25 >> 1; /*0x799aed*/
                if ( !longestDiagonals.begin || v27 >= longestDiagonals.end - longestDiagonals.begin ) /*0x799afe*/
                {
                  _invalid_parameter_noinfo(1, (int)v2, v27); /*0x799b00*/
                  begin = longestDiagonals.begin; /*0x799b05*/
                }
                v43 = begin[v27]; /*0x799b13*/
                point.x = v42 + v43; /*0x799b2c*/
                point.y = v41; /*0x799b37*/
                point.z = *(float *)&value; /*0x799b42*/
                qmemcpy(&right, OB_stRegion_IncludePointCopy_010201A0(&right, &outRegion, &point), sizeof(right)); /*0x799b5c*/
                LOBYTE(v57) = 2; /*0x799b65*/
                Shared_NoOpVirtual_60D0A0(&outRegion.max); /*0x799b6d*/
                LOBYTE(v57) = 1; /*0x799b76*/
                Shared_NoOpVirtual_60D0A0(&outRegion); /*0x799b7d*/
                v56.x = v42 - v43; /*0x799b96*/
                v56.y = v41; /*0x799ba9*/
                v56.z = *(float *)&value; /*0x799bb4*/
                qmemcpy(&right, OB_stRegion_IncludePointCopy_010201A0(&right, &outRegion, &v56), sizeof(right)); /*0x799bce*/
                LOBYTE(v57) = 3; /*0x799bd7*/
                Shared_NoOpVirtual_60D0A0(&outRegion.max); /*0x799bdf*/
                LOBYTE(v57) = 1; /*0x799be8*/
                Shared_NoOpVirtual_60D0A0(&outRegion); /*0x799bef*/
                *(float *)&v44 = v41 + v43; /*0x799c08*/
                v55.x = v42; /*0x799c18*/
                v55.y = *(float *)&v44; /*0x799c23*/
                v55.z = *(float *)&value; /*0x799c2e*/
                qmemcpy(&right, OB_stRegion_IncludePointCopy_010201A0(&right, &outRegion, &v55), sizeof(right)); /*0x799c48*/
                LOBYTE(v57) = 4; /*0x799c51*/
                Shared_NoOpVirtual_60D0A0(&outRegion.max); /*0x799c59*/
                LOBYTE(v57) = 1; /*0x799c62*/
                Shared_NoOpVirtual_60D0A0(&outRegion); /*0x799c69*/
                *(float *)&v44 = v41 - v43; /*0x799c76*/
                negativeYSwingPoint.x = v42; /*0x799c7e*/
                negativeYSwingPoint.y = *(float *)&v44; /*0x799c90*/
                negativeYSwingPoint.z = *(float *)&value; /*0x799ca1*/
                qmemcpy( /*0x799cc2*/
                  &right,
                  OB_stRegion_IncludePointCopy_010201A0(&right, &outRegion, &negativeYSwingPoint),
                  sizeof(right));
                LOBYTE(v57) = 5; /*0x799ccb*/
                Shared_NoOpVirtual_60D0A0(&outRegion.max); /*0x799cd3*/
                LOBYTE(v57) = 1; /*0x799cdc*/
                Shared_NoOpVirtual_60D0A0(&outRegion); /*0x799ce3*/
                *(float *)&v44 = *(float *)&value + v43; /*0x799cf9*/
                v48.x = v42; /*0x799d09*/
                v48.y = v41; /*0x799d11*/
                v48.z = *(float *)&v44; /*0x799d19*/
                qmemcpy(&right, OB_stRegion_IncludePointCopy_010201A0(&right, &outRegion, &v48), sizeof(right)); /*0x799d30*/
                LOBYTE(v57) = 6; /*0x799d39*/
                Shared_NoOpVirtual_60D0A0(&outRegion.max); /*0x799d41*/
                LOBYTE(v57) = 1; /*0x799d4a*/
                Shared_NoOpVirtual_60D0A0(&outRegion); /*0x799d51*/
                *(float *)&v44 = *(float *)&value - v43; /*0x799d67*/
                v49.x = v42; /*0x799d77*/
                v49.y = v41; /*0x799d7f*/
                v49.z = *(float *)&v44; /*0x799d87*/
                qmemcpy(&right, OB_stRegion_IncludePointCopy_010201A0(&right, &outRegion, &v49), sizeof(right)); /*0x799d9e*/
                LOBYTE(v57) = 7; /*0x799da7*/
                Shared_NoOpVirtual_60D0A0(&outRegion.max); /*0x799daf*/
                LOBYTE(v57) = 1; /*0x799db8*/
                Shared_NoOpVirtual_60D0A0(&outRegion); /*0x799dbf*/
                qmemcpy( /*0x799de6*/
                  extents,
                  OB_stRegion_UnionCopy_010201A0(extents, &outRegion, &right),
                  sizeof(OB_stRegion_010201A0));// Leaf-geometry bounds accumulation unions the current output region with the computed leaf-swing region through OB_stRegion_UnionCopy.
                v2 = (OB_CLeafGeometry_010201A0 *)&extents[1]; /*0x799de6*/
                LOBYTE(v57) = 8; /*0x799def*/
                Shared_NoOpVirtual_60D0A0(&outRegion.max); /*0x799df7*/
                LOBYTE(v57) = 1; /*0x799e00*/
                Shared_NoOpVirtual_60D0A0(&outRegion); /*0x799e07*/
                LOBYTE(v57) = 9; /*0x799e13*/
                Shared_NoOpVirtual_60D0A0(&right.max); /*0x799e1b*/
                LOBYTE(v57) = 0; /*0x799e27*/
                Shared_NoOpVirtual_60D0A0(&right); /*0x799e2f*/
                v28 = *(unsigned __int16 *)(LODWORD(v40) + 0xC); /*0x799e38*/
                v45 += 0xC; /*0x799e3c*/
                if ( ++v3 >= v28 ) /*0x799e45*/
                  break; /*0x799e45*/
                v23 = v40; /*0x799ab0*/
              }
              v2 = v47; /*0x799e4b*/
              v3 = 0; /*0x799e4f*/
            }
            leafLodCount = v2->leafLodCount; /*0x799e55*/
            v46 += 0x44; /*0x799e59*/
            ++v38; /*0x799e62*/
          }
          while ( v38 < leafLodCount ); /*0x799e66*/
        }
        if ( longestDiagonals.begin ) /*0x799e72*/
          FormHeapFree((unsigned int)longestDiagonals.begin); /*0x799e75*/
      }
    }
  }
}
