// Pass223/229/240: Engine startup property callback; seeds default Ni*Property globals and default plain NiFogProperty, then registers NIF factories.
int (__cdecl *sub_730D80())(__int16, int, int, int)
{
  int (__cdecl *result)(__int16, int, int, int); // eax

  if ( !LOBYTE(MEMORY[0xB3F9B0][0x180]) ) /*0x730d80*/
  {
    LOBYTE(MEMORY[0xB3F9B0][0x180]) = 1; /*0x730d8d*/
    sub_718630(); /*0x730d94*/
    sub_740FA0();                               // Fog decode: startup calls default plain NiFogProperty producer; this supports NIF/default property setup, not active world shader fog. /*0x730d99*/
    sub_7098B0(); /*0x730d9e*/
    sub_73FED0(); /*0x730da3*/
    sub_73DBB0(); /*0x730da8*/
    sub_719010(); /*0x730dad*/
    sub_705240(); /*0x730db2*/
    sub_7065A0(); /*0x730db7*/
    sub_706A40(); /*0x730dbc*/
    sub_706D20(); /*0x730dc1*/
    sub_71B190(); /*0x730dc6*/
    sub_714710(); /*0x730dcb*/
    sub_712590((int)"BSPackedAdditionalGeometryData", (TESForm *)sub_727D50); /*0x730dda*/
    sub_712590((int)"NiAdditionalGeometryData", (TESForm *)sub_7263C0); /*0x730de9*/
    sub_712590((int)"NiAlphaAccumulator", (TESForm *)sub_71A920); /*0x730df8*/
    sub_712590((int)"NiAlphaProperty", (TESForm *)sub_7185B0); /*0x730e07*/
    sub_712590((int)"NiAmbientLight", (TESForm *)sub_742210); /*0x730e16*/
    sub_712590((int)"NiAutoNormalParticles", (TESForm *)sub_741FC0); /*0x730e25*/
    sub_712590((int)"NiAutoNormalParticlesData", (TESForm *)sub_73F0D0); /*0x730e34*/
    sub_712590((int)"NiBillboardNode", (TESForm *)sub_722490); /*0x730e43*/
    sub_712590((int)"NiBinaryExtraData", (TESForm *)sub_727F20); /*0x730e55*/
    sub_712590((int)"NiBooleanExtraData", (TESForm *)sub_741D00); /*0x730e64*/
    sub_712590((int)"NiBSPNode", (TESForm *)sub_741BB0); /*0x730e73*/
    sub_712590((int)"NiCamera", (TESForm *)sub_70D730); /*0x730e82*/
    sub_712590((int)"NiClusterAccumulator", (TESForm *)sub_71A920); /*0x730e91*/
    sub_712590((int)"NiCollisionSwitch", (TESForm *)sub_70BA70); /*0x730ea0*/
    sub_712590((int)"NiColorExtraData", (TESForm *)sub_730560); /*0x730eaf*/
    sub_712590((int)"NiDefaultAVObjectPalette", (TESForm *)sub_716A40); /*0x730ebe*/
    sub_712590((int)"NiDirectionalLight", (TESForm *)sub_7197F0); /*0x730ed0*/
    sub_712590((int)"NiDitherProperty", (TESForm *)sub_741420); /*0x730edf*/
    sub_712590((int)"NiExtraData", (TESForm *)sub_7214D0); /*0x730eee*/
    sub_712590((int)"NiFloatExtraData", (TESForm *)sub_721190); /*0x730efd*/
    sub_712590((int)"NiFloatsExtraData", (TESForm *)sub_730150); /*0x730f0c*/
    sub_712590((int)"NiFogProperty", (TESForm *)sub_740E90);// Fog decode: startup registers the NiFogProperty factory. /*0x730f1b*/
    sub_712590((int)"NiIntegerExtraData", (TESForm *)sub_730920); /*0x730f2a*/
    sub_712590((int)"NiIntegersExtraData", (TESForm *)sub_740A10); /*0x730f39*/
    sub_712590((int)"NiLODNode", (TESForm *)sub_723BF0); /*0x730f4b*/
    sub_712590((int)"NiLines", (TESForm *)sub_717890); /*0x730f5a*/
    sub_712590((int)"NiLinesData", (TESForm *)sub_732B00); /*0x730f69*/
    sub_712590((int)"NiMaterialProperty", (TESForm *)sub_709710); /*0x730f78*/
    sub_712590((int)"NiNode", (TESForm *)sub_70BA70); /*0x730f87*/
    sub_712590((int)"NiPalette", (TESForm *)dword_732510); /*0x730f96*/
    sub_712590((int)"NiParticleMeshes", (TESForm *)sub_740680); /*0x730fa5*/
    sub_712590((int)"NiParticleMeshesData", (TESForm *)sub_740460); /*0x730fb4*/
    sub_712590((int)"NiParticles", (TESForm *)sub_741FC0); /*0x730fc6*/
    sub_712590((int)"NiParticlesData", (TESForm *)sub_73F0D0); /*0x730fd5*/
    sub_712590((int)"NiPixelData", (TESForm *)sub_70E870); /*0x730fe4*/
    sub_712590((int)"NiPointLight", (TESForm *)sub_725470); /*0x730ff3*/
    sub_712590((int)"NiRangeLODData", (TESForm *)sub_724E30); /*0x731002*/
    sub_712590((int)"NiRendererSpecificProperty", (TESForm *)sub_73FD60); /*0x731011*/
    sub_712590((int)"NiRotatingParticles", (TESForm *)sub_741FC0); /*0x731020*/
    sub_712590((int)"NiRotatingParticlesData", (TESForm *)sub_73F170); /*0x73102f*/
    sub_712590((int)"NiScreenLODData", (TESForm *)sub_73E880); /*0x731041*/
    sub_712590((int)"NiScreenElements", (TESForm *)sub_709C70); /*0x731050*/
    sub_712590((int)"NiScreenTexture", (TESForm *)sub_73DF50); /*0x73105f*/
    sub_712590((int)"NiShadeProperty", (TESForm *)sub_73DB40); /*0x73106e*/
    sub_712590((int)"NiSkinData", (TESForm *)sub_72F210); /*0x73107d*/
    sub_712590((int)"NiSkinInstance", (TESForm *)sub_72BD10); /*0x73108c*/
    sub_712590((int)"NiSkinPartition", (TESForm *)sub_72CAA0); /*0x73109b*/
    sub_712590((int)"NiSortAdjustNode", (TESForm *)sub_73D810); /*0x7310aa*/
    sub_712590((int)"NiSourceTexture", (TESForm *)NiSourceTexture::Create); /*0x7310bc*/
    sub_712590((int)"NiSourceCubeMap", (TESForm *)NiSourceCubeMap::Create); /*0x7310cb*/
    sub_712590((int)"NiSpecularProperty", (TESForm *)sub_73D670); /*0x7310da*/
    sub_712590((int)"NiSpotLight", (TESForm *)sub_73D270); /*0x7310e9*/
    sub_712590((int)"NiStencilProperty", (TESForm *)sub_718F80); /*0x7310f8*/
    sub_712590((int)"NiStringExtraData", (TESForm *)sub_716B20); /*0x731107*/
    sub_712590((int)"NiStringsExtraData", (TESForm *)sub_73CD30); /*0x731116*/
    sub_712590((int)"NiSwitchNode", (TESForm *)sub_724650); /*0x731125*/
    sub_712590((int)"NiSwitchStringExtraData", (TESForm *)sub_73C710); /*0x731137*/
    sub_712590((int)"NiTextureEffect", (TESForm *)sub_73BE60); /*0x731146*/
    sub_712590((int)"NiTexturingProperty", (TESForm *)sub_704A60); /*0x731155*/
    sub_712590((int)"NiTriShape", (TESForm *)sub_7175C0); /*0x731164*/
    sub_712590((int)"NiTriShapeData", (TESForm *)sub_71FD30); /*0x731173*/
    sub_712590((int)"NiTriShapeDynamicData", (TESForm *)sub_72ABF0); /*0x731182*/
    sub_712590((int)"NiTriStrips", (TESForm *)sub_719A40); /*0x731191*/
    sub_712590((int)"NiTriStripsData", (TESForm *)sub_719E00); /*0x7311a0*/
    sub_712590((int)"NiTriStripsDynamicData", (TESForm *)sub_73B520); /*0x7311b2*/
    sub_712590((int)"NiVectorExtraData", (TESForm *)sub_73B0B0); /*0x7311c1*/
    sub_712590((int)"NiVertexColorProperty", (TESForm *)sub_706530); /*0x7311d0*/
    sub_712590((int)"NiVertWeightsExtraData", (TESForm *)sub_730B70); /*0x7311df*/
    sub_712590((int)"NiWireframeProperty", (TESForm *)sub_7069C0); /*0x7311ee*/
    sub_712590((int)"NiZBufferProperty", (TESForm *)sub_706CB0); /*0x7311fd*/
    sub_712590((int)"NiScreenSpaceCamera", (TESForm *)sub_73A4A0); /*0x73120c*/
    sub_712590((int)"NiScreenGeometry", (TESForm *)sub_738830); /*0x73121b*/
    sub_712590((int)"NiScreenGeometryData", (TESForm *)sub_738AE0); /*0x73122d*/
    sub_712590((int)"NiScreenPolygon", (TESForm *)sub_7390D0); /*0x73123c*/
    sub_739980(); /*0x731244*/
    sub_700C50(); /*0x731249*/
    sub_725860(); /*0x73124e*/
    return sub_717440(); /*0x731253*/
  }
  return result; /*0x731258*/
}
