ExtraTeleport *__thiscall ExtraTeleport::`scalar deleting destructor'(ExtraTeleport *this, char a2)
{
  ExtraTeleport::~ExtraTeleport(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
