//
//
// [2026-10-02 source comparison] Verified divergence from RT4.1 LeafGeometry.cpp Update: Oblivion 0x798ADC..0x798AE5 mirrors origin X for even texture slots (4.1 does so for odd slots). Oblivion 0x798B90..0x798C62 copies raw XYZ corners without the 4.1 RockLeaf transform. Fourth/W floats are not written here. The prior camera-facing entry comment was corrected: camera angles are not consumed to rotate these corners. Shader-side processing remains authoritative for final pose.
void __thiscall OB_CLeafGeometry_Update_010201A0(
        OB_CLeafGeometry_010201A0 *this,
        OB_SLeafGeometryOutput_010201A0 *outLeaf,
        unsigned __int16 lodLevel,
        float cameraAzimuthDegrees,
        float cameraPitchDegrees,
        float leafSizeIncreaseFactor)
{
  OB_SLodGeometry_010201A0 *lodGeometryRecords; // ebp
  OB_CWindEngine_010201A0 *windEngine; // eax
  bool v9; // zf
  OB_SLodGeometry_010201A0 *v10; // ebp
  int v11; // esi
  double v12; // st7
  int rockingGroupCount; // ebp
  double v14; // st6
  double v15; // st5
  double v16; // rt0
  OB_stVec3_010201A0 *leafTextureOrigins; // eax
  unsigned int v18; // ecx
  OB_stVec3_010201A0 *v19; // eax
  int v20; // ecx
  double v21; // rt2
  double v22; // st5
  double v23; // st6
  float *v24; // eax
  float v25; // [esp+8h] [ebp-9Ch]
  float x; // [esp+Ch] [ebp-98h]
  float y; // [esp+10h] [ebp-94h]
  float v28; // [esp+18h] [ebp-8Ch] BYREF
  float v29; // [esp+1Ch] [ebp-88h]
  float v30; // [esp+20h] [ebp-84h]
  float v31; // [esp+24h] [ebp-80h]
  float v32; // [esp+28h] [ebp-7Ch]
  float v33; // [esp+2Ch] [ebp-78h]
  float v34; // [esp+30h] [ebp-74h]
  float v35; // [esp+34h] [ebp-70h]
  float v36; // [esp+38h] [ebp-6Ch]
  float v37; // [esp+3Ch] [ebp-68h]
  float i; // [esp+40h] [ebp-64h]
  float v39; // [esp+44h] [ebp-60h]
  OB_SLodGeometry_010201A0 *v40; // [esp+48h] [ebp-5Ch]
  float v41; // [esp+4Ch] [ebp-58h] BYREF
  float v42; // [esp+50h] [ebp-54h]
  float v43; // [esp+54h] [ebp-50h]
  float v44; // [esp+58h] [ebp-4Ch]
  float v45; // [esp+5Ch] [ebp-48h]
  float v46; // [esp+60h] [ebp-44h]
  float v47; // [esp+64h] [ebp-40h]
  float v48; // [esp+68h] [ebp-3Ch]
  float v49; // [esp+6Ch] [ebp-38h]
  float v50; // [esp+70h] [ebp-34h]
  float v51; // [esp+74h] [ebp-30h]
  float v52; // [esp+78h] [ebp-2Ch]
  int v53; // [esp+7Ch] [ebp-28h]
  float v54; // [esp+84h] [ebp-20h]
  float v55; // [esp+88h] [ebp-1Ch]
  float v56; // [esp+90h] [ebp-14h]
  float v57; // [esp+A0h] [ebp-4h]

  lodGeometryRecords = this->lodGeometryRecords; /*0x7989ba*/
  if ( lodGeometryRecords ) /*0x7989bf*/
  {
    if ( lodLevel < this->leafLodCount ) /*0x7989d1*/
    {
      if ( this->perLodLeafCardVertexTables ) /*0x7989d7*/
      {
        if ( this->leafTextureOrigins ) /*0x7989e1*/
        {
          if ( this->leafTextureDimensions ) /*0x7989eb*/
          {
            windEngine = this->windEngine; /*0x7989f5*/
            if ( windEngine ) /*0x7989fa*/
            {
              if ( this->timeOffsets ) /*0x798a00*/
              {
                v9 = lodGeometryRecords[lodLevel].generatedCardTableValid == 0;// Dirty test for generated leaf-card vertex table at SLodGeometry+0x3C. Regeneration below writes vertex data and sets this byte, but never rewrites +0x0C or +0x10. /*0x798a15*/
                v10 = &lodGeometryRecords[lodLevel]; /*0x798a1a*/
                v53 = lodLevel; /*0x798a1e*/
                v40 = v10; /*0x798a25*/
                if ( v9 ) /*0x798a29*/
                {
                  if ( windEngine->leafWindMethod == 1 ) /*0x798a33*/
                    OB_CLeafGeometry_ComputeWindEffect_010201A0(this, lodLevel); /*0x798a38*/
                  v25 = 1.0; /*0x798a42*/
                  if ( lodLevel ) /*0x798a46*/
                    v25 = (double)v53 * leafSizeIncreaseFactor + dbl_A2F928; /*0x798a5c*/
                  sub_401080(&v28, 0xC, 4, (void *(__thiscall *)(void *))OB_stVec3_ctor_zero_010201A0); /*0x798a6e*/
                  sub_401080(&v41, 0xC, 4, (void *(__thiscall *)(void *))OB_stVec3_ctor_zero_010201A0); /*0x798a81*/
                  v11 = 0; /*0x798a8c*/
                  if ( 2 * this->leafTextureCount > 0 ) /*0x798a90*/
                  {
                    v12 = v25; /*0x798a96*/
                    rockingGroupCount = this->rockingGroupCount; /*0x798a9a*/
                    v14 = 0.0; /*0x798a9e*/
                    v15 = 1.0; /*0x798aa0*/
                    while ( 1 ) /*0x798ab0*/
                    {
                      leafTextureOrigins = this->leafTextureOrigins; /*0x798ab0*/
                      v18 = v11 / 2; /*0x798ab5*/
                      x = leafTextureOrigins[v18].x; /*0x798abc*/
                      y = leafTextureOrigins[v18].y; /*0x798ac6*/
                      if ( !(v11 % 2) ) /*0x798adc*/
                        x = v15 - x; /*0x798ae5*/
                      v19 = &this->leafTextureDimensions[v18]; /*0x798af2*/
                      v20 = 0; /*0x798af6*/
                      v54 = (v15 - x) * v12 * v19->x; /*0x798afe*/
                      v55 = (v15 - y) * v12 * v19->y; /*0x798b12*/
                      v56 = -(x * v19->x * v12); /*0x798b25*/
                      v57 = -(y * v19->y * v12); /*0x798b33*/
                      v21 = v15; /*0x798b3a*/
                      v22 = v14; /*0x798b3a*/
                      v23 = v21; /*0x798b3a*/
                      v28 = v22; /*0x798b3c*/
                      v29 = v54; /*0x798b47*/
                      v30 = v55; /*0x798b52*/
                      v31 = v22; /*0x798b58*/
                      v32 = v56; /*0x798b63*/
                      v35 = v56; /*0x798b67*/
                      v33 = v55; /*0x798b6d*/
                      v34 = v22; /*0x798b73*/
                      v36 = v57; /*0x798b7e*/
                      v39 = v57; /*0x798b82*/
                      v37 = v34; /*0x798b86*/
                      for ( i = v54; v20 < rockingGroupCount; rockingGroupCount = this->rockingGroupCount ) /*0x798b90*/
                      {
                        v42 = v29; /*0x798b9a*/
                        v43 = v30; /*0x798ba2*/
                        v44 = v31; /*0x798baa*/
                        v45 = v32; /*0x798bb2*/
                        v46 = v33; /*0x798bba*/
                        v47 = v34; /*0x798bc2*/
                        v48 = v35; /*0x798bca*/
                        v49 = v36; /*0x798bd2*/
                        v50 = v37; /*0x798bde*/
                        v51 = i; /*0x798be6*/
                        v52 = v39; /*0x798bee*/
                        v41 = v28; /*0x798bf5*/
                        v24 = &this->perLodLeafCardVertexTables[lodLevel][0x10 * (v20 + v11 * rockingGroupCount)]; /*0x798c06*/
                        ++v20; /*0x798c0a*/
                        *v24 = v28; /*0x798c0d*/
                        v24[1] = v42; /*0x798c13*/
                        v24[2] = v43; /*0x798c1a*/
                        v24[4] = v44; /*0x798c21*/
                        v24[5] = v45; /*0x798c28*/
                        v24[6] = v46; /*0x798c2f*/
                        v24 += 4; /*0x798c36*/
                        v24[4] = v47; /*0x798c39*/
                        v24 += 4; /*0x798c40*/
                        v24[1] = v48; /*0x798c43*/
                        v24[2] = v49; /*0x798c4a*/
                        v24[4] = v50; /*0x798c51*/
                        v24[5] = v51; /*0x798c58*/
                        v24[6] = v52; /*0x798c62*/
                      }
                      if ( ++v11 >= 2 * this->leafTextureCount ) /*0x798c7c*/
                        break; /*0x798c7c*/
                      v16 = v22; /*0x798aa4*/
                      v15 = v23; /*0x798aa4*/
                      v14 = v16; /*0x798aa4*/
                    }
                    v10 = v40; /*0x798c82*/
                  }
                  v10->generatedCardTableValid = 1;// Marks only the generated vertex table valid after refresh. Per-card alternate texture indices remain the post-Compute allocation created by InitLods. /*0x798c8c*/
                }
                qmemcpy(outLeaf, v10, sizeof(OB_SLeafGeometryOutput_010201A0)); /*0x798ca0*/
                outLeaf->discreteLodLevel = lodLevel; /*0x798ca2*/
                outLeaf->active = 1; /*0x798ca5*/
              }
            }
          }
        }
      }
    }
  }
}
