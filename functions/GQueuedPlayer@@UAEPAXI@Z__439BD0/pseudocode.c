QueuedPlayer *__thiscall QueuedPlayer::`scalar deleting destructor'(QueuedPlayer *this, char a2)
{
  QueuedPlayer::~QueuedPlayer(this); /*0x439bd3*/
  if ( (a2 & 1) != 0 ) /*0x439bdd*/
    FormHeapFree((unsigned int)this); /*0x439be0*/
  return this; /*0x439bea*/
}
