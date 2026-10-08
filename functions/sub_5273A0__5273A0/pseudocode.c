// Native NPC FaceGen randomizer. After independent Gaussian variation of every coefficient, it chooses age [15,65] and relative sex [-2,2] targets in matrix channel 0, then shifts channel 1 by the same delta. Because channels map to independently randomized matrix 0 geometry and matrix 2 texture, their Gaussian control difference survives; independent endpoint clamps can change it further. Prettier Faces restores both control channels to the race-authored projections before this reprojection.
void __thiscall TESNPC_RandomizeFaceGen(TESNPC *this, bool preserveAge, bool preserveSexMorph, bool preserveHairLength)
{
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st6
  double v9; // st5
  double v10; // st3
  bool v11; // c0
  bool v12; // c3
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st7
  double v20; // st5
  double v21; // st7
  double v22; // st7
  bool v23; // zf
  NPC_Unk *unk2; // eax
  NPC_Unk *unk1; // eax
  UInt32 unk6; // edi
  float value; // [esp+8h] [ebp-E8h]
  float ControlValue; // [esp+18h] [ebp-D8h]
  float v29; // [esp+18h] [ebp-D8h]
  float v30; // [esp+18h] [ebp-D8h]
  float initialRelativeSexTexture; // [esp+18h] [ebp-D8h]
  float v32; // [esp+18h] [ebp-D8h]
  float v33; // [esp+18h] [ebp-D8h]
  float randomizedHairLength; // [esp+18h] [ebp-D8h]
  float targetAgeGeometry; // [esp+1Ch] [ebp-D4h]
  float targetRelativeSexGeometry; // [esp+1Ch] [ebp-D4h]
  float targetSexGeometry; // [esp+1Ch] [ebp-D4h]
  float initialAgeGeometry; // [esp+20h] [ebp-D0h]
  float targetAgeTexture; // [esp+20h] [ebp-D0h]
  float initialRelativeSexGeometry; // [esp+20h] [ebp-D0h]
  float targetRelativeSexTexture; // [esp+20h] [ebp-D0h]
  float targetSexTexture; // [esp+20h] [ebp-D0h]
  char randomizedParameters[96]; // [esp+24h] [ebp-CCh] BYREF
  FaceGenHeadParameters outDelta; // [esp+84h] [ebp-6Ch] BYREF
  unsigned int v45; // [esp+ECh] [ebp-4h]

  ArrayConstructor( /*0x5273e0*/
    randomizedParameters,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  v45 = 0; /*0x5273fb*/
  ArrayConstructor( /*0x527406*/
    (char *)&outDelta,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  LOBYTE(v45) = 1; /*0x527410*/
  FaceGenHeadParameters_Initialize(&outDelta); /*0x527418*/
  FaceGen_GenerateRandomizedHeadParameters( /*0x52743b*/
    *(float *)&dword_B361CC[0x42],
    (const FaceGenHeadParameters *)this->member.form.race->unk12,
    (FaceGenHeadParameters *)randomizedParameters);// Native TESNPC_RandomizeFaceGen calls FaceGen_GenerateRandomizedHeadParameters once per Randomize Face activation. PF 1.19.15 optional RandomSeed seeds its private geometry PCG32 stream reproducibly; default remains entropy-seeded. Native Gaussian source at 0x6EE070. Replay also depends on race, sex, active vampirism-selected bank and same settings/click order.
  initialAgeGeometry = FaceGenHeadParameters_GetControlValue((const FaceGenHeadParameters *)randomizedParameters, 0, 0); /*0x52744e*/
  ControlValue = FaceGenHeadParameters_GetControlValue((const FaceGenHeadParameters *)randomizedParameters, 0, 1); /*0x527460*/
  v5 = dbl_A492F0; /*0x527464*/
  if ( preserveAge ) /*0x527475*/
  {
    v6 = initialAgeGeometry; /*0x527477*/
  }
  else
  {
    v6 = (double)Game_RandomLargeInteger(0) / dbl_A3D5A8 * dbl_A3F3D0 + dbl_A492F0;// Native random Age target consumes Game_RandomLargeInteger(0) once when preserveAge=false. PF private Age PCG32 stream may be seeded from optional RandomSeed; repeatable independently of geometry/sex/hair streams. Actual target formula maps 15-bit integer to [15,65]. /*0x5274a5*/
    v5 = dbl_A492F0; /*0x5274a5*/
  }
  targetAgeGeometry = v6; /*0x5274a7*/
  targetAgeTexture = ControlValue - (initialAgeGeometry - targetAgeGeometry); /*0x5274bd*/
  if ( targetAgeGeometry > v5 && flt_A47800 <= (double)targetAgeGeometry ) /*0x5274dd*/
  {
    v9 = flt_A47800; /*0x527527*/
    v8 = flt_A468FC; /*0x527527*/
    v7 = v9; /*0x52752d*/
  }
  else
  {
    v7 = targetAgeGeometry; /*0x5274df*/
    if ( targetAgeGeometry <= v5 ) /*0x5274e8*/
      v7 = flt_A468FC; /*0x5274f0*/
    v8 = flt_A468FC; /*0x5274f6*/
    v9 = flt_A47800; /*0x5274f8*/
  }
  v10 = targetAgeTexture; /*0x5274fa*/
  if ( targetAgeTexture > v5 && v10 >= v9 ) /*0x52750e*/
  {
    v13 = v7; /*0x527535*/
    targetAgeTexture = v9; /*0x527539*/
  }
  else
  {
    v11 = v10 < v5; /*0x527514*/
    v12 = v10 == v5; /*0x527514*/
    v13 = v7; /*0x527518*/
    if ( v11 || v12 ) /*0x52751a*/
      targetAgeTexture = v8; /*0x52751f*/
  }
  value = v13; /*0x527542*/
  FaceGenHeadParameters_SetControlValue((FaceGenHeadParameters *)randomizedParameters, 0, 0, value); /*0x52754e*/
  FaceGenHeadParameters_SetControlValue((FaceGenHeadParameters *)randomizedParameters, 0, 1, targetAgeTexture); /*0x527566*/
  if ( TESActorBase_IsFemale(this) ) /*0x527570*/
    v14 = fConstant_2; /*0x527581*/
  else
    v14 = flt_A53954; /*0x527579*/
  v29 = v14; /*0x527589*/
  initialRelativeSexGeometry = FaceGenHeadParameters_GetControlValue( /*0x5275a2*/
                                 (const FaceGenHeadParameters *)randomizedParameters,
                                 1,
                                 0)
                             - v29;
  if ( TESActorBase_IsFemale(this) ) /*0x5275a6*/
    v15 = fConstant_2; /*0x5275b7*/
  else
    v15 = flt_A53954; /*0x5275af*/
  v30 = v15; /*0x5275bf*/
  initialRelativeSexTexture = FaceGenHeadParameters_GetControlValue( /*0x5275de*/
                                (const FaceGenHeadParameters *)randomizedParameters,
                                1,
                                1)
                            - v30;
  if ( preserveSexMorph ) /*0x5275e2*/
  {
    targetRelativeSexGeometry = initialRelativeSexGeometry; /*0x5275e8*/
    targetRelativeSexTexture = initialRelativeSexTexture; /*0x5275f0*/
    v16 = targetRelativeSexGeometry; /*0x5275f4*/
  }
  else
  {
    targetRelativeSexGeometry = (double)Game_RandomLargeInteger(0) / dbl_A3D5A8 * dbl_A3C800 - dbl_A3D0C0;// Native random relative sex-morph target consumes Game_RandomLargeInteger(0) once when preserveSexMorph=false. PF private sex-morph stream optionally reproducible via RandomSeed, independent of Age and geometry. /*0x52761e*/
    v16 = targetRelativeSexGeometry; /*0x52762e*/
    targetRelativeSexTexture = initialRelativeSexTexture - (initialRelativeSexGeometry - targetRelativeSexGeometry); /*0x527634*/
  }
  v17 = flt_A53954; /*0x527638*/
  if ( v17 < v16 && fConstant_2 <= v16 ) /*0x527654*/
  {
    targetRelativeSexGeometry = fConstant_2; /*0x52766b*/
    v19 = targetRelativeSexGeometry; /*0x52766f*/
  }
  else
  {
    v18 = v16; /*0x527656*/
    v19 = fConstant_2; /*0x527656*/
    if ( v18 <= v17 ) /*0x52765f*/
      targetRelativeSexGeometry = flt_A53954; /*0x527661*/
  }
  v20 = targetRelativeSexTexture; /*0x527671*/
  if ( targetRelativeSexTexture > v17 && v20 >= v19 ) /*0x527685*/
  {
    targetRelativeSexTexture = v19; /*0x52769e*/
  }
  else if ( v17 >= v20 ) /*0x527692*/
  {
    targetRelativeSexTexture = flt_A53954; /*0x527694*/
  }
  if ( TESActorBase_IsFemale(this) ) /*0x5276a8*/
    v21 = fConstant_2; /*0x5276b9*/
  else
    v21 = flt_A53954; /*0x5276b1*/
  v32 = v21; /*0x5276bf*/
  targetSexGeometry = v32 + targetRelativeSexGeometry; /*0x5276cd*/
  if ( TESActorBase_IsFemale(this) ) /*0x5276d1*/
    v22 = fConstant_2; /*0x5276e2*/
  else
    v22 = flt_A53954; /*0x5276da*/
  v33 = v22; /*0x5276e8*/
  targetSexTexture = v33 + targetRelativeSexTexture; /*0x5276f9*/
  FaceGenHeadParameters_SetControlValue((FaceGenHeadParameters *)randomizedParameters, 1, 0, targetSexGeometry); /*0x527709*/
  FaceGenHeadParameters_SetControlValue((FaceGenHeadParameters *)randomizedParameters, 1, 1, targetSexTexture); /*0x527721*/
  if ( !preserveHairLength )                    // Native TESNPC_RandomizeFaceGen gates hair-length sample/storage on !preserveHairLength. True leaves TESNPC+0x1CC unchanged while the same randomized geometry/texture candidate proceeds to delta computation and player refresh. PF 1.19.16 exposes optional PreserveHairLengthOnRandomize; default false preserves native Randomize Face behavior. /*0x527731*/
  {
    randomizedHairLength = (double)Game_RandomLargeInteger(0) / dbl_A3D5A8;// Native hair-length randomization consumes Game_RandomLargeInteger(0) once when preserveHairLength=false and stores normalized float at TESNPC+0x1CC. PF private hair-length stream optionally reproducible via RandomSeed and independent of Age/sex-morph/geometry. /*0x52774b*/
    this->member.hairLength = randomizedHairLength;// Vanilla Randomize Face writes random normalized hair length to TESNPC+0x1CC when preserveHairLength=false. RaceSexMenu_ExecuteRandomizeFace calls with false at 0x5C9D4E. Its subsequent explicit menu sync only writes Age and Complexion, so Hair > Length Tile user0 and menu cached float +0x874 can remain stale until another path updates them. This is a vanilla UI/state divergence supported by code; visual frequency and menu XML trigger timing need runtime confirmation. /*0x527753*/
  }
  FaceGenHeadParameters_ComputeRaceDelta( /*0x52776f*/
    (const FaceGenHeadParameters *)this->member.form.race->unk12,
    (const FaceGenHeadParameters *)randomizedParameters,
    &outDelta);
  v23 = ((int (__thiscall *)(TESNPC *, int))this->vtbl[1].super.super.super.Unk_0B)(this, 0x45) == 0; /*0x527785*/
  unk2 = this->member.unk2; /*0x527787*/
  if ( v23 ) /*0x52778d*/
    unk2 = this->member.unk1; /*0x52778f*/
  if ( FaceGenHeadParameters_Differ(&outDelta, (const FaceGenHeadParameters *)unk2) ) /*0x52779b*/
  {
    v23 = ((int (__thiscall *)(TESNPC *, int))this->vtbl[1].super.super.super.Unk_0B)(this, 0x45) == 0; /*0x5277b5*/
    unk1 = this->member.unk2; /*0x5277b7*/
    if ( v23 ) /*0x5277bd*/
      unk1 = this->member.unk1; /*0x5277bf*/
    FaceGenHeadParameters_Copy(&outDelta, (FaceGenHeadParameters *)unk1); /*0x5277cb*/
    unk6 = this->member.unk6; /*0x5277d0*/
    if ( unk6 ) /*0x5277db*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(unk6 + 4)) ) /*0x5277e1*/
        (**(void (__thiscall ***)(UInt32, int))unk6)(unk6, 1); /*0x5277f7*/
      this->member.unk6 = 0; /*0x5277f9*/
    }
  }
  LOBYTE(v45) = 0; /*0x527814*/
  _LN21((char *)&outDelta, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x52781c*/
  v45 = 0xFFFFFFFF; /*0x52782f*/
  _LN21(randomizedParameters, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x52783a*/
}
