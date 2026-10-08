int __stdcall sub_912340(_DWORD *a1, int **a2, int a3, __m128 *a4, int a5, int *a6)
{
  _DWORD *v6; // ecx
  int *v7; // eax
  __m128 v8; // xmm0
  int result; // eax
  __m128 v10[3]; // [esp+10h] [ebp-40h] BYREF
  int v11; // [esp+40h] [ebp-10h]
  int v12; // [esp+44h] [ebp-Ch]

  v6 = (_DWORD *)(*a1 + 4); /*0x91234e*/
  *a1 = v6; /*0x912351*/
  v7 = *a2; /*0x912368*/
  v10[2] = a4[*v6 + 2]; /*0x91236a*/
  v10[0] = *a4; /*0x912372*/
  v8 = a4[1]; /*0x912377*/
  *a2 = v7 + 4; /*0x91237e*/
  v10[1] = v8; /*0x912380*/
  v11 = *v7; /*0x912387*/
  v12 = v7[1]; /*0x912395*/
  sub_8F1970(v10, a5, a6); /*0x91239f*/
  result = a4[0xB].m128_i32[2] + 1; /*0x9123ad*/
  a4[0xB].m128_i32[2] = result; /*0x9123ae*/
  return result; /*0x9123b4*/
}
