NiDevImageConverter *__thiscall NiDevImageConverter::`scalar deleting destructor'(NiDevImageConverter *this, char a2)
{
  NiDevImageConverter::~NiDevImageConverter(this); /*0x71fa93*/
  if ( (a2 & 1) != 0 ) /*0x71fa9d*/
    FormHeapFree((unsigned int)this); /*0x71faa0*/
  return this; /*0x71faaa*/
}
