PathHigh *__thiscall PathHigh::`scalar deleting destructor'(PathHigh *this, char a2)
{
  PathHigh::~PathHigh(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
