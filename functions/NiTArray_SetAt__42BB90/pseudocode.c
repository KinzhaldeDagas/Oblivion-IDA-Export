// Actually first arg is a generic NiTArray
// GPU-world execution audit 2026-09-29: NiSwitchNode 72441A calls this generic DWORD NiTArray setter with ECX=parent+EC, index=selected, value pointer=parent+E8. It writes data[index], extends WORD end at +A when index>=end, and adjusts WORD live count at +C for zero/nonzero transitions. No allocation, resize or capacity check occurs. Caller must prove index<capacity. Replacing this call with only a DWORD stamp store loses header semantics.
unsigned int __thiscall NiTArray_SetAt(NiTArray_NiTexturingPropertyMap *this, unsigned int a2, _DWORD *a3)
{
  unsigned int result; // eax
  _DWORD *v4; // edx
  NiTexturingProperty_Map *data; // esi

  result = a2; /*0x42bb94*/
  if ( a2 < this->end ) /*0x42bb9a*/
  {
    v4 = a3; /*0x42bbbc*/
    data = this->data; /*0x42bbc4*/
    if ( *a3 ) /*0x42bbc0*/
    {
      if ( !*((_DWORD *)&data->vtbl + a2) ) /*0x42bbc9*/
      {
        ++this->numObjs; /*0x42bbcf*/
        *((_DWORD *)&this->data->vtbl + a2) = *a3; /*0x42bbda*/
        return result; /*0x42bbdd*/
      }
    }
    else if ( *((_DWORD *)&data->vtbl + a2) ) /*0x42bbe0*/
    {
      --this->numObjs; /*0x42bbe6*/
    }
  }
  else
  {
    this->end = a2 + 1; /*0x42bb9f*/
    v4 = a3; /*0x42bba3*/
    if ( *a3 ) /*0x42bba7*/
    {
      ++this->numObjs; /*0x42bbac*/
      *((_DWORD *)&this->data->vtbl + a2) = *a3; /*0x42bbb6*/
      return result; /*0x42bbb9*/
    }
  }
  *((_DWORD *)&this->data->vtbl + a2) = *v4; /*0x42bbf2*/
  return result; /*0x42bbb9*/
}
