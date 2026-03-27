NiColorData *__thiscall NiColorData::`scalar deleting destructor'(NiColorData *this, char a2)
{
  NiColorData::~NiColorData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
