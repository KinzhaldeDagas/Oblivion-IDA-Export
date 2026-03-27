NonActorMagicTarget *__thiscall NonActorMagicTarget::`scalar deleting destructor'(NonActorMagicTarget *this, char a2)
{
  NonActorMagicTarget::~NonActorMagicTarget(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
