void sub_6C31F0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  unsigned int v2; // edi

  if ( byte_B3C9D8 )
  {
    byte_B3C9D8 = 0;
    sub_7125B0((int)"NiAlphaController");
    sub_7125B0((int)"NiBlendAccumTransformInterpolator");
    sub_7125B0((int)"NiBlendBoolInterpolator");
    sub_7125B0((int)"NiBlendColorInterpolator");
    sub_7125B0((int)"NiBlendFloatInterpolator");
    sub_7125B0((int)"NiBlendPoint3Interpolator");
    sub_7125B0((int)"NiBlendQuaternionInterpolator");
    sub_7125B0((int)"NiBlendTransformInterpolator");
    sub_7125B0((int)"NiBoneLODController");
    sub_7125B0((int)"NiBoolData");
    sub_7125B0((int)"NiBoolInterpolator");
    sub_7125B0((int)"NiBoolTimelineInterpolator");
    sub_7125B0((int)"NiBSplineBasisData");
    sub_7125B0((int)"NiBSplineData");
    sub_7125B0((int)"NiBSplineColorInterpolator");
    sub_7125B0((int)"NiBSplineCompColorInterpolator");
    sub_7125B0((int)"NiBSplineCompFloatInterpolator");
    sub_7125B0((int)"NiBSplineCompPoint3Interpolator");
    sub_7125B0((int)"NiBSplineCompTransformInterpolator");
    sub_7125B0((int)"NiBSplineFloatInterpolator");
    sub_7125B0((int)"NiBSplinePoint3Interpolator");
    sub_7125B0((int)"NiBSplineTransformInterpolator");
    sub_7125B0((int)"NiColorData");
    sub_7125B0((int)"NiColorExtraDataController");
    sub_7125B0((int)"NiColorInterpolator");
    sub_7125B0((int)"NiControllerManager");
    sub_7125B0((int)"NiControllerSequence");
    sub_7125B0((int)"NiFlipController");
    sub_7125B0((int)"NiFloatData");
    sub_7125B0((int)"NiFloatExtraDataController");
    sub_7125B0((int)"NiFloatInterpolator");
    sub_7125B0((int)"NiFloatsExtraDataController");
    sub_7125B0((int)"NiFloatsExtraDataPoint3Controller");
    sub_7125B0((int)"NiGeomMorpherController");
    sub_7125B0((int)"NiKeyframeController");
    sub_7125B0((int)"NiKeyframeData");
    sub_7125B0((int)"NiKeyframeManager");
    sub_7125B0((int)"NiLightColorController");
    sub_7125B0((int)"NiLightDimmerController");
    sub_7125B0((int)"NiLookAtController");
    sub_7125B0((int)"NiLookAtInterpolator");
    sub_7125B0((int)"NiMaterialColorController");
    sub_7125B0((int)"NiMorphData");
    sub_7125B0((int)"NiMultiTargetTransformController");
    sub_7125B0((int)"NiPathController");
    sub_7125B0((int)"NiPathInterpolator");
    sub_7125B0((int)"NiPoint3Interpolator");
    sub_7125B0((int)"NiPosData");
    sub_7125B0((int)"NiQuaternionInterpolator");
    sub_7125B0((int)"NiRollController");
    sub_7125B0((int)"NiRotData");
    sub_7125B0((int)"NiSequence");
    sub_7125B0((int)"NiSequenceStreamHelper");
    sub_7125B0((int)"NiStringPalette");
    sub_7125B0((int)"NiTextKeyExtraData");
    sub_7125B0((int)"NiTextureTransformController");
    sub_7125B0((int)"NiTransformController");
    sub_7125B0((int)"NiTransformData");
    sub_7125B0((int)"NiTransformInterpolator");
    sub_7125B0((int)"NiUVController");
    sub_7125B0((int)"NiUVData");
    sub_7125B0((int)"NiVisController");
    sub_7125B0((int)"NiVisData");
    sub_7125D0((int)sub_6D43E0);
    v0 = dword_B3EA64;
    if ( dword_B3EA64 )
    {
      do
      {
        v1 = (_DWORD *)*v0;
        v2 = (unsigned int)(v0 + 0xFFFFFFFF);
        _LN21(v0, 0x1Cu, v0[0xFFFFFFFF], (void (__thiscall *)(void *))sub_401160);
        FormHeapFree(v2);
        v0 = v1;
      }
      while ( v1 );
    }
    dword_B3EA68 = 0;
    dword_B3EA64 = 0;
  }
}
