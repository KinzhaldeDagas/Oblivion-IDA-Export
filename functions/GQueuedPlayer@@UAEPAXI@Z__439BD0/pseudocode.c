QueuedPlayer *__thiscall QueuedPlayer::`scalar deleting destructor'(QueuedPlayer *this, char a2)
{
  QueuedPlayer::~QueuedPlayer(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
