NiTriShapeDynamicData *__thiscall NiTriShapeDynamicData::`scalar deleting destructor'(
        NiTriShapeDynamicData *this,
        char a2)
{
  NiTriShapeDynamicData::~NiTriShapeDynamicData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
