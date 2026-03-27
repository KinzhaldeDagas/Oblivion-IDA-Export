ExtraRagDollData *__thiscall ExtraRagDollData::`scalar deleting destructor'(ExtraRagDollData *this, char a2)
{
  ExtraRagDollData::~ExtraRagDollData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
