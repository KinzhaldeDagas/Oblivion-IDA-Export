NiControllerManager *__thiscall NiControllerManager::`scalar deleting destructor'(NiControllerManager *this, char a2)
{
  NiControllerManager::~NiControllerManager(this); /*0x6c55f3*/
  if ( (a2 & 1) != 0 ) /*0x6c55fd*/
    FormHeapFree((unsigned int)this); /*0x6c5600*/
  return this; /*0x6c560a*/
}
