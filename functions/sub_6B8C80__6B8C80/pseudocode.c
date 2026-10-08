// Initialize an empty MenuTopic for extra-data loading: clear response nodes/cursors and all identity pointers, then initialize an empty display string.
MenuTopicView *__thiscall MenuTopic::InitializeEmpty(MenuTopicView *this)
{
  this->displayName.m_data = 0; /*0x6b8caa*/
  this->displayName.m_dataLen = 0; /*0x6b8cac*/
  this->displayName.m_bufLen = 0; /*0x6b8cb0*/
  this->firstResponse = 0; /*0x6b8cb4*/
  this->nextResponseNode = 0; /*0x6b8cb7*/
  this->currentResponseNode = 0; /*0x6b8cc4*/
  this->ownerQuest = 0; /*0x6b8cc7*/
  this->topic = 0; /*0x6b8cca*/
  this->info = 0; /*0x6b8ccd*/
  BSStringT_Set(&this->displayName, EmptyString, 0); /*0x6b8cd0*/
  return this; /*0x6b8cd7*/
}
