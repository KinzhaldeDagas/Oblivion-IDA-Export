TESObjectDOOR *__thiscall TESObjectDOOR::`scalar deleting destructor'(TESObjectDOOR *this, char a2)
{
  TESObjectDOOR::~TESObjectDOOR(this); /*0x4b8a43*/
  if ( (a2 & 1) != 0 ) /*0x4b8a4d*/
    FormHeapFree((unsigned int)this); /*0x4b8a50*/
  return this; /*0x4b8a5a*/
}
