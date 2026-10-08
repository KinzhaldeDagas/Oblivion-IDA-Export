// Compact stock SIdvBranchInfo constructor. Initializes core branch fields, diffuse texcoord controls, flare defaults at +0x24..+0x4C, and default spline pointers.
OB_SIdvBranchInfo_010201A0 *__thiscall OB_SIdvBranchInfo_ctor_010201A0(OB_SIdvBranchInfo_010201A0 *this)
{
  double v2; // st7
  double v3; // st5
  double v4; // st5
  OB_stBezierSpline_010201A0 *v5; // eax
  OB_stBezierSpline_010201A0 *v6; // eax
  OB_stBezierSpline_010201A0 *v7; // eax
  OB_stBezierSpline_010201A0 *v8; // eax
  OB_stBezierSpline_010201A0 *v9; // eax
  OB_stBezierSpline_010201A0 *v10; // eax
  OB_stBezierSpline_010201A0 *v11; // eax
  OB_stBezierSpline_010201A0 *v12; // eax
  OB_stBezierSpline_010201A0 *v13; // eax
  OB_stBezierSpline_010201A0 *v14; // eax
  OB_stBezierSpline_010201A0 *v15; // eax

  v2 = flt_A3744C; /*0x7a7636*/
  this->firstBranch = flt_A3744C; /*0x7a763e*/
  this->crossSectionSegments = 6; /*0x7a7645*/
  this->lastBranch = 1.0; /*0x7a764b*/
  this->segments = 3; /*0x7a764e*/
  this->diffuseSTile = 1.0; /*0x7a7655*/
  this->diffuseSTileAbsolute = 1; /*0x7a7658*/
  this->diffuseTTile = 1.0; /*0x7a765c*/
  this->diffuseTTileAbsolute = 0; /*0x7a765f*/
  this->oldDiffuseRandomTFlag = 0; /*0x7a7664*/
  this->frequency = v2; /*0x7a7667*/
  this->numFlares = 0; /*0x7a766a*/
  this->disturbanceProfile = 0; /*0x7a766f*/
  this->oldDiffuseTwist = 0.0; /*0x7a7672*/
  this->gravityProfile = 0; /*0x7a7675*/
  this->flexibilityProfile = 0; /*0x7a767a*/
  this->segmentPackingExponent = 1.0; /*0x7a767d*/
  this->flexibilityScaleProfile = 0; /*0x7a7680*/
  this->flareBalance = 1.0; /*0x7a7683*/
  this->lengthProfile = 0; /*0x7a7686*/
  v3 = flt_A37CC8; /*0x7a7689*/
  this->radiusProfile = 0; /*0x7a768f*/
  this->radialInfluence = v3; /*0x7a7692*/
  this->radiusScaleProfile = 0; /*0x7a7695*/
  v4 = flt_A31C80; /*0x7a7698*/
  this->startAngleProfile = 0; /*0x7a769e*/
  this->radialInfluenceVariance = v4; /*0x7a76a1*/
  this->angleProfile = 0; /*0x7a76a4*/
  this->radialExponent = 1.0; /*0x7a76a7*/
  this->radialDistance = kHeadBodyNormalMatchRadius; /*0x7a76b0*/
  this->radialVariance = flt_A41304; /*0x7a76b9*/
  this->lengthDistance = v2; /*0x7a76be*/
  this->lengthVariance = kFaceEarNormalMatchRadius; /*0x7a76c7*/
  this->lengthExponent = 1.0; /*0x7a76ca*/
  v5 = (OB_stBezierSpline_010201A0 *)FormHeapAlloc(0x5Cu); /*0x7a76cd*/
  if ( v5 ) /*0x7a76df*/
    v6 = OB_StBezierSpline_DefaultCtor_010201A0(v5); /*0x7a76e3*/
  else
    v6 = 0; /*0x7a76ea*/
  this->flexibilityProfile = v6; /*0x7a76f5*/
  v7 = (OB_stBezierSpline_010201A0 *)FormHeapAlloc(0x5Cu); /*0x7a76f8*/
  if ( v7 ) /*0x7a770e*/
    v8 = OB_StBezierSpline_DefaultCtor_010201A0(v7); /*0x7a7712*/
  else
    v8 = 0; /*0x7a7719*/
  this->gravityProfile = v8; /*0x7a7721*/
  v9 = (OB_stBezierSpline_010201A0 *)FormHeapAlloc(0x5Cu); /*0x7a7724*/
  if ( v9 ) /*0x7a773a*/
    v10 = OB_StBezierSpline_DefaultCtor_010201A0(v9); /*0x7a773e*/
  else
    v10 = 0; /*0x7a7745*/
  this->radiusProfile = v10; /*0x7a774d*/
  v11 = (OB_stBezierSpline_010201A0 *)FormHeapAlloc(0x5Cu); /*0x7a7750*/
  if ( v11 ) /*0x7a7766*/
    v12 = OB_StBezierSpline_DefaultCtor_010201A0(v11); /*0x7a776a*/
  else
    v12 = 0; /*0x7a7771*/
  this->startAngleProfile = v12; /*0x7a7779*/
  v13 = (OB_stBezierSpline_010201A0 *)FormHeapAlloc(0x5Cu); /*0x7a777c*/
  if ( v13 ) /*0x7a7792*/
    v14 = OB_StBezierSpline_DefaultCtor_010201A0(v13); /*0x7a7796*/
  else
    v14 = 0; /*0x7a779d*/
  this->radiusScaleProfile = v14; /*0x7a77a5*/
  v15 = (OB_stBezierSpline_010201A0 *)FormHeapAlloc(0x5Cu); /*0x7a77a8*/
  if ( v15 ) /*0x7a77be*/
    this->lengthProfile = OB_StBezierSpline_DefaultCtor_010201A0(v15); /*0x7a77c7*/
  else
    this->lengthProfile = 0; /*0x7a77df*/
  return this; /*0x7a77cc*/
}
