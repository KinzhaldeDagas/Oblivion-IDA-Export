void sub_6C31F0()
{
  char *v0; // eax
  char *v1; // esi
  unsigned int v2; // edi

  if ( LOBYTE(qword_B3BB2C[0x3AB]) ) /*0x6c31f0*/
  {
    LOBYTE(qword_B3BB2C[0x3AB]) = 0; /*0x6c3202*/
    sub_7125B0((int)"NiAlphaController"); /*0x6c3209*/
    sub_7125B0((int)"NiBlendAccumTransformInterpolator"); /*0x6c3213*/
    sub_7125B0((int)"NiBlendBoolInterpolator"); /*0x6c321d*/
    sub_7125B0((int)"NiBlendColorInterpolator"); /*0x6c3227*/
    sub_7125B0((int)"NiBlendFloatInterpolator"); /*0x6c3231*/
    sub_7125B0((int)"NiBlendPoint3Interpolator"); /*0x6c323b*/
    sub_7125B0((int)"NiBlendQuaternionInterpolator"); /*0x6c3245*/
    sub_7125B0((int)"NiBlendTransformInterpolator"); /*0x6c324f*/
    sub_7125B0((int)"NiBoneLODController"); /*0x6c3259*/
    sub_7125B0((int)"NiBoolData"); /*0x6c3263*/
    sub_7125B0((int)"NiBoolInterpolator"); /*0x6c326d*/
    sub_7125B0((int)"NiBoolTimelineInterpolator"); /*0x6c3277*/
    sub_7125B0((int)"NiBSplineBasisData"); /*0x6c3281*/
    sub_7125B0((int)"NiBSplineData"); /*0x6c328b*/
    sub_7125B0((int)"NiBSplineColorInterpolator"); /*0x6c3295*/
    sub_7125B0((int)"NiBSplineCompColorInterpolator"); /*0x6c329f*/
    sub_7125B0((int)"NiBSplineCompFloatInterpolator"); /*0x6c32ac*/
    sub_7125B0((int)"NiBSplineCompPoint3Interpolator"); /*0x6c32b6*/
    sub_7125B0((int)"NiBSplineCompTransformInterpolator"); /*0x6c32c0*/
    sub_7125B0((int)"NiBSplineFloatInterpolator"); /*0x6c32ca*/
    sub_7125B0((int)"NiBSplinePoint3Interpolator"); /*0x6c32d4*/
    sub_7125B0((int)"NiBSplineTransformInterpolator"); /*0x6c32de*/
    sub_7125B0((int)"NiColorData"); /*0x6c32e8*/
    sub_7125B0((int)"NiColorExtraDataController"); /*0x6c32f2*/
    sub_7125B0((int)"NiColorInterpolator"); /*0x6c32fc*/
    sub_7125B0((int)"NiControllerManager"); /*0x6c3306*/
    sub_7125B0((int)"NiControllerSequence"); /*0x6c3310*/
    sub_7125B0((int)"NiFlipController"); /*0x6c331a*/
    sub_7125B0((int)"NiFloatData"); /*0x6c3324*/
    sub_7125B0((int)"NiFloatExtraDataController"); /*0x6c332e*/
    sub_7125B0((int)"NiFloatInterpolator"); /*0x6c3338*/
    sub_7125B0((int)"NiFloatsExtraDataController"); /*0x6c3342*/
    sub_7125B0((int)"NiFloatsExtraDataPoint3Controller"); /*0x6c334f*/
    sub_7125B0((int)"NiGeomMorpherController"); /*0x6c3359*/
    sub_7125B0((int)"NiKeyframeController"); /*0x6c3363*/
    sub_7125B0((int)"NiKeyframeData"); /*0x6c336d*/
    sub_7125B0((int)"NiKeyframeManager"); /*0x6c3377*/
    sub_7125B0((int)"NiLightColorController"); /*0x6c3381*/
    sub_7125B0((int)"NiLightDimmerController"); /*0x6c338b*/
    sub_7125B0((int)"NiLookAtController"); /*0x6c3395*/
    sub_7125B0((int)"NiLookAtInterpolator"); /*0x6c339f*/
    sub_7125B0((int)"NiMaterialColorController"); /*0x6c33a9*/
    sub_7125B0((int)"NiMorphData"); /*0x6c33b3*/
    sub_7125B0((int)"NiMultiTargetTransformController"); /*0x6c33bd*/
    sub_7125B0((int)"NiPathController"); /*0x6c33c7*/
    sub_7125B0((int)"NiPathInterpolator"); /*0x6c33d1*/
    sub_7125B0((int)"NiPoint3Interpolator"); /*0x6c33db*/
    sub_7125B0((int)"NiPosData"); /*0x6c33e5*/
    sub_7125B0((int)"NiQuaternionInterpolator"); /*0x6c33f2*/
    sub_7125B0((int)"NiRollController"); /*0x6c33fc*/
    sub_7125B0((int)"NiRotData"); /*0x6c3406*/
    sub_7125B0((int)"NiSequence"); /*0x6c3410*/
    sub_7125B0((int)"NiSequenceStreamHelper"); /*0x6c341a*/
    sub_7125B0((int)"NiStringPalette"); /*0x6c3424*/
    sub_7125B0((int)"NiTextKeyExtraData"); /*0x6c342e*/
    sub_7125B0((int)"NiTextureTransformController"); /*0x6c3438*/
    sub_7125B0((int)"NiTransformController"); /*0x6c3442*/
    sub_7125B0((int)"NiTransformData"); /*0x6c344c*/
    sub_7125B0((int)"NiTransformInterpolator"); /*0x6c3456*/
    sub_7125B0((int)"NiUVController"); /*0x6c3460*/
    sub_7125B0((int)"NiUVData"); /*0x6c346a*/
    sub_7125B0((int)"NiVisController"); /*0x6c3474*/
    sub_7125B0((int)"NiVisData"); /*0x6c347e*/
    sub_7125D0((int)sub_6D43E0); /*0x6c3488*/
    v0 = (char *)unk_B3EA64; /*0x6c31a0*/
    if ( unk_B3EA64 ) /*0x6c31a0*/
    {
      do /*0x6c31d3*/
      {
        v1 = *(char **)v0; /*0x6c31b3*/
        v2 = (unsigned int)(v0 + 0xFFFFFFFC); /*0x6c31b5*/
        _LN21(v0, 0x1Cu, *((_DWORD *)v0 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_401160); /*0x6c31c1*/
        FormHeapFree(v2); /*0x6c31c7*/
        v0 = v1; /*0x6c31d1*/
      }
      while ( v1 ); /*0x6c31d3*/
    }
    unk_B3EA68 = 0; /*0x6c31d7*/
    unk_B3EA64 = 0; /*0x6c31dd*/
  }
}
