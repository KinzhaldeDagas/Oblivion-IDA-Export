_DWORD *__thiscall sub_769B10(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax
  int v4; // ecx

  v2 = this + 0x241; /*0x769b1a*/
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x241) + 4))(this + 0x241); /*0x769b22*/
  result[2] = a2; /*0x769b28*/
  result[1] = 0; /*0x769b2b*/
  *result = v2[1]; /*0x769b35*/
  v4 = v2[1]; /*0x769b37*/
  if ( v4 ) /*0x769b3c*/
  {
    *(_DWORD *)(v4 + 4) = result; /*0x769b3e*/
    ++v2[3]; /*0x769b41*/
  }
  else
  {
    ++v2[3]; /*0x769b4c*/
    v2[2] = result; /*0x769b50*/
  }
  v2[1] = result; /*0x769b45*/
  return result; /*0x769b48*/
}
