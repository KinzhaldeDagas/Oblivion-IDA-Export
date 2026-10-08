ShadowSceneLight_DecodedLayout *__thiscall BSShaderLightingProperty_GetNextLightUnfiltered(
        MEF_LightingPropertyIterationView32 *self)
{
  MEF_RefListNode32 *cursor_7C; // eax

  if ( !self->cursor_7C ) /*0x7ed180*/
    return 0; /*0x7ed192*/
  cursor_7C = self->cursor_7C; /*0x7ed186*/
  self->cursor_7C = cursor_7C->next; /*0x7ed18b*/
  return (ShadowSceneLight_DecodedLayout *)cursor_7C->payload; /*0x7ed191*/
}
