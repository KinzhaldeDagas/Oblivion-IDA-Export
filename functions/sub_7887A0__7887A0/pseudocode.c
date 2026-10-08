// CSpeedTreeRT 360 billboard export wrapper. Calls simple billboard export first, then replaces vertical billboard texcoords only when CSpeedTreeRT+0x54 directional image count is nonzero.
// [2026-10-06 directional billboard] Verified angle mapping uses r=0.5/count then lod=r+(1-2*r)*azimuth/360. INFERRED integration convention: N uniform full-circle views require N+1 logical entries with repeated endpoint to use this resolver continuously. Runtime visual acceptance still pending.
// [2026-10-06 runtime adapter] Corrected embedded+08/+0C member names from misleading leaf labels to billboardMapCount/billboardMapTexcoords8, verified by 0x788979/9EA/A3F and horizontal 0x788597. Adapter v140 uses native 0x788430 for distance and native 0x787220 for directional thresholds, keeping per-instance view state outside shared RT memory. Observed 172 attached instances/431 updates in runtime_v140.log; visual angular/horizontal acceptance remains UNVERIFIED.
void __thiscall CSpeedTreeRT__Get360BillboardGeometry(
        OB_CSpeedTreeRT_010201A0 *this,
        OB_SpeedTreeGeometryOutput_010201A0 *geometry,
        unsigned int flags)
{
  OB_SpeedTreeGeometryOutput_010201A0 *v3; // edi
  unsigned __int16 directional360ImageCount; // bx
  float v6; // edx
  double alphaTestValue; // st6
  int v8; // eax
  double v9; // st5
  __int16 v10; // fps
  double v11; // st7
  double v12; // st6
  double v13; // st5
  int targetAlphaByte; // edx
  double v15; // st5
  double v16; // st4
  double v17; // st7
  __int16 v18; // cx
  __int16 i; // dx
  double v20; // st7
  OB_CSpeedTreeRT_SEmbeddedTexCoords *embeddedTexcoords; // edx
  int v22; // ecx
  int v23; // ecx
  double v24; // st7
  double v25; // st6
  OB_CSpeedTreeRT_SEmbeddedTexCoords *v26; // eax
  double v27; // st7
  double v28; // st5
  double v29; // rt1
  double v30; // st5
  double v31; // st7
  OB_CSpeedTreeRT_SEmbeddedTexCoords *v32; // esi
  double v33; // st5
  float overlapRadius; // [esp+8h] [ebp-60h]
  float transitionFactor; // [esp+Ch] [ebp-5Ch]
  float curveExponent; // [esp+10h] [ebp-58h]
  float targetAlpha; // [esp+14h] [ebp-54h]
  float v38; // [esp+38h] [ebp-30h]
  OB_SpeedTreeGeometryOutput_010201A0 *lowAlpha; // [esp+3Ch] [ebp-2Ch] BYREF
  __int16 highLod[2]; // [esp+40h] [ebp-28h] BYREF
  unsigned __int16 lowLod[2]; // [esp+44h] [ebp-24h] BYREF
  float v42; // [esp+48h] [ebp-20h]
  float lodLevel; // [esp+4Ch] [ebp-1Ch]
  float v44; // [esp+50h] [ebp-18h]
  float v45; // [esp+54h] [ebp-14h]
  int v46; // [esp+58h] [ebp-10h]
  float v47; // [esp+5Ch] [ebp-Ch]
  float v48; // [esp+60h] [ebp-8h]

  v3 = geometry; /*0x7887a5*/
  CSpeedTreeRT__GetSimpleBillboardGeometry(this, geometry); /*0x7887ac*/
  if ( v3->primaryBillboard.active ) /*0x7887b1*/
  {
    directional360ImageCount = this->directional360ImageCount;// 2026-05-26 SpeedTreeOBSE note: 360 exporter activation reads CSpeedTreeRT+0x54 directional image count here. Stock parser/dataflow still has no verified persistent initializer from embedded billboard count; plugin diagnostic may temporarily seed and restore +0x54 only for temp GetGeometry(0x08) logging. /*0x7887bf*/
    if ( directional360ImageCount ) /*0x7887c6*/
    {
      geometry = (OB_SpeedTreeGeometryOutput_010201A0 *)this->targetAlphaByte; /*0x7887d0*/
      v6 = *(float *)&dword_B2B6DC; /*0x7887de*/
      alphaTestValue = v3->primaryBillboard.alphaTestValue; /*0x7887e4*/
      v8 = dword_B2B6E0; /*0x7887ea*/
      v44 = CSpeedTreeRT__s_cameraDirection[0]; /*0x7887ef*/
      v45 = v6; /*0x7887f5*/
      v9 = dbl_A3DDD8; /*0x7887f9*/
      v46 = v8; /*0x7887ff*/
      v38 = (alphaTestValue - (double)(int)geometry) / (v9 - (double)(int)geometry); /*0x788807*/
      v47 = -v44; /*0x788811*/
      v48 = -v6; /*0x78881b*/
      sub_98598A(v47, v48, v10); /*0x788827*/
      *(float *)&geometry = v48 * dbl_A8BA48; /*0x78883a*/
      v11 = *(float *)&geometry; /*0x788848*/
      v12 = dbl_A56CA0; /*0x78884d*/
      if ( *(float *)&geometry < 0.0 ) /*0x788853*/
      {
        *(float *)&geometry = v11 + v12; /*0x788859*/
        v11 = *(float *)&geometry; /*0x788861*/
      }
      *(float *)&geometry = kTerrainLODQuadRayDirectionZ; /*0x78886a*/
      lowAlpha = geometry; /*0x788871*/
      LODWORD(v42) = directional360ImageCount; /*0x788878*/
      v13 = dbl_A2FAA0 / (double)directional360ImageCount; /*0x78888d*/
      targetAlphaByte = this->targetAlphaByte; /*0x788893*/
      *(_DWORD *)highLod = 0xFFFFFFFF; /*0x788897*/
      *(_DWORD *)lowLod = 0xFFFFFFFF; /*0x78889b*/
      v42 = v13; /*0x7888ac*/
      lodLevel = v42; /*0x7888b4*/
      v42 = *(float *)&targetAlphaByte; /*0x7888b8*/
      targetAlpha = (float)targetAlphaByte; /*0x7888c0*/
      curveExponent = this->leafLodCurveExponent; /*0x7888c7*/
      transitionFactor = this->leafTransitionFactor16014; /*0x7888ce*/
      overlapRadius = lodLevel; /*0x7888d2*/
      v15 = lodLevel; /*0x7888d6*/
      lodLevel = 1.0 - lodLevel; /*0x7888e1*/
      v16 = v11; /*0x7888eb*/
      v17 = lodLevel - v15; /*0x7888eb*/
      lodLevel = v16 / v12; /*0x7888f1*/
      lodLevel = v17 * lodLevel + v15; /*0x7888fd*/
      CSpeedTreeRT__GetTransitionValues( /*0x788908*/
        lodLevel,
        directional360ImageCount,
        overlapRadius,
        transitionFactor,
        curveExponent,
        targetAlpha,
        (float *)&geometry,
        (float *)&lowAlpha,
        highLod,
        lowLod);
      v18 = this->directional360ImageCount - highLod[0] - 1;// 2026-05-26 SpeedTreeOBSE note: 360 exporter re-reads CSpeedTreeRT+0x54 for reverse/wrap image-index mapping. Treat +0x54 as unverified persistent count in stock; plugin diagnostic seed is temporary and restored. /*0x788921*/
      for ( i = this->directional360ImageCount - lowLod[0] - 1; /*0x78892f*/
            v18 >= (int)directional360ImageCount;
            v18 -= directional360ImageCount )
      {
        ; /*0x788931*/
      }
      for ( ; i >= (int)directional360ImageCount; i -= directional360ImageCount ) /*0x78893f*/
        ; /*0x788941*/
      if ( (flags & 0x20) != 0 )                // 2026-05-21 360 gap pass: caller flag 0x20 selects one stronger directional image instead of two blended directional billboard entries; no stock caller reaches this branch. /*0x78894f*/
      {
        v20 = *(float *)&geometry; /*0x788955*/
        v3->primaryBillboard.active = 1; /*0x788959*/
        if ( *(float *)&lowAlpha <= v20 ) /*0x78896b*/
        {
          v23 = i; /*0x78898d*/
          embeddedTexcoords = this->embeddedTexcoords; /*0x788990*/
          v22 = 8 * v23; /*0x788993*/
        }
        else
        {
          embeddedTexcoords = this->embeddedTexcoords; /*0x78896d*/
          v22 = 8 * v18; /*0x788973*/
        }
        v3->primaryBillboard.texcoords = &embeddedTexcoords->billboardMapTexcoords8[v22]; /*0x788979*/
        geometry = (OB_SpeedTreeGeometryOutput_010201A0 *)this->targetAlphaByte; /*0x788983*/
        *(float *)&geometry = (float)(int)geometry; /*0x7889ab*/
        v24 = *(float *)&geometry; /*0x7889b0*/
        v25 = *(float *)&geometry; /*0x7889b5*/
        v3->secondaryBillboard.active = 0; /*0x7889b7*/
        v3->primaryBillboard.alphaTestValue = v24 + (dbl_A3DDD8 - v25) * v38; /*0x7889ca*/
      }
      else
      {
        v26 = this->embeddedTexcoords; /*0x7889d8*/
        if ( v26 ) /*0x7889df*/
          v3->primaryBillboard.texcoords = &v26->billboardMapTexcoords8[8 * v18]; /*0x7889ea*/
        else
          v3->primaryBillboard.texcoords = 0; /*0x7889f2*/
        v27 = *(float *)&geometry; /*0x7889f8*/
        v3->primaryBillboard.imageIndex = v18; /*0x7889fc*/
        v28 = dbl_A3DDD8; /*0x788a0b*/
        v3->secondaryBillboard.coords = v3->primaryBillboard.coords; /*0x788a11*/
        v29 = v28; /*0x788a27*/
        v30 = v27 + (v28 - v27) * v38; /*0x788a27*/
        v31 = v29; /*0x788a27*/
        v3->primaryBillboard.alphaTestValue = v30; /*0x788a29*/
        v32 = this->embeddedTexcoords; /*0x788a2f*/
        if ( v32 ) /*0x788a34*/
          v3->secondaryBillboard.texcoords = &v32->billboardMapTexcoords8[8 * i]; /*0x788a3f*/
        else
          v3->secondaryBillboard.texcoords = 0; /*0x788a47*/
        v33 = *(float *)&lowAlpha; /*0x788a4d*/
        v3->secondaryBillboard.imageIndex = i; /*0x788a51*/
        v3->secondaryBillboard.active = 1; /*0x788a5a*/
        v3->secondaryBillboard.alphaTestValue = v33 + v38 * (v31 - v33); /*0x788a6a*/
      }
    }
  }
}
