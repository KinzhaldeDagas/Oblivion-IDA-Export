BoundItemEffect *__thiscall BoundItemEffect::`scalar deleting destructor'(BoundItemEffect *this, char a2)
{
  BoundItemEffect::~BoundItemEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
