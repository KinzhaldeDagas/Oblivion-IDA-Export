NiCollisionData *__thiscall NiCollisionData::`scalar deleting destructor'(NiCollisionData *this, char a2)
{
  NiCollisionData::~NiCollisionData(this); /*0x96dea3*/
  if ( (a2 & 1) != 0 ) /*0x96dead*/
    FormHeapFree((unsigned int)this); /*0x96deb0*/
  return this; /*0x96deba*/
}
