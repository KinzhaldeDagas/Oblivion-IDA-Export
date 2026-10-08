_DWORD *__thiscall sub_933870(int *this, __int16 a2, unsigned __int16 a3)
{
  int *v3; // esi
  int v4; // ecx
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // edx
  _DWORD *result; // eax
  int v9; // [esp+4h] [ebp-10h]
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+10h] [ebp-4h]

  v3 = this + 1; /*0x93387b*/
  *(this + 2) = 0; /*0x93387e*/
  LOWORD(v9) = a2; /*0x933884*/
  LOWORD(v11) = 0; /*0x933893*/
  HIWORD(v9) = 1; /*0x93389b*/
  LOWORD(v10) = 1; /*0x9338a0*/
  if ( *(this + 2) == (*(this + 3) & 0x3FFFFFFF) ) /*0x9338b6*/
    sub_8A6EE0((const void **)v3, 8); /*0x9338bb*/
  v4 = v3[1]; /*0x9338c3*/
  v5 = (_DWORD *)*v3; /*0x9338c6*/
  v5[2 * v4] = v9; /*0x9338cc*/
  v5[2 * v4 + 1] = v10; /*0x9338d3*/
  v6 = v3[1] + 1; /*0x9338da*/
  v3[1] = v6; /*0x9338db*/
  if ( v6 == (v3[2] & 0x3FFFFFFF) ) /*0x9338e9*/
    sub_8A6EE0((const void **)v3, 8); /*0x9338ee*/
  v7 = v3[1]; /*0x9338f6*/
  result = (_DWORD *)*v3; /*0x9338f9*/
  result[2 * v7] = a3; /*0x9338ff*/
  result[2 * v7 + 1] = v11; /*0x933906*/
  ++v3[1]; /*0x93390a*/
  return result; /*0x93390d*/
}
