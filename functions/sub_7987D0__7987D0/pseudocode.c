// Oblivion CPU leaf wind pass: transforms original leaf centers through one selected 4x4 wind matrix and linearly blends by one per-leaf weight.
void __thiscall OB_CLeafGeometry_ComputeWindEffect_010201A0(OB_CLeafGeometry_010201A0 *this, unsigned __int16 lodLevel)
{
  OB_SLodGeometry_010201A0 *lodGeometryRecords; // ecx
  OB_SLodGeometry_010201A0 *v3; // edi
  int v4; // ebx
  bool v5; // zf
  int v6; // ebp
  float *v7; // esi
  const OB_stTransform_010201A0 *v8; // eax
  OB_stVec3_010201A0 *v9; // eax
  float y; // edx
  double v11; // st7
  float z; // eax
  double v13; // st7
  float *v14; // eax
  double v15; // st6
  float v16; // [esp+0h] [ebp-30h]
  float v17; // [esp+4h] [ebp-2Ch]
  float v18; // [esp+8h] [ebp-28h]
  OB_stVec3_010201A0 v19; // [esp+Ch] [ebp-24h] BYREF
  float v20; // [esp+18h] [ebp-18h]
  float v21; // [esp+1Ch] [ebp-14h]
  float v22; // [esp+20h] [ebp-10h]
  OB_stVec3_010201A0 result; // [esp+24h] [ebp-Ch] BYREF
  float lodLevela; // [esp+34h] [ebp+4h]

  if ( this->windEngine ) /*0x7987d3*/
  {
    if ( lodLevel < this->leafLodCount ) /*0x7987e6*/
    {
      if ( this->vertexWeighting ) /*0x7987ec*/
      {
        lodGeometryRecords = this->lodGeometryRecords; /*0x7987f6*/
        if ( lodGeometryRecords ) /*0x7987fb*/
        {
          v3 = &lodGeometryRecords[lodLevel]; /*0x79880c*/
          if ( v3 ) /*0x798811*/
          {
            if ( v3->originalCenterCoords ) /*0x798817*/
            {
              if ( v3->centerCoords ) /*0x798821*/
              {
                v19.z = 0.0; /*0x79882e*/
                v4 = 0; /*0x798832*/
                v5 = v3->leafCount == 0; /*0x798834*/
                v19.y = 0.0; /*0x798838*/
                v19.x = 0.0; /*0x79883c*/
                v22 = 0.0; /*0x798840*/
                v21 = 0.0; /*0x798844*/
                v20 = 0.0; /*0x798848*/
                if ( !v5 ) /*0x79884c*/
                {
                  v6 = 0; /*0x798854*/
                  do /*0x79892d*/
                  {
                    v16 = v3->windWeights[v4]; /*0x798863*/
                    v7 = &v3->originalCenterCoords[v6]; /*0x79886a*/
                    v8 = &CWindEngine__s_windMatrixContainer.matrices[v3->windMatrixIndices[v4]]; /*0x79886f*/
                    v19.x = *v7; /*0x79887b*/
                    v19.y = v7[1]; /*0x798884*/
                    v19.z = v7[2]; /*0x79888f*/
                    v9 = OB_stVec3_TransformPoint_010201A0(&v19, &result, v8); /*0x798893*/
                    v18 = v7[2]; /*0x79889d*/
                    y = v9->y; /*0x7988a1*/
                    v11 = v7[1]; /*0x7988a4*/
                    v19.x = v9->x; /*0x7988a7*/
                    v17 = v11; /*0x7988ab*/
                    z = v9->z; /*0x7988af*/
                    v13 = *v7; /*0x7988b2*/
                    v19.y = y; /*0x7988b4*/
                    lodLevela = v13; /*0x7988b8*/
                    v19.z = z; /*0x7988bc*/
                    v14 = &v3->centerCoords[v6]; /*0x7988cb*/
                    ++v4; /*0x7988cf*/
                    v6 += 3; /*0x7988d4*/
                    v20 = lodLevela + (v19.x - lodLevela) * v16; /*0x7988e3*/
                    *v14 = v20; /*0x7988ef*/
                    v21 = (y - v17) * v16 + v17; /*0x7988ff*/
                    v15 = v19.z; /*0x798907*/
                    v14[1] = v21; /*0x79890b*/
                    v22 = v16 * (v15 - v18) + v18; /*0x79891c*/
                    v14[2] = v22; /*0x798924*/
                  }
                  while ( v4 < v3->leafCount ); /*0x79892d*/
                }
              }
            }
          }
        }
      }
    }
  }
}
