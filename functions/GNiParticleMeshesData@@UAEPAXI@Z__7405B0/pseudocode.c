NiGeometryData *__thiscall NiParticleMeshesData::`scalar deleting destructor'(NiGeometryData *this, char a2)
{
  NiParticleMeshesData::~NiParticleMeshesData(this); /*0x7405b3*/
  if ( (a2 & 1) != 0 ) /*0x7405bd*/
    FormHeapFree((unsigned int)this); /*0x7405c0*/
  return this; /*0x7405ca*/
}
