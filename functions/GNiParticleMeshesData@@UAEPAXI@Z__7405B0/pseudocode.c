NiGeometryData *__thiscall NiParticleMeshesData::`scalar deleting destructor'(NiGeometryData *this, char a2)
{
  NiParticleMeshesData::~NiParticleMeshesData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
