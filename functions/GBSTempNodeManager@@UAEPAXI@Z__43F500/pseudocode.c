BSTempNodeManager *__thiscall BSTempNodeManager::`scalar deleting destructor'(BSTempNodeManager *this, char a2)
{
  BSTempNodeManager::~BSTempNodeManager(this); /*0x43f503*/
  if ( (a2 & 1) != 0 ) /*0x43f50d*/
    FormHeapFree((unsigned int)this); /*0x43f510*/
  return this; /*0x43f51a*/
}
