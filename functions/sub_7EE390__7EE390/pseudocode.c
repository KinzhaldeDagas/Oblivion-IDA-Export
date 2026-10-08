// Oblivion per-light constant dispatcher. For active BSShaderProperty type 0x1B it calls Lighting30Shader_WriteType1BLightConstants; otherwise it uses the generic color path.
void __cdecl OB_BSShader_DispatchLightConstantUpdate_010201A0(
        unsigned int lightSlot,
        void *shadowSceneLight,
        float propertyDimmer)
{
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(**(_DWORD **)&OB_RendererGlobalState_010201A0[0x1F] + 0xBC) + 0x1C))(*(_DWORD *)(**(_DWORD **)&OB_RendererGlobalState_010201A0[0x1F] + 0xBC)) == 0x1B ) /*0x7ee3af*/
    Lighting30Shader_WriteType1BLightConstants(lightSlot, (int)shadowSceneLight, propertyDimmer); /*0x7ee3bb*/
  else
    OB_BSShader_UpdateLightColorConstant_010201A0(lightSlot, shadowSceneLight, propertyDimmer); /*0x7ee3ce*/
}
