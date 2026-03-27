ExtraMapMarker *__thiscall ExtraMapMarker::`scalar deleting destructor'(ExtraMapMarker *this, char a2)
{
  ExtraMapMarker::~ExtraMapMarker(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
