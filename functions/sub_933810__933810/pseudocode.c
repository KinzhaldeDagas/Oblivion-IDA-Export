int __thiscall sub_933810(int *this, unsigned __int16 a2)
{
  int *v2; // esi
  int v3; // ecx
  _DWORD *v4; // edx
  int v6; // [esp+8h] [ebp-4h]

  v2 = this + 1; /*0x93381b*/
  *(this + 2) = 0; /*0x93381e*/
  LOWORD(v6) = 0; /*0x933829*/
  if ( *(this + 2) == (*(this + 3) & 0x3FFFFFFF) ) /*0x93383d*/
    sub_8A6EE0((const void **)v2, 8); /*0x933842*/
  v3 = v2[1]; /*0x93384a*/
  v4 = (_DWORD *)*v2; /*0x93384d*/
  v4[2 * v3] = a2; /*0x933853*/
  v4[2 * v3 + 1] = v6; /*0x93385a*/
  ++v2[1]; /*0x93385e*/
  return v6; /*0x933861*/
}
