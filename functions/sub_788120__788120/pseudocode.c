// Oblivion SpeedTree leaf geometry export path. For the current/discrete path it calls the leaf LOD selector at 0x787CD0 with the -1.0 sentinel, so byte_B4297C can append a synthetic billboard level outside the real leaf geometry range.
// local variable allocation has failed, the output may be wrong!
void __thiscall CSpeedTreeRT__GetLeafGeometry(
        OB_CSpeedTreeRT_010201A0 *this,
        OB_SpeedTreeGeometryOutput_010201A0 *geometry,
        __int16 lodLevel)
{
  int leafLodLevelCount; // edi
  BOOL v5; // ecx
  unsigned __int16 v6; // bx
  int v7; // edx
  float v8; // ecx
  int v9; // edx
  double v10; // st7
  __int16 v11; // fps
  unsigned __int16 v12; // bp
  bool v13; // zf
  int leafLodTransitionMethod; // eax
  OB_STreeInstanceData *instanceData; // eax
  double currentLod; // st7
  unsigned __int16 v18; // dx
  unsigned __int8 v19; // cl
  unsigned __int16 v20; // dx
  unsigned __int8 v21; // cl
  unsigned __int16 DiscreteLeafLodLevel; // ax
  float targetAlpha; // [esp+14h] [ebp-4Ch]
  float cameraPitchDegrees; // [esp+38h] [ebp-28h]
  float cameraAzimuthDegrees; // [esp+3Ch] [ebp-24h]
  float highAlpha; // [esp+40h] [ebp-20h] BYREF
  unsigned __int16 lowLod[2]; // [esp+44h] [ebp-1Ch] BYREF
  float lowAlpha; // [esp+48h] [ebp-18h] BYREF
  int targetAlphaByte; // [esp+4Ch] [ebp-14h]
  unsigned __int16 lodCount[2]; // [esp+50h] [ebp-10h]
  float v31; // [esp+54h] [ebp-Ch]
  float v32; // [esp+58h] [ebp-8h]
  float v33; // [esp+5Ch] [ebp-4h]
  int geometryOutput; // [esp+64h] [ebp+4h]
  float geometryOutputa; // [esp+64h] [ebp+4h]
  int geometryOutputb; // [esp+64h] [ebp+4h]

  leafLodLevelCount = this->treeEngine->?; /*0x788133*/
  v5 = CSpeedTreeRT__s_dropToBillboard; /*0x78813e*/
  v6 = leafLodLevelCount; /*0x788141*/
  v31 = CSpeedTreeRT__s_cameraDirection[0]; /*0x788144*/
  *(_DWORD *)lowLod = (unsigned __int16)leafLodLevelCount; /*0x788148*/
  v7 = (unsigned __int16)(leafLodLevelCount + v5); /*0x78814f*/
  v8 = *(float *)&dword_B2B6DC; /*0x788152*/
  *(_DWORD *)lodCount = v7; /*0x788158*/
  v9 = dword_B2B6E0; /*0x78815c*/
  v32 = v8; /*0x788162*/
  v33 = *(float *)&v9; /*0x788166*/
  v10 = v8; /*0x78816a*/
  sub_98598A(v31, v8, v11); /*0x788172*/
  lowAlpha = v10; /*0x788177*/
  cameraAzimuthDegrees = lowAlpha * dbl_A8BA48; /*0x788185*/
  lowAlpha = asin(v33); /*0x788192*/
  v12 = 0; /*0x78819a*/
  v13 = (_WORD)leafLodLevelCount == 0; /*0x7881a2*/
  cameraPitchDegrees = lowAlpha * dbl_A8BA50; /*0x7881a9*/
  if ( !v13 ) /*0x7881ad*/
  {
    do /*0x7881e1*/
      OB_CLeafGeometry_Update_010201A0( /*0x7881d0*/
        this->leafGeometry,
        &geometry->primaryLeaves,
        v12++,
        cameraAzimuthDegrees,
        cameraPitchDegrees,
        this->leafSizeIncreaseFactor);          // Before exporting the requested record, refreshes/copies every leaf LOD through 0x7989B0 using mutable camera-direction globals B2B6D8/B2B6DC/B2B6E0 and leaf-size factor. Dirty refresh changes the generated vertex table and +0x3C valid byte, not SLodGeometry+0x0C card count or +0x10 alternate-index array.
    while ( v12 < LOWORD(this->treeEngine->?) ); /*0x7881e1*/
    v6 = lowLod[0]; /*0x7881e3*/
  }
  if ( lodLevel <= (__int16)0xFFFFFFFF )        // Signed leafLod dispatch: only negative/sentinel values enter runtime LOD-selection logic. Explicit nonnegative builder/fallback LOD indices go directly to 0x788214. /*0x7881f1*/
  {
    leafLodTransitionMethod = this->leafLodTransitionMethod;// Runtime/mutable LOD state is consulted only for sentinel leafLod: CSpeedTreeRT+0x18 transition method, per-instance current LOD at instanceData+0x10 (or base engine fallback), +0x1C/+0x20/+0x28 transition scalars, and +0x44 target alpha. /*0x78823d*/
    if ( leafLodTransitionMethod == 1 ) /*0x788243*/
    {
      instanceData = this->instanceData; /*0x78824f*/
      highAlpha = kTerrainLODQuadRayDirectionZ; /*0x788254*/
      lowAlpha = highAlpha; /*0x788258*/
      *(_DWORD *)&lodLevel = 0xFFFFFFFF; /*0x78825c*/
      *(_DWORD *)lowLod = 0xFFFFFFFF; /*0x788260*/
      if ( instanceData ) /*0x788264*/
        currentLod = instanceData->lodLevel; /*0x788266*/
      else
        currentLod = this->treeEngine->currentLod; /*0x78826d*/
      geometryOutputa = currentLod; /*0x788274*/
      targetAlphaByte = this->targetAlphaByte; /*0x788290*/
      targetAlpha = (float)targetAlphaByte; /*0x78829b*/
      CSpeedTreeRT__GetTransitionValues( /*0x7882bc*/
        geometryOutputa,
        lodCount[0],
        this->leafLodTransitionRadius,
        this->leafTransitionFactor16014,
        this->leafLodCurveExponent,
        targetAlpha,
        &highAlpha,
        &lowAlpha,
        &lodLevel,
        lowLod);
      v18 = lodLevel; /*0x7882c1*/
      v19 = lodLevel != (__int16)0xFFFF && lodLevel < (int)v6; /*0x7882de*/
      geometry->primaryLeaves.active = v19; /*0x7882e5*/
      if ( v19 ) /*0x7882e7*/
      {
        OB_CLeafGeometry_SmallUpdate_010201A0( /*0x788307*/
          this->leafGeometry,
          &geometry->primaryLeaves,
          v18,
          cameraAzimuthDegrees,
          cameraPitchDegrees,
          this->leafSizeIncreaseFactor);
        geometry->primaryLeaves.lodFadeOrRockScalar = highAlpha; /*0x788310*/
      }
      v20 = lowLod[0]; /*0x788313*/
      v21 = lowLod[0] != 0xFFFF && (__int16)lowLod[0] < (int)v6; /*0x78832d*/
      geometry->secondaryLeaves.active = v21; /*0x788337*/
      if ( v21 ) /*0x788339*/
      {
        OB_CLeafGeometry_SmallUpdate_010201A0( /*0x78835d*/
          this->leafGeometry,
          &geometry->secondaryLeaves,
          v20,
          cameraAzimuthDegrees,
          cameraPitchDegrees,
          this->leafSizeIncreaseFactor);
        geometry->secondaryLeaves.lodFadeOrRockScalar = lowAlpha; /*0x788366*/
      }
    }
    else if ( leafLodTransitionMethod == 3 ) /*0x788379*/
    {
      OB_CLeafGeometry_SmallUpdate_010201A0( /*0x78839d*/
        this->leafGeometry,
        &geometry->primaryLeaves,
        0,
        cameraAzimuthDegrees,
        cameraPitchDegrees,
        this->leafSizeIncreaseFactor);
      geometry->primaryLeaves.active = 1; /*0x7883a2*/
      geometryOutputb = this->targetAlphaByte; /*0x7883aa*/
      geometry->secondaryLeaves.active = 0; /*0x7883ae*/
      geometry->primaryLeaves.lodFadeOrRockScalar = (float)geometryOutputb; /*0x7883b9*/
    }
    else
    {
      DiscreteLeafLodLevel = CSpeedTreeRT__GetDiscreteLeafLodLevel(this, kTerrainLODQuadRayDirectionZ); /*0x7883d2*/
      if ( DiscreteLeafLodLevel < LOWORD(this->treeEngine->?) ) /*0x7883e3*/
      {
        OB_CLeafGeometry_SmallUpdate_010201A0( /*0x788406*/
          this->leafGeometry,
          &geometry->primaryLeaves,
          DiscreteLeafLodLevel,
          cameraAzimuthDegrees,
          cameraPitchDegrees,
          this->leafSizeIncreaseFactor);
        geometry->primaryLeaves.active = 1; /*0x78840b*/
        geometry->primaryLeaves.lodFadeOrRockScalar = (float)this->targetAlphaByte; /*0x78841b*/
      }
      geometry->secondaryLeaves.active = 0; /*0x78841e*/
    }
  }
  else
  {
    OB_CLeafGeometry_SmallUpdate_010201A0( /*0x788214*/
      this->leafGeometry,
      &geometry->primaryLeaves,
      lodLevel,
      cameraAzimuthDegrees,
      cameraPitchDegrees,
      this->leafSizeIncreaseFactor);            // Explicit leafLod path copies exactly one persistent 0x44-byte SLodGeometry record via 0x798630. No current instance LOD, transition method, or alpha resolver participates.
    geometry->primaryLeaves.active = 1; /*0x788219*/
    geometryOutput = this->targetAlphaByte; /*0x788221*/
    geometry->secondaryLeaves.active = 0; /*0x788225*/
    geometry->primaryLeaves.lodFadeOrRockScalar = (float)geometryOutput; /*0x788230*/
  }
}
