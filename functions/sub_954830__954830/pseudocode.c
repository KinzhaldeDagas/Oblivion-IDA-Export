_BYTE *__thiscall sub_954830(_DWORD *this, _BYTE *a2, int a3, _DWORD *a4)
{
  _BYTE *result; // eax

  if ( *(int *)(a3 + 8) < 0x16 ) /*0x954838*/
  {
    result = a2; /*0x95483a*/
LABEL_3:
    *result = 1; /*0x95483e*/
    return result; /*0x954841*/
  }
  result = a2; /*0x95484d*/
  if ( *a4 > *(this + 5) ) /*0x954851*/
    goto LABEL_3; /*0x954851*/
  *a2 = 0; /*0x954853*/
  return result; /*0x954841*/
}
