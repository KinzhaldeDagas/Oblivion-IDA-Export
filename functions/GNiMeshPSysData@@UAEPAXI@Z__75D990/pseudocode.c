NiMeshPSysData *__thiscall NiMeshPSysData::`scalar deleting destructor'(NiMeshPSysData *this, char a2)
{
  NiMeshPSysData::~NiMeshPSysData(this); /*0x75d993*/
  if ( (a2 & 1) != 0 ) /*0x75d99d*/
    FormHeapFree((unsigned int)this); /*0x75d9a0*/
  return this; /*0x75d9aa*/
}
