// Oblivion NiTransformController binary load. Uses generic single-interpolator controller loading, but for stream versions below 0x0A010068 additionally reads a legacy object link that represents NiTransformData.
_DWORD *__thiscall NiTransformController_LoadBinary(int *this, unsigned int *a2)
{
  _DWORD *result; // eax

  result = NiSingleInterpController_LoadBinary(this, a2); /*0x6c3656*/
  if ( a2[0x36] < 0xA010068 ) /*0x6c3665*/
    return (_DWORD *)sub_712A20(a2); /*0x6c3669*/
  return result; /*0x6c366e*/
}
