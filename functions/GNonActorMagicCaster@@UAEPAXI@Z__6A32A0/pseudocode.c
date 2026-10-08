NonActorMagicCaster *__thiscall NonActorMagicCaster::`scalar deleting destructor'(NonActorMagicCaster *this, char a2)
{
  NonActorMagicCaster::~NonActorMagicCaster(this); /*0x6a32a3*/
  if ( (a2 & 1) != 0 ) /*0x6a32ad*/
    FormHeapFree((unsigned int)this); /*0x6a32b0*/
  return this; /*0x6a32ba*/
}
