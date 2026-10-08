_DWORD *__thiscall sub_77D220(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // edx

  result = (_DWORD *)*(this + 0xB); /*0x77d220*/
  if ( !result ) /*0x77d228*/
    return 0; /*0x77d23c*/
  while ( result[9] < a2 ) /*0x77d233*/
  {
    result = (_DWORD *)result[0xF]; /*0x77d235*/
    if ( !result ) /*0x77d23a*/
      return 0; /*0x77d23a*/
  }
  v3 = result[0xF]; /*0x77d242*/
  if ( v3 ) /*0x77d247*/
    *(_DWORD *)(v3 + 0x40) = result[0x10]; /*0x77d24c*/
  v4 = result[0x10]; /*0x77d24f*/
  if ( v4 ) /*0x77d254*/
    *(_DWORD *)(v4 + 0x3C) = result[0xF]; /*0x77d259*/
  if ( result == (_DWORD *)*(this + 0xB) ) /*0x77d25f*/
    *(this + 0xB) = result[0xF]; /*0x77d264*/
  return result; /*0x77d23e*/
}
