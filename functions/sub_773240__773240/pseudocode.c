_BYTE *__thiscall sub_773240(_DWORD *this)
{
  _BYTE *result; // eax
  int v2; // edx

  result = this + 0x17; /*0x773241*/
  v2 = 8; /*0x773244*/
  do /*0x77325b*/
  {
    result[0xFFFFFFD0] = 0; /*0x773250*/
    *result++ = 0; /*0x773253*/
    --v2; /*0x773258*/
  }
  while ( v2 ); /*0x77325b*/
  *(this + 0xD) = 0; /*0x77325d*/
  *(this + 1) = 0; /*0x773260*/
  return result; /*0x773263*/
}
