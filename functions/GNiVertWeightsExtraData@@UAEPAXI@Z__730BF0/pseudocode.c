NiVertWeightsExtraData *__thiscall NiVertWeightsExtraData::`scalar deleting destructor'(
        NiVertWeightsExtraData *this,
        char a2)
{
  *(_DWORD *)this = &NiVertWeightsExtraData::`vftable';
  NiExtraData_dtor((unsigned int *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
