NiDevImageConverter *__thiscall NiDevImageConverter::`scalar deleting destructor'(NiDevImageConverter *this, char a2)
{
  NiDevImageConverter::~NiDevImageConverter(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
