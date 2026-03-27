NiSkinData *__thiscall NiSkinData::`scalar deleting destructor'(NiSkinData *this, char a2)
{
  NiSkinData::~NiSkinData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
