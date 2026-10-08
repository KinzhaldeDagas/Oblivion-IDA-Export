// Construct the actor's type-0x59 cache entry and transfer ownership of the supplied MenuTopic pointer to it.
ExtraInfoGeneralTopicView *__thiscall ExtraInfoGeneralTopic::Constructor(
        ExtraInfoGeneralTopicView *this,
        MenuTopicView *menuTopic)
{
  this->super.members.type = 0x59;              // Oblivion registers this cache as extra-data type 0x59. Fallout's analogous ExtraInfoGeneralTopic uses type 0x4D (x4y6:0x82276370), so extra-data numeric IDs are executable-specific. /*0x42a146*/
  this->super.members.next = 0; /*0x42a14a*/
  this->super.vtbl = (BSExtraDataVtbl *)&ExtraInfoGeneralTopic::`vftable'; /*0x42a151*/
  this->menuTopic = menuTopic; /*0x42a157*/
  return this; /*0x42a15a*/
}
