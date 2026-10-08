IOManager *__thiscall IOManager::`scalar deleting destructor'(IOManager *this, char a2)
{
  IOManager::~IOManager(this); /*0x4345e3*/
  if ( (a2 & 1) != 0 ) /*0x4345ed*/
    FormHeapFree((unsigned int)this); /*0x4345f0*/
  return this; /*0x4345fa*/
}
