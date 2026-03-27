ExtraFollower *__thiscall ExtraFollower::`scalar deleting destructor'(ExtraFollower *this, char a2)
{
  ExtraFollower::~ExtraFollower(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
