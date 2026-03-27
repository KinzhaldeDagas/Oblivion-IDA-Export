NiTextKeyExtraData *__thiscall NiTextKeyExtraData::`scalar deleting destructor'(NiTextKeyExtraData *this, char a2)
{
  NiTextKeyExtraData::~NiTextKeyExtraData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
