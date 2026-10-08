_DWORD *__thiscall sub_634890(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax
  int v4; // ecx

  v2 = this + 0xC; /*0x634897*/
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0xC) + 4))(this + 0xC); /*0x63489c*/
  result[2] = a2; /*0x6348a2*/
  result[1] = 0; /*0x6348a5*/
  *result = v2[1]; /*0x6348af*/
  v4 = v2[1]; /*0x6348b1*/
  if ( v4 ) /*0x6348b6*/
  {
    *(_DWORD *)(v4 + 4) = result; /*0x6348b8*/
    ++v2[3]; /*0x6348bb*/
  }
  else
  {
    ++v2[3]; /*0x6348c6*/
    v2[2] = result; /*0x6348ca*/
  }
  v2[1] = result; /*0x6348bf*/
  return result; /*0x6348c2*/
}
