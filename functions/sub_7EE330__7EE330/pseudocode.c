// Insert ShadowSceneLight into BSShaderProperty+0x6C in receiver-distance order and clear property cache/dirty state.
unsigned __int8 __thiscall BSShaderProperty_AddShadowLight(
        _DWORD *this,
        ShadowSceneLight_DecodedLayout *light,
        MEF_ReceiverBound32 *bound)
{
  unsigned __int8 result; // al

  result = BSShaderProperty_FindShadowLightInsertionPoint( /*0x7ee344*/
             (MEF_PropertyShadowLightListView32 *)this,
             light,
             bound,
             (MEF_RefListNode32 **)&bound);
  if ( !result ) /*0x7ee34b*/
  {
    if ( bound ) /*0x7ee353*/
    {
      result = (unsigned __int8)NiTPointerList__InsertBeforePosition(this + 0x1B, (int)bound, &light); /*0x7ee35e*/
      *(this + 9) = 0; /*0x7ee363*/
      return result; /*0x7ee36b*/
    }
    result = (unsigned __int8)NiTPointerList__AddTail((BSTextureManager *)(this + 0x1B), (void **)&light); /*0x7ee376*/
  }
  *(this + 9) = 0; /*0x7ee37b*/
  return result; /*0x7ee36a*/
}
