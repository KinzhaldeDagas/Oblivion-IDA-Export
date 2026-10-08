ExtraSavedMovementData *__thiscall ExtraSavedMovementData::`scalar deleting destructor'(
        ExtraSavedMovementData *this,
        char a2)
{
  ExtraSavedMovementData::~ExtraSavedMovementData(this); /*0x42af83*/
  if ( (a2 & 1) != 0 ) /*0x42af8d*/
    FormHeapFree((unsigned int)this); /*0x42af90*/
  return this; /*0x42af9a*/
}
