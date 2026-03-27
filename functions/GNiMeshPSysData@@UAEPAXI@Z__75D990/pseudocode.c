NiMeshPSysData *__thiscall NiMeshPSysData::`scalar deleting destructor'(NiMeshPSysData *this, char a2)
{
  NiMeshPSysData::~NiMeshPSysData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
