QueuedTexture *__thiscall QueuedTexture::`scalar deleting destructor'(QueuedTexture *this, char a2)
{
  QueuedTexture::~QueuedTexture(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
