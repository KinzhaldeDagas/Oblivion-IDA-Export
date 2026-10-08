// Initializes Oblivion NiRTTI_SpeedTreeLeafShaderProperty with native name 'SpeedTreeLeafShaderProperty' and parent NiRTTI_SpeedTreeShaderLightingProperty. This separate leaf lineage does not select 0x17A.
NiRTTI *__cdecl InitializeRTTI_SpeedTreeLeafShaderProperty()
{
  return NiRTTI_Constructor( /*0xa11af4*/
           &NiRTTI_SpeedTreeLeafShaderProperty,
           "SpeedTreeLeafShaderProperty",
           &NiRTTI_SpeedTreeShaderLightingProperty);
}
