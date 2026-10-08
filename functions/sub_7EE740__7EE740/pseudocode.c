// [Verified] Finds a DECAL_DATA* by payload identity in this property's list at +0x80, removes/frees the matching list node via the generic NiTPointerList removal routine, decrements +0x8C, and resets cached render-pass state at +0x24. Uses property+0x90 as its temporary next-node cursor; no payload ownership release occurs here.
void __thiscall BSShaderLightingProperty_RemoveDecalData(BSShaderLightingPropertyLayout_t *this, DECAL_DATA *data)
{
  int *head; // eax
  int *decalListRemovalCursor_90; // eax
  int *v5; // [esp+4h] [ebp-4h] BYREF

  if ( this->decalDataList_80.numItems ) /*0x7ee744*/
  {
    head = (int *)this->decalDataList_80.head; /*0x7ee74d*/
    this->decalListRemovalCursor_90 = (int)head; /*0x7ee755*/
    if ( head ) /*0x7ee75b*/
    {
      this->decalListRemovalCursor_90 = *head; /*0x7ee75f*/
      head = (int *)head[2]; /*0x7ee765*/
    }
    v5 = head; /*0x7ee76a*/
    if ( head ) /*0x7ee76e*/
    {
      while ( head != (int *)data ) /*0x7ee776*/
      {
        if ( this->decalListRemovalCursor_90 ) /*0x7ee778*/
        {
          decalListRemovalCursor_90 = (int *)this->decalListRemovalCursor_90; /*0x7ee781*/
          this->decalListRemovalCursor_90 = *decalListRemovalCursor_90; /*0x7ee789*/
          head = (int *)decalListRemovalCursor_90[2]; /*0x7ee78f*/
          v5 = head; /*0x7ee794*/
          if ( head ) /*0x7ee798*/
            continue; /*0x7ee798*/
        }
        return; /*0x7ee798*/
      }
      sub_776690((BSTextureManager *)&this->decalDataList_80, (int *)&v5); /*0x7ee7aa*/
      this->base.member.lastRenderPassState = 0; /*0x7ee7af*/
    }
  }
}
