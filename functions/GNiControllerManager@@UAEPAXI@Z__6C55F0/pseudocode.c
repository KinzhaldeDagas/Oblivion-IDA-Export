NiControllerManager *__thiscall NiControllerManager::`scalar deleting destructor'(NiControllerManager *this, char a2)
{
  NiControllerManager::~NiControllerManager(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
