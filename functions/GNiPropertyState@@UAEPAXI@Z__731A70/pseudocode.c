NiPropertyState *__thiscall NiPropertyState::`scalar deleting destructor'(NiPropertyState *this, char a2)
{
  NiPropertyState::~NiPropertyState(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
