ShadowSceneLight_DecodedLayout *__thiscall BSShaderLightingProperty_GetFirstLightUnfiltered(
        MEF_LightingPropertyIterationView32 *self)
{
  ShadowSceneLight_DecodedLayout *result; // eax

  result = (ShadowSceneLight_DecodedLayout *)self->lights.lightListHead_70; /*0x7ed160*/
  self->cursor_7C = (MEF_RefListNode32 *)result; /*0x7ed165*/
  if ( result ) /*0x7ed168*/
  {
    self->cursor_7C = *(MEF_RefListNode32 **)result->base_000; /*0x7ed16d*/
    return *(ShadowSceneLight_DecodedLayout **)&result->base_000[8]; /*0x7ed170*/
  }
  return result; /*0x7ed16a*/
}
