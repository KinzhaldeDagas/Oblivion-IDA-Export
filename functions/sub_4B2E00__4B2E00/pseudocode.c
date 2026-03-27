_DWORD *__thiscall sub_4B2E00(_DWORD *this, char a2)
{
  *this = &TESObjectExtraData::`vftable';
  *(this + 3) = 0;
  NiExtraData_dtor(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
