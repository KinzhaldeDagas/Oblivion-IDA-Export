void sub_731290()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  if ( byte_B3FFB0 )
  {
    byte_B3FFB0 = 0;
    sub_7125B0((int)"BSPackedAdditionalGeometryData");
    sub_7125B0((int)"NiAdditionalGeometryData");
    sub_7125B0((int)"NiAlphaAccumulator");
    sub_7125B0((int)"NiAlphaProperty");
    sub_7125B0((int)"NiAmbientLight");
    sub_7125B0((int)"NiAutoNormalParticles");
    sub_7125B0((int)"NiAutoNormalParticlesData");
    sub_7125B0((int)"NiBillboardNode");
    sub_7125B0((int)"NiBinaryExtraData");
    sub_7125B0((int)"NiBooleanExtraData");
    sub_7125B0((int)"NiBSPNode");
    sub_7125B0((int)"NiCamera");
    sub_7125B0((int)"NiClusterAccumulator");
    sub_7125B0((int)"NiCollisionSwitch");
    sub_7125B0((int)"NiColorExtraData");
    sub_7125B0((int)"NiDefaultAVObjectPalette");
    sub_7125B0((int)"NiDirectionalLight");
    sub_7125B0((int)"NiDitherProperty");
    sub_7125B0((int)"NiExtraData");
    sub_7125B0((int)"NiFloatExtraData");
    sub_7125B0((int)"NiFloatsExtraData");
    sub_7125B0((int)"NiFogProperty");
    sub_7125B0((int)"NiIntegerExtraData");
    sub_7125B0((int)"NiIntegersExtraData");
    sub_7125B0((int)"NiLODNode");
    sub_7125B0((int)"NiLines");
    sub_7125B0((int)"NiLinesData");
    sub_7125B0((int)"NiMaterialProperty");
    sub_7125B0((int)"NiNode");
    sub_7125B0((int)"NiPalette");
    sub_7125B0((int)"NiParticleMeshes");
    sub_7125B0((int)"NiParticleMeshesData");
    sub_7125B0((int)"NiParticles");
    sub_7125B0((int)"NiParticlesData");
    sub_7125B0((int)"NiPixelData");
    sub_7125B0((int)"NiPointLight");
    sub_7125B0((int)"NiRangeLODData");
    sub_7125B0((int)"NiRendererSpecificProperty");
    sub_7125B0((int)"NiRotatingParticles");
    sub_7125B0((int)"NiRotatingParticlesData");
    sub_7125B0((int)"NiScreenLODData");
    sub_7125B0((int)"NiScreenTexture");
    sub_7125B0((int)"NiShadeProperty");
    sub_7125B0((int)"NiSkinData");
    sub_7125B0((int)"NiSkinInstance");
    sub_7125B0((int)"NiSkinPartition");
    sub_7125B0((int)"NiSortAdjustNode");
    sub_7125B0((int)"NiScreenElements");
    sub_7125B0((int)"NiSourceTexture");
    sub_7125B0((int)"NiSpecularProperty");
    sub_7125B0((int)"NiSpotLight");
    sub_7125B0((int)"NiStencilProperty");
    sub_7125B0((int)"NiStringExtraData");
    sub_7125B0((int)"NiStringsExtraData");
    sub_7125B0((int)"NiSwitchNode");
    sub_7125B0((int)"NiSwitchStringExtraData");
    sub_7125B0((int)"NiTextureEffect");
    sub_7125B0((int)"NiTexturingProperty");
    sub_7125B0((int)"NiTriShape");
    sub_7125B0((int)"NiTriShapeData");
    sub_7125B0((int)"NiTriShapeDynamicData");
    sub_7125B0((int)"NiTriStrips");
    sub_7125B0((int)"NiTriStripsData");
    sub_7125B0((int)"NiTriStripsDynamicData");
    sub_7125B0((int)"NiVectorExtraData");
    sub_7125B0((int)"NiVertexColorProperty");
    sub_7125B0((int)"NiVertWeightsExtraData");
    sub_7125B0((int)"NiWireframeProperty");
    sub_7125B0((int)"NiZBufferProperty");
    sub_7125B0((int)"NiScreenGeometry");
    sub_7125B0((int)"NiScreenGeometryData");
    sub_7125B0((int)"NiScreenPolygon");
    sub_7125B0((int)"NiScreenSpaceCamera");
    sub_7186F0();
    sub_741080();
    sub_709960();
    sub_73FF80();
    sub_73DC60();
    sub_7190D0();
    sub_7040C0();
    sub_706650();
    sub_706AF0();
    sub_706DD0();
    sub_71B240();
    sub_711F80();
    sub_701630();
    sub_73A640();
    sub_700FD0();
    sub_725870();
    v0 = (_DWORD *)dword_B33EA8;
    if ( dword_B33EA8 )
    {
      do
      {
        v1 = (_DWORD *)*v0;
        FormHeapFree((unsigned int)v0);
        v0 = v1;
      }
      while ( v1 );
    }
    dword_B33EAC = 0;
    dword_B33EA8 = 0;
  }
}
