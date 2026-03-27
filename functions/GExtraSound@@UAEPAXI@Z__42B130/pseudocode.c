ExtraSound *__thiscall ExtraSound::`scalar deleting destructor'(ExtraSound *this, char a2)
{
  ExtraSound::~ExtraSound(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
