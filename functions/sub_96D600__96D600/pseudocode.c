_DWORD *__thiscall sub_96D600(_DWORD *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x14u); /*0x96d605*/
  if ( !result ) /*0x96d60f*/
    return 0; /*0x96d633*/
  *result = &NiSphereBV::`vftable'; /*0x96d614*/
  result[1] = *(this + 1); /*0x96d61c*/
  result[2] = *(this + 2); /*0x96d622*/
  result[3] = *(this + 3); /*0x96d628*/
  result[4] = *(this + 4); /*0x96d62e*/
  return result; /*0x96d631*/
}
