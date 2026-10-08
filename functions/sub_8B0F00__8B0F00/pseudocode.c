int __thiscall sub_8B0F00(int *this, unsigned int a2)
{
  int v2; // edx
  int v3; // esi
  int result; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x8b0f00*/
  v3 = *this; /*0x8b0f04*/
  result = v2 & (0x9E3779B1 * (a2 >> 4)); /*0x8b0f16*/
  v5 = *(_DWORD *)(*this + 4 * result); /*0x8b0f18*/
  if ( !v5 ) /*0x8b0f1d*/
    return v2 + 1; /*0x8b0f2e*/
  while ( v5 != a2 ) /*0x8b0f22*/
  {
    result = v2 & (result + 1); /*0x8b0f25*/
    v5 = *(_DWORD *)(v3 + 4 * result); /*0x8b0f27*/
    if ( !v5 ) /*0x8b0f2c*/
      return v2 + 1; /*0x8b0f2c*/
  }
  return result; /*0x8b0f31*/
}
