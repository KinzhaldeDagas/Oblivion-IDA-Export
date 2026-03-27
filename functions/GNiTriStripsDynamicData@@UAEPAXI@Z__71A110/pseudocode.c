NiTriStripsDynamicData *__thiscall NiTriStripsDynamicData::`scalar deleting destructor'(
        NiTriStripsDynamicData *this,
        char a2)
{
  NiTriStripsDynamicData::~NiTriStripsDynamicData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
