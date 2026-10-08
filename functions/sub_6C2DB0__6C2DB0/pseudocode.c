unsigned int sub_6C2DB0()
{
  unsigned int result; // eax

  if ( !LOBYTE(qword_B3BB2C[0x3AB]) ) /*0x6c2db0*/
  {
    LOBYTE(qword_B3BB2C[0x3AB]) = 1; /*0x6c2dc7*/
    sub_712590((int)"NiAlphaController", (TESForm *)sub_6D23D0); /*0x6c2dce*/
    sub_712590((int)"NiBlendAccumTransformInterpolator", (TESForm *)sub_6CE690); /*0x6c2ddd*/
    sub_712590((int)"NiBlendBoolInterpolator", (TESForm *)sub_6EB4C0); /*0x6c2dec*/
    sub_712590((int)"NiBlendColorInterpolator", (TESForm *)sub_6EAE90); /*0x6c2dfb*/
    sub_712590((int)"NiBlendFloatInterpolator", (TESForm *)sub_6D24E0); /*0x6c2e0a*/
    sub_712590((int)"NiBlendPoint3Interpolator", (TESForm *)sub_6EA8C0); /*0x6c2e19*/
    sub_712590((int)"NiBlendQuaternionInterpolator", (TESForm *)sub_6EA230); /*0x6c2e28*/
    sub_712590((int)"NiBlendTransformInterpolator", (TESForm *)sub_6CBCE0); /*0x6c2e37*/
    sub_712590((int)"NiBoneLODController", (TESForm *)sub_6E9030); /*0x6c2e49*/
    sub_712590((int)"NiBoolData", (TESForm *)sub_6E8740); /*0x6c2e58*/
    sub_712590((int)"NiBoolInterpolator", (TESForm *)sub_6E8370); /*0x6c2e67*/
    sub_712590((int)"NiBoolTimelineInterpolator", (TESForm *)sub_6E7E70); /*0x6c2e76*/
    sub_712590((int)"NiBSplineBasisData", (TESForm *)sub_6E7990); /*0x6c2e85*/
    sub_712590((int)"NiBSplineData", (TESForm *)sub_6E71E0); /*0x6c2e94*/
    sub_712590((int)"NiBSplineColorInterpolator", (TESForm *)sub_6E67E0); /*0x6c2ea3*/
    sub_712590((int)"NiBSplineCompColorInterpolator", (TESForm *)sub_6E6570); /*0x6c2eb2*/
    sub_712590((int)"NiBSplineCompFloatInterpolator", (TESForm *)sub_6E6220); /*0x6c2ec4*/
    sub_712590((int)"NiBSplineCompPoint3Interpolator", (TESForm *)sub_6E5F40); /*0x6c2ed3*/
    sub_712590((int)"NiBSplineCompTransformInterpolator", (TESForm *)sub_6E5BF0); /*0x6c2ee2*/
    sub_712590((int)"NiBSplineFloatInterpolator", (TESForm *)sub_6E5550); /*0x6c2ef1*/
    sub_712590((int)"NiBSplinePoint3Interpolator", (TESForm *)sub_6E5160); /*0x6c2f00*/
    sub_712590((int)"NiBSplineTransformInterpolator", (TESForm *)sub_6E4B60); /*0x6c2f0f*/
    sub_712590((int)"NiColorData", (TESForm *)sub_6E4520); /*0x6c2f1e*/
    sub_712590((int)"NiColorExtraDataController", (TESForm *)sub_6E4090); /*0x6c2f2d*/
    sub_712590((int)"NiColorInterpolator", (TESForm *)sub_6E3CD0); /*0x6c2f3f*/
    sub_712590((int)"NiControllerManager", (TESForm *)sub_6C5BB0); /*0x6c2f4e*/
    sub_712590((int)"NiControllerSequence", (TESForm *)sub_6C7840); /*0x6c2f5d*/
    sub_712590((int)"NiFlipController", (TESForm *)sub_6D21D0); /*0x6c2f6c*/
    sub_712590((int)"NiFloatData", (TESForm *)sub_6E3440); /*0x6c2f7b*/
    sub_712590((int)"NiFloatExtraDataController", (TESForm *)sub_6E3010); /*0x6c2f8a*/
    sub_712590((int)"NiFloatInterpolator", (TESForm *)sub_6D2DD0); /*0x6c2f99*/
    sub_712590((int)"NiFloatsExtraDataController", (TESForm *)sub_6E2BC0); /*0x6c2fa8*/
    sub_712590((int)"NiFloatsExtraDataPoint3Controller", (TESForm *)sub_6E26A0); /*0x6c2fba*/
    sub_712590((int)"NiGeomMorpherController", (TESForm *)sub_6D1520); /*0x6c2fc9*/
    sub_712590((int)"NiKeyframeController", (TESForm *)sub_6C3F00); /*0x6c2fd8*/
    sub_712590((int)"NiKeyframeData", (TESForm *)sub_6E1C00); /*0x6c2fe7*/
    sub_712590((int)"NiKeyframeManager", (TESForm *)sub_6E1A00); /*0x6c2ff6*/
    sub_712590((int)"NiLightColorController", (TESForm *)sub_6E0E20); /*0x6c3005*/
    sub_712590((int)"NiLightDimmerController", (TESForm *)sub_6E08F0); /*0x6c3014*/
    sub_712590((int)"NiLookAtController", (TESForm *)sub_6E05B0); /*0x6c3023*/
    sub_712590((int)"NiLookAtInterpolator", (TESForm *)sub_6DFD70); /*0x6c3035*/
    sub_712590((int)"NiMaterialColorController", (TESForm *)sub_6DEF40); /*0x6c3044*/
    sub_712590((int)"NiMorphData", (TESForm *)sub_6DDF90); /*0x6c3053*/
    sub_712590((int)"NiMultiTargetTransformController", (TESForm *)sub_6D0260); /*0x6c3062*/
    sub_712590((int)"NiPathController", (TESForm *)sub_6DDDC0); /*0x6c3071*/
    sub_712590((int)"NiPathInterpolator", (TESForm *)sub_6DC5E0); /*0x6c3080*/
    sub_712590((int)"NiPoint3Interpolator", (TESForm *)sub_6DA740); /*0x6c308f*/
    sub_712590((int)"NiPosData", (TESForm *)sub_6D9D40); /*0x6c309e*/
    sub_712590((int)"NiQuaternionInterpolator", (TESForm *)sub_6D9980); /*0x6c30b0*/
    sub_712590((int)"NiRollController", (TESForm *)sub_6D9310); /*0x6c30bf*/
    sub_712590((int)"NiRotData", (TESForm *)sub_6D8CF0); /*0x6c30ce*/
    sub_712590((int)"NiSequence", (TESForm *)sub_6D84A0); /*0x6c30dd*/
    sub_712590((int)"NiSequenceStreamHelper", (TESForm *)sub_6D7D90); /*0x6c30ec*/
    sub_712590((int)"NiStringPalette", (TESForm *)sub_6D7AD0); /*0x6c30fb*/
    sub_712590((int)"NiTextKeyExtraData", (TESForm *)sub_6D7450); /*0x6c310a*/
    sub_712590((int)"NiTextureTransformController", (TESForm *)sub_6D7320); /*0x6c3119*/
    sub_712590((int)"NiTransformController", (TESForm *)sub_6C3F00); /*0x6c312b*/
    sub_712590((int)"NiTransformData", (TESForm *)sub_6E1C00); /*0x6c313a*/
    sub_712590((int)"NiTransformInterpolator", (TESForm *)NiTransformInterpolator_CreateDefault); /*0x6c3149*/
    sub_712590((int)"NiUVController", (TESForm *)sub_6D56A0); /*0x6c3158*/
    sub_712590((int)"NiUVData", (TESForm *)sub_6D4800); /*0x6c3167*/
    sub_712590((int)"NiVisController", (TESForm *)sub_6D4620); /*0x6c3176*/
    sub_712590((int)"NiVisData", (TESForm *)sub_6E8740); /*0x6c3185*/
    return sub_714680((int)sub_6D43E0); /*0x6c318f*/
  }
  return result; /*0x6c3197*/
}
