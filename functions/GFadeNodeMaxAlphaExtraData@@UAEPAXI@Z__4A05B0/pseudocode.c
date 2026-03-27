FadeNodeMaxAlphaExtraData *__thiscall FadeNodeMaxAlphaExtraData::`scalar deleting destructor'(
        FadeNodeMaxAlphaExtraData *this,
        char a2)
{
  *(_DWORD *)this = &NiFloatExtraData::`vftable';
  NiExtraData_dtor(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
