QueuedTexture *__thiscall QueuedTexture::`scalar deleting destructor'(QueuedTexture *this, char a2)
{
  QueuedTexture::~QueuedTexture(this); /*0x439393*/
  if ( (a2 & 1) != 0 ) /*0x43939d*/
    FormHeapFree((unsigned int)this); /*0x4393a0*/
  return this; /*0x4393aa*/
}
