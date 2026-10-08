_DWORD *__thiscall sub_6D2250(int *this, unsigned int *a2)
{
  _DWORD *result; // eax

  result = j_NiSingleInterpController_LoadBinary(this, a2); /*0x6d2256*/
  if ( a2[0x36] < 0xA010068 ) /*0x6d2265*/
    return (_DWORD *)sub_712A20(a2); /*0x6d2269*/
  return result; /*0x6d226e*/
}
