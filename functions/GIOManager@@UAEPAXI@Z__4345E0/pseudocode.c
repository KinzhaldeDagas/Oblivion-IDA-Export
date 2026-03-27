IOManager *__thiscall IOManager::`scalar deleting destructor'(IOManager *this, char a2)
{
  IOManager::~IOManager(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
