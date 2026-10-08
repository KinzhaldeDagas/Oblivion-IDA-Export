_DWORD *__thiscall sub_954760(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  result = this; /*0x954760*/
  v2 = *(this + 9); /*0x954762*/
  result[0x12] = (int)result[3] >> v2 << v2; /*0x95476c*/
  result[0x15] = (((int)result[4] >> v2) + 1) << v2; /*0x954777*/
  v3 = result[9]; /*0x95477a*/
  result[0x13] = (int)result[5] >> v3 << v3; /*0x954784*/
  result[0x16] = (((int)result[6] >> v3) + 1) << v3; /*0x95478f*/
  v4 = result[9]; /*0x954792*/
  result[0x14] = (int)result[7] >> v4 << v4; /*0x95479c*/
  result[0x17] = (((int)result[8] >> v4) + 1) << v4; /*0x9547a7*/
  return result; /*0x9547aa*/
}
