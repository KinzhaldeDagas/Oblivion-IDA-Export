bool __thiscall MenuTopic::FirstResponse(MenuTopicView *this)
{
  this->currentResponseNode = (DialogueResponseNode *)&this->firstResponse; /*0x6b8565*/
  return this != (MenuTopicView *)0xFFFFFFF4 && this->firstResponse; /*0x6b8574*/
}
