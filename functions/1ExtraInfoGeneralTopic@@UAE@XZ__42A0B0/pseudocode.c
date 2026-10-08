// ExtraInfoGeneralTopic destructor clears the cached MenuTopic's isInfoGeneralTopic ownership marker, destroys its responses/display name, then frees the MenuTopic allocation.
void __thiscall ExtraInfoGeneralTopic::Destructor(ExtraInfoGeneralTopicView *this)
{
  MenuTopicView *menuTopic; // edi

  this->super.vtbl = (BSExtraDataVtbl *)&ExtraInfoGeneralTopic::`vftable'; /*0x42a0d9*/
  this->menuTopic->isInfoGeneralTopic = 0; /*0x42a0e4*/
  menuTopic = this->menuTopic; /*0x42a0e7*/
  if ( menuTopic ) /*0x42a0f0*/
  {
    MenuTopic::Destroy(menuTopic); /*0x42a0f4*/
    FormHeapFree((unsigned int)menuTopic); /*0x42a0fa*/
  }
  this->super.vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable'; /*0x42a102*/
}
