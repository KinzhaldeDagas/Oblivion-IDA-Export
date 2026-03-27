BSTempNodeManager *__thiscall BSTempNodeManager::`scalar deleting destructor'(BSTempNodeManager *this, char a2)
{
  BSTempNodeManager::~BSTempNodeManager(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
