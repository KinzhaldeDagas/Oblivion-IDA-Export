ExtraSavedMovementData *__thiscall ExtraSavedMovementData::`scalar deleting destructor'(
        ExtraSavedMovementData *this,
        char a2)
{
  ExtraSavedMovementData::~ExtraSavedMovementData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
