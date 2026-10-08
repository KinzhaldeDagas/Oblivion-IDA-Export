NiSkinPartition *__thiscall NiSkinPartition::`scalar deleting destructor'(NiSkinPartition *this, char a2)
{
  NiSkinPartition::~NiSkinPartition(this); /*0x72d163*/
  if ( (a2 & 1) != 0 ) /*0x72d16d*/
    FormHeapFree((unsigned int)this); /*0x72d170*/
  return this; /*0x72d17a*/
}
