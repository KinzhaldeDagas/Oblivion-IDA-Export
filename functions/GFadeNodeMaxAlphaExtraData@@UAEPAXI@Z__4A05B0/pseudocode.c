FadeNodeMaxAlphaExtraData *__thiscall FadeNodeMaxAlphaExtraData::`scalar deleting destructor'(
        FadeNodeMaxAlphaExtraData *this,
        char a2)
{
  *(_DWORD *)this = &NiFloatExtraData::`vftable'; /*0x4a05b3*/
  NiExtraData_dtor((unsigned int *)this); /*0x4a05b9*/
  if ( (a2 & 1) != 0 ) /*0x4a05c3*/
    FormHeapFree((unsigned int)this); /*0x4a05c6*/
  return this; /*0x4a05d0*/
}
