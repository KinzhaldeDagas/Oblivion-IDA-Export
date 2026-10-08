NiTriStripsDynamicData *__thiscall NiTriStripsDynamicData::`scalar deleting destructor'(
        NiTriStripsDynamicData *this,
        char a2)
{
  NiTriStripsDynamicData::~NiTriStripsDynamicData(this); /*0x71a113*/
  if ( (a2 & 1) != 0 ) /*0x71a11d*/
    FormHeapFree((unsigned int)this); /*0x71a120*/
  return this; /*0x71a12a*/
}
