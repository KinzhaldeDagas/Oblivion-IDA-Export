// Pass223/229: Engine shutdown property callback; unregisters Ni*Property factories and clears default property globals.
void sub_731290()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  if ( LOBYTE(MEMORY[0xB3F9B0][0x180]) ) /*0x731290*/
  {
    LOBYTE(MEMORY[0xB3F9B0][0x180]) = 0; /*0x7312a2*/
    sub_7125B0((int)"BSPackedAdditionalGeometryData"); /*0x7312a9*/
    sub_7125B0((int)"NiAdditionalGeometryData"); /*0x7312b3*/
    sub_7125B0((int)"NiAlphaAccumulator"); /*0x7312bd*/
    sub_7125B0((int)"NiAlphaProperty"); /*0x7312c7*/
    sub_7125B0((int)"NiAmbientLight"); /*0x7312d1*/
    sub_7125B0((int)"NiAutoNormalParticles"); /*0x7312db*/
    sub_7125B0((int)"NiAutoNormalParticlesData"); /*0x7312e5*/
    sub_7125B0((int)"NiBillboardNode"); /*0x7312ef*/
    sub_7125B0((int)"NiBinaryExtraData"); /*0x7312f9*/
    sub_7125B0((int)"NiBooleanExtraData"); /*0x731303*/
    sub_7125B0((int)"NiBSPNode"); /*0x73130d*/
    sub_7125B0((int)"NiCamera"); /*0x731317*/
    sub_7125B0((int)"NiClusterAccumulator"); /*0x731321*/
    sub_7125B0((int)"NiCollisionSwitch"); /*0x73132b*/
    sub_7125B0((int)"NiColorExtraData"); /*0x731335*/
    sub_7125B0((int)"NiDefaultAVObjectPalette"); /*0x73133f*/
    sub_7125B0((int)"NiDirectionalLight"); /*0x73134c*/
    sub_7125B0((int)"NiDitherProperty"); /*0x731356*/
    sub_7125B0((int)"NiExtraData"); /*0x731360*/
    sub_7125B0((int)"NiFloatExtraData"); /*0x73136a*/
    sub_7125B0((int)"NiFloatsExtraData"); /*0x731374*/
    sub_7125B0((int)"NiFogProperty");           // Fog decode: shutdown unregisters the NiFogProperty factory. /*0x73137e*/
    sub_7125B0((int)"NiIntegerExtraData"); /*0x731388*/
    sub_7125B0((int)"NiIntegersExtraData"); /*0x731392*/
    sub_7125B0((int)"NiLODNode"); /*0x73139c*/
    sub_7125B0((int)"NiLines"); /*0x7313a6*/
    sub_7125B0((int)"NiLinesData"); /*0x7313b0*/
    sub_7125B0((int)"NiMaterialProperty"); /*0x7313ba*/
    sub_7125B0((int)"NiNode"); /*0x7313c4*/
    sub_7125B0((int)"NiPalette"); /*0x7313ce*/
    sub_7125B0((int)"NiParticleMeshes"); /*0x7313d8*/
    sub_7125B0((int)"NiParticleMeshesData"); /*0x7313e2*/
    sub_7125B0((int)"NiParticles"); /*0x7313ef*/
    sub_7125B0((int)"NiParticlesData"); /*0x7313f9*/
    sub_7125B0((int)"NiPixelData"); /*0x731403*/
    sub_7125B0((int)"NiPointLight"); /*0x73140d*/
    sub_7125B0((int)"NiRangeLODData"); /*0x731417*/
    sub_7125B0((int)"NiRendererSpecificProperty"); /*0x731421*/
    sub_7125B0((int)"NiRotatingParticles"); /*0x73142b*/
    sub_7125B0((int)"NiRotatingParticlesData"); /*0x731435*/
    sub_7125B0((int)"NiScreenLODData"); /*0x73143f*/
    sub_7125B0((int)"NiScreenTexture"); /*0x731449*/
    sub_7125B0((int)"NiShadeProperty"); /*0x731453*/
    sub_7125B0((int)"NiSkinData"); /*0x73145d*/
    sub_7125B0((int)"NiSkinInstance"); /*0x731467*/
    sub_7125B0((int)"NiSkinPartition"); /*0x731471*/
    sub_7125B0((int)"NiSortAdjustNode"); /*0x73147b*/
    sub_7125B0((int)"NiScreenElements"); /*0x731485*/
    sub_7125B0((int)"NiSourceTexture"); /*0x731492*/
    sub_7125B0((int)"NiSpecularProperty"); /*0x73149c*/
    sub_7125B0((int)"NiSpotLight"); /*0x7314a6*/
    sub_7125B0((int)"NiStencilProperty"); /*0x7314b0*/
    sub_7125B0((int)"NiStringExtraData"); /*0x7314ba*/
    sub_7125B0((int)"NiStringsExtraData"); /*0x7314c4*/
    sub_7125B0((int)"NiSwitchNode"); /*0x7314ce*/
    sub_7125B0((int)"NiSwitchStringExtraData"); /*0x7314d8*/
    sub_7125B0((int)"NiTextureEffect"); /*0x7314e2*/
    sub_7125B0((int)"NiTexturingProperty"); /*0x7314ec*/
    sub_7125B0((int)"NiTriShape"); /*0x7314f6*/
    sub_7125B0((int)"NiTriShapeData"); /*0x731500*/
    sub_7125B0((int)"NiTriShapeDynamicData"); /*0x73150a*/
    sub_7125B0((int)"NiTriStrips"); /*0x731514*/
    sub_7125B0((int)"NiTriStripsData"); /*0x73151e*/
    sub_7125B0((int)"NiTriStripsDynamicData"); /*0x731528*/
    sub_7125B0((int)"NiVectorExtraData"); /*0x731535*/
    sub_7125B0((int)"NiVertexColorProperty"); /*0x73153f*/
    sub_7125B0((int)"NiVertWeightsExtraData"); /*0x731549*/
    sub_7125B0((int)"NiWireframeProperty"); /*0x731553*/
    sub_7125B0((int)"NiZBufferProperty"); /*0x73155d*/
    sub_7125B0((int)"NiScreenGeometry"); /*0x731567*/
    sub_7125B0((int)"NiScreenGeometryData"); /*0x731571*/
    sub_7125B0((int)"NiScreenPolygon"); /*0x73157b*/
    sub_7125B0((int)"NiScreenSpaceCamera"); /*0x731585*/
    sub_7186F0(); /*0x73158d*/
    sub_741080();                               // Fog decode: shutdown clears the default plain NiFogProperty global. /*0x731592*/
    sub_709960(); /*0x731597*/
    sub_73FF80(); /*0x73159c*/
    sub_73DC60(); /*0x7315a1*/
    sub_7190D0(); /*0x7315a6*/
    sub_7040C0(); /*0x7315ab*/
    sub_706650(); /*0x7315b0*/
    sub_706AF0(); /*0x7315b5*/
    sub_706DD0(); /*0x7315ba*/
    sub_71B240(); /*0x7315bf*/
    sub_711F80(); /*0x7315c4*/
    sub_701630(); /*0x7315c9*/
    sub_73A640(); /*0x7315ce*/
    sub_700FD0(); /*0x7315d3*/
    sub_725870(); /*0x7315d8*/
    v0 = *(_DWORD **)&MEMORY[0xB33E90][0x18]; /*0x731260*/
    if ( *(_DWORD *)&MEMORY[0xB33E90][0x18] ) /*0x731260*/
    {
      do /*0x73127f*/
      {
        v1 = (_DWORD *)*v0; /*0x731270*/
        FormHeapFree((unsigned int)v0); /*0x731273*/
        v0 = v1; /*0x73127d*/
      }
      while ( v1 ); /*0x73127f*/
    }
    *(_DWORD *)&MEMORY[0xB33E90][0x1C] = 0; /*0x731282*/
    *(_DWORD *)&MEMORY[0xB33E90][0x18] = 0; /*0x731288*/
  }
}
