// Return BSShaderProperty's native shadow-light list count from +0x78; +0x70 is the list head and +0x74 is the tail.
unsigned __int16 __thiscall BSShaderProperty_GetShadowLightCount(MEF_PropertyShadowLightListView32 *self)
{
  return self->lightListCount_78; /*0x7ed5c4*/
}
