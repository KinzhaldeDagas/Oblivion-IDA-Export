NiSkinPartition *__thiscall NiSkinPartition::`scalar deleting destructor'(NiSkinPartition *this, char a2)
{
  NiSkinPartition::~NiSkinPartition(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
