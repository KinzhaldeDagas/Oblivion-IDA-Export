// 2026-05-19 captured 4.x load pass: compact stock tree compute still has no observed 27000/29000/40000 generation consumer. 40000 root-support compatibility remains sidecar parse/sanitize only until a branch-generation translator/replacement exists.
//
// [2026-10-03 generation context] Root CBranch::Compute callsite7A48F9 and recursive79390F are the only direct code references found to7925B0. Plugin captures CSpeedTreeRT from EBX at caller78CD02 (ECX=this CTreeEngine, one float stack argument; ret4) to obtain one immutable sidecar rules snapshot before recursive generation. Settings absent/invalid/unready preserve the original path; invalid retention is explicitly logged.
void __thiscall OB_CTreeEngine_Compute_010201A0(OB_CTreeEngine_010201A0 *this, float leafSizeIncreaseFactor)
{
  OB_CBranch_010201A0 *v3; // eax
  OB_stVectorBillboardLeafPtr_010201A0 *v4; // ebx
  OB_CBranch_010201A0 *v5; // eax
  bool v6; // zf
  int leafLodLevelCount; // edi
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int *end; // edi
  unsigned int v11; // ebp
  void *begin; // ecx
  unsigned int *v13; // edx
  unsigned int v14; // ebx
  double Uniform_010201A0; // st7
  unsigned int flareSeed; // ecx
  unsigned int v17; // edi
  int i; // ebx
  OB_SIdvLeafTexture_010201A0 *v19; // eax
  OB_SIdvLeafTexture_010201A0 *v20; // eax
  OB_SIdvLeafTexture_010201A0 *v21; // eax
  double v22; // st7
  float *p_blossomFlag; // eax
  int treeRandomSeed; // ecx
  int v25; // eax
  unsigned int v26; // eax
  OB_stVector4Iterator_010201A0 a13; // [esp+24h] [ebp-68h]
  float a15; // [esp+2Ch] [ebp-60h]
  unsigned int value; // [esp+44h] [ebp-48h] BYREF
  OB_stVector4Iterator_010201A0 result; // [esp+48h] [ebp-44h] BYREF
  float a10[3]; // [esp+50h] [ebp-3Ch] BYREF
  float a9[9]; // [esp+5Ch] [ebp-30h] BYREF
  int v33; // [esp+88h] [ebp-4h]

  byte_B2B704 = this->parsedLeafLodFlag == 0;   // Stores whether parsedLeafLodFlag is zero. This is the generated explicit-leaf-LOD path condition. /*0x7a4625*/
  v3 = (OB_CBranch_010201A0 *)FormHeapAlloc(0x40u); /*0x7a462a*/
  value = (unsigned int)v3; /*0x7a4632*/
  v4 = 0; /*0x7a4636*/
  v33 = 0; /*0x7a463a*/
  if ( v3 ) /*0x7a463e*/
    v5 = OB_CBranch_ctor_010201A0(v3, 0); /*0x7a4643*/
  else
    v5 = 0; /*0x7a464a*/
  v6 = this->parsedLeafLodFlag == 0; /*0x7a464f*/
  v33 = 0xFFFFFFFF; /*0x7a4655*/
  this->trunkBranch = v5; /*0x7a4659*/
  if ( v6 )
  {
    leafLodLevelCount = this->leafInfo.leafLodLevelCount;// Executed only when parsedLeafLodFlag==0: allocates leafLodLevelCount explicit leaf vectors for generated LODs. /*0x7a465e*/
    v8 = (unsigned __int64)(unsigned int)leafLodLevelCount >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * leafLodLevelCount;
    v9 = FormHeapAlloc(__CFADD__(v8, 4) ? 0xFFFFFFFF : v8 + 4);
    value = v9; /*0x7a468b*/
    v33 = 1; /*0x7a4691*/
    if ( v9 ) /*0x7a4699*/
    {
      v4 = (OB_stVectorBillboardLeafPtr_010201A0 *)(v9 + 4); /*0x7a46a6*/
      *(_DWORD *)v9 = leafLodLevelCount; /*0x7a46ac*/
      ArrayConstructor( /*0x7a46ae*/
        (char *)(v9 + 4),
        0x10u,
        leafLodLevelCount,
        (void (__thiscall *)(char *))FaceGenEgtBasisBank_Construct,
        (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0);// Inside flag-zero allocation path; constructs the generated explicit leaf-vector array.
    }
    v33 = 0xFFFFFFFF; /*0x7a46b3*/
    this->leafLodVectors = v4; /*0x7a46b7*/
  }
  dword_B2B708 = this->branchWindWeightLevel; /*0x7a46c3*/
  OB_CBranch_ClearStaticBranchInfoVector_010201A0(); /*0x7a46c9*/
  end = lastOwner.end; /*0x7a46ce*/
  unk_B429B8 = (int)&this->leafInfo;            // Before branch/leaf generation, publishes &this->leafInfo to the globals consumed by CBranch::MakeLeaf; this is the same struct updated by SetLeafDimmingScalar. /*0x7a46da*/
  v11 = 0; /*0x7a46e0*/
  while ( 1 ) /*0x7a46e2*/
  {
    begin = this->branchInfoVector.begin; /*0x7a46e2*/
    if ( !begin || v11 >= ((char *)this->branchInfoVector.end - (char *)begin) >> 2 ) /*0x7a46f7*/
      break; /*0x7a46f7*/
    v13 = lastOwner.begin; /*0x7a471b*/
    v6 = lastOwner.begin == 0; /*0x7a4721*/
    v14 = *((_DWORD *)this->branchInfoVector.begin + v11); /*0x7a4723*/
    value = v14; /*0x7a4726*/
    if ( v6 || end - v13 >= (unsigned int)(lastOwner.capacity - v13) ) /*0x7a4740*/
    {
      if ( v13 > end ) /*0x7a4754*/
        _invalid_parameter_noinfo(); /*0x7a4756*/
      a13.current = end; /*0x7a4765*/
      a13.owner = &lastOwner; /*0x7a4766*/
      OB_stVector4_InsertOne_010201A0(&lastOwner, &result, a13, &value); /*0x7a476e*/
      end = lastOwner.end; /*0x7a4773*/
      ++v11; /*0x7a4779*/
    }
    else
    {
      *end++ = v14; /*0x7a4742*/
      lastOwner.end = end; /*0x7a4747*/
      ++v11; /*0x7a474d*/
    }
  }
  OB_stRandom_Reseed_010201A0((OB_stRandom_010201A0 *)&this->randomPlaceholderByte, this->treeRandomSeed); /*0x7a478a*/
  *(float *)&value = this->treeSizeVariance + this->treeSizeScalar; /*0x7a479a*/
  a15 = *(float *)&value; /*0x7a47a2*/
  *(float *)&value = this->treeSizeScalar - this->treeSizeVariance; /*0x7a47ac*/
  Uniform_010201A0 = OB_stRandom_GetUniform_010201A0( /*0x7a47b7*/
                       (OB_stRandom_010201A0 *)&this->randomPlaceholderByte,
                       *(float *)&value,
                       a15);
  flareSeed = this->flareSeed; /*0x7a47bc*/
  *(float *)&value = Uniform_010201A0; /*0x7a47bf*/
  srand(flareSeed); /*0x7a47c4*/
  if ( this->treeSizeScalar > 0.0 ) /*0x7a47d6*/
  {
    v17 = 0; /*0x7a47d8*/
    for ( i = 0; ; ++i ) /*0x7a47da*/
    {
      v19 = this->leafInfo.leafTextures.begin; /*0x7a47e0*/
      if ( !v19 || v17 >= this->leafInfo.leafTextures.end - v19 ) /*0x7a4805*/
        break; /*0x7a4805*/
      v20 = this->leafInfo.leafTextures.begin; /*0x7a4807*/
      if ( !v20 || v17 >= this->leafInfo.leafTextures.end - v20 ) /*0x7a482c*/
        _invalid_parameter_noinfo(); /*0x7a482e*/
      v21 = this->leafInfo.leafTextures.begin; /*0x7a4833*/
      v22 = v21[i].textureSize[0]; /*0x7a4839*/
      p_blossomFlag = (float *)&v21[i].blossomFlag; /*0x7a483d*/
      ++v17; /*0x7a4842*/
      p_blossomFlag[0x12] = v22 * this->treeSizeScalar; /*0x7a4848*/
      p_blossomFlag[0x13] = p_blossomFlag[0x10] * this->treeSizeScalar; /*0x7a4851*/
    }
  }
  OB_stRandom_Reseed_010201A0((OB_stRandom_010201A0 *)&this->randomPlaceholderByte, this->treeRandomSeed); /*0x7a485c*/
  OB_CIndexedGeometry_SetNumLodLevels_010201A0(this->branchGeometry, this->branchLodCount); /*0x7a4869*/
  OB_CIndexedGeometry_ResetStripCounter_010201A0(this->branchGeometry, 0); /*0x7a4873*/
  treeRandomSeed = this->treeRandomSeed; /*0x7a487a*/
  a10[0] = 0.0; /*0x7a487d*/
  a10[1] = 0.0; /*0x7a4882*/
  unk_B429C0 = treeRandomSeed; /*0x7a4886*/
  v25 = this->treeRandomSeed; /*0x7a488e*/
  a10[2] = 1.0; /*0x7a4891*/
  a9[0] = 1.0; /*0x7a4898*/
  a9[4] = 1.0; /*0x7a489c*/
  a9[8] = 1.0; /*0x7a48a0*/
  a9[1] = 0.0; /*0x7a48a6*/
  a9[2] = 0.0; /*0x7a48aa*/
  a9[3] = 0.0; /*0x7a48ae*/
  a9[5] = 0.0; /*0x7a48b2*/
  a9[6] = 0.0; /*0x7a48b6*/
  a9[7] = 0.0; /*0x7a48ba*/
  OB_CBranch_Compute_010201A0( /*0x7a48f9*/
    this->trunkBranch,
    v25,
    *(float *)&value,
    0,
    &this->treePosition.x,
    0.0,
    0.0,
    a9,
    a10,
    this->branchGeometry,
    &this->generatedBillboardLeaves,
    1.0,
    v25,
    flt_A30634);
  OB_CTreeEngine_BuildBranchLods_010201A0(this); /*0x7a4900*/
  if ( !this->parsedLeafLodFlag )               // After branch generation, parsedLeafLodFlag==0 selects generated explicit leaf-LOD construction. /*0x7a4905*/
    OB_CTreeEngine_BuildLeafLods_010201A0((int)this, leafSizeIncreaseFactor);// Calls CTreeEngine::BuildLeafLods only for the generated path (no parsed top-level token 7000 cluster). /*0x7a4918*/
  v26 = _time64(0); /*0x7a491f*/
  srand(v26); /*0x7a4925*/
}
