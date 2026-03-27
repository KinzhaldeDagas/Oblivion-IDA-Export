NonActorMagicCaster *__thiscall NonActorMagicCaster::`scalar deleting destructor'(NonActorMagicCaster *this, char a2)
{
  NonActorMagicCaster::~NonActorMagicCaster(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
