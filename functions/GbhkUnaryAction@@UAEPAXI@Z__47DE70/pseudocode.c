bhkSerializable *__thiscall bhkUnaryAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkUnaryAction::~bhkUnaryAction(this); /*0x47de73*/
  if ( (a2 & 1) != 0 ) /*0x47de7d*/
    FormHeapFree((unsigned int)this); /*0x47de80*/
  return this; /*0x47de8a*/
}
