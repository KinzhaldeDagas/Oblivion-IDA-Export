PathMiddleHigh *__thiscall PathMiddleHigh::`scalar deleting destructor'(PathMiddleHigh *this, char a2)
{
  PathMiddleHigh::~PathMiddleHigh(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
