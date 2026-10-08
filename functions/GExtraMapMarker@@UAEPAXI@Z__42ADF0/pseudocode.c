ExtraMapMarker *__thiscall ExtraMapMarker::`scalar deleting destructor'(ExtraMapMarker *this, char a2)
{
  ExtraMapMarker::~ExtraMapMarker(this); /*0x42adf3*/
  if ( (a2 & 1) != 0 ) /*0x42adfd*/
    FormHeapFree((unsigned int)this); /*0x42ae00*/
  return this; /*0x42ae0a*/
}
